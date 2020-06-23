/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
/*
 * netcommand.c - commandloop for connecting multiple simulators together
 *		  to a broadcast net using SCI
 */

#include <errno.h>
#include <stdio.h>
#include <netdb.h>		/* /etc/hosts table entries */
#include <netinet/in.h>		/* internet socket addr */
#include <sys/socket.h>		/* AF_INET, SOCK_DGRAM, etc. */
#include <sys/time.h>		/* FD_ISSET, ... */
#include <sys/types.h>		/* u_short, etc. */

#include <signal.h>
#include <unistd.h>

extern int h_errno;		/* Should have been declared in netdb.h */

#define MAXBUFSIZE 1024
#define BCAST_NAME "bcast"
#define BCAST_PORT 4040


enum en_connected { NONE = 0, TX = 0x01, RX = 0x02, TXRX = 0x03 };

struct net {
	int sd;
	struct sockaddr_in name;
};

static struct net net;		/* used in commandloop() and sci_out() */
static enum en_connected connected = NONE;

static int interrupted = 0;	/* SIGINT flag */
extern char *progname;		/* name of the running program */


sigint_handler (signum)
	int signum;
{
	interrupted = 1;
}

/*
 * net_init - create a connection endpoint
 */
net_init (struct net *net, char *host, int port)
{
	struct servent *servp;	/* To entry from /etc/services */

	if (host == NULL)
		host = "localhost";

	if (port == 0)
	{
		if ((servp = getservbyname (BCAST_NAME, "udp")) != NULL)
			port = ntohs (servp->s_port);
		else
		{
			port = BCAST_PORT;
			printf ("%s: Service %s (udp) not found", progname,
				BCAST_NAME);
			printf (" - using port %d\n", port);
		}
	}

	net->sd = sockinit (host, port, AF_INET, SOCK_DGRAM, &net->name, 0);
}

/*
 * net_write - write data to the net
 */
net_write (struct net *net, u_char *buf, int buflen)
{
	int nbytes;

	if ((nbytes = sendto (net->sd, buf, buflen, 0,
		   (struct sockaddr *) &net->name, sizeof net->name)) < 0)
	{
		perror ("sendto");
		exit (errno);
	}
	return nbytes;
}

/*
 * net_read - read data from the net
 */
net_read (struct net *net, u_char *buf, int buflen)
{
	int		nbytes;
	struct sockaddr from;
	int		fromlen;

	if ((nbytes = recvfrom (net->sd, buf, buflen, 0, &from, &fromlen)) < 0)
	{
		perror ("recvfrom");
		exit (errno);
	}
	return nbytes;
}

/*
 * sci_out - Serial Communications Interface output
 *
 * Installed to be called by the processor simulator to output data
 * from the processor's SCI to the net.
 */
sci_out (buf, nbytes)
	u_char *buf;
	int     nbytes;
{
	if (connected & TX)
		net_write (&net, buf, nbytes);

	if (!(connected & RX))
		fprinthex (stdout, buf, nbytes);

	return ferror (stdout);
}


/*
 * net_data_ready - called for each instruction to possibly read netdata
 */
net_data_ready ()
{
	static char buf[MAXBUFSIZE];
	static char count = 0;

	/*
	 * Only check each 256.th call
	 */
	if (count++ == 0 && (connected & RX))
	{
		fd_set readfds;
		static struct timeval t;	/* Initialized to 0 */
		int nbytes;
		int nfds;

		FD_ZERO (&readfds);
		FD_SET (net.sd, &readfds);

		if ((nfds = select (FD_SETSIZE, &readfds, NULL, NULL, &t)) < 0)
		{
			perror ("select");
			exit (errno);
		}
		if (nfds > 0)
		{
			nbytes = net_read (&net, buf, sizeof (buf));
			sci_in (buf, nbytes);
		}
	}
}

/*
 * commandloop - execute command loop
 *
 * Net is always disconnected when if eof is detected and input file is
 * standard input. This mechanism allows a "connect" from an ini-file
 * to be kept open until final exit.
 */
commandloop (ifp, host, port)
	FILE *ifp;
	char *host;
	int   port;
{
	char		buf[MAXBUFSIZE];
	fd_set		readfds;
	int		nfds;

	net_init (&net, host, port);
	signal (SIGQUIT, sigint_handler);
	commandinit ();
	sci_out_install (sci_out);
	pre_op_func_install (net_data_ready);

	while (1)
	{
		commandprompt ();
		/*
		 * Initialize the set of active descriptors:
		 * (input file) and sd (socket)
		 */
		FD_ZERO (&readfds);
		FD_SET (fileno (ifp), &readfds);
		if (connected)
			FD_SET (net.sd, &readfds);

		/*
		 * Wait until activity on at least one of the file descriptors
		 */
		if ((nfds = select (FD_SETSIZE, &readfds, NULL, NULL, NULL))
			< 0)
		{
			if (connected)
				net_write (&net, "disconnect",
					   strlen ("disconnect") + 1);
			exit (errno);
		}

		if (FD_ISSET (fileno (ifp), &readfds))
		{
			if (fgets (buf, MAXBUFSIZE, ifp) == NULL)
			{
				if (connected && ifp == stdin)
					net_write (&net, "disconnect",
						   strlen ("disconnect") + 1);
				return ferror (ifp);
			}

			if (!strncmp (buf, "connect", strlen ("connect")))
			{
				/*
				 * send buf to net and set connected
				 */
				net_write (&net, buf, strlen (buf) + 1);
				connected = TXRX;
			}
			else if (!strncmp (buf, "disconnect",
					   strlen ("disconnect")))
			{
				/*
				 * send buf to net
				 */
				net_write (&net, buf, strlen (buf) + 1);
				connected = NONE;
			}
			else if (!command (buf))
			{
				if (connected)
					net_write (&net, "disconnect",
						   strlen ("disconnect") + 1);
				return 0;
			}
		}

		if (FD_ISSET (net.sd , &readfds))
		{
			int nbytes;

			nbytes = net_read (&net, buf, sizeof (buf));
			sci_in (buf, nbytes);
		}
	}
}
