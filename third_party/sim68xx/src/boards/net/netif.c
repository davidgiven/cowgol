/* <<<                                  */
/* Copyright (c) 1994-1996 Arne Riiber. */
/* All rights reserved.                 */
/* >>>                                  */
/*
 * netif.c - net interface example
 */

/*
	Goals:	- netcommand sits on top of command
		- command should still be standalone
		- if this isn't possible, at least provide
		  possibility to disconnect TX/RX
*/

#include <errno.h>
#include <stdio.h>
#include <netdb.h>		/* /etc/hosts table entries */
#include <netinet/in.h>		/* internet socket addr */
#include <sys/socket.h>		/* AF_INET, SOCK_DGRAM, etc. */
#include <sys/time.h>		/* FD_ISSET, ... */
#include <sys/types.h>		/* u_short, etc. */

extern int h_errno;		/* Should have been in netdb.h */

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

extern char *progname;		/* name of the running program */


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

#ifdef MAIN


/*
 * sci_in - Serial Communications Interface input
 *
 * Called to send a buffer to the processor's SCI.
 */
sci_in (buf, nbytes)
	u_char *buf;
	int     nbytes;
{
	printf ("sci_in: ");
	fprinthex (stdout, buf, nbytes);
	return ferror (stdout);
}

/*
 * sci_out - Serial Communications Interface output
 *
 * Called by the processor simulator to output data from the processor's SCI.
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

commandprompt ()
{
	putchar ('\n');
	putchar ('>');
	fflush (stdout);
}

commandinit () {}
sci_out_install (func)
	int (*func) ();
{
}

command (char *buf)
{
	printf ("command: buf=%s\n", buf); return (*buf != 'q');
}

fprinthex (FILE *ofp, u_char *buf, int buflen)
{
	int i;
	for (i = 0; i < buflen; i++)
		fprintf (ofp, "%02x ", buf[i]);
	fprintf (ofp, "\n");
}

/*
 * commandloop - execute command loop
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
	commandinit ();
	sci_out_install (sci_out);

	while (1)
	{
		commandprompt ();
		/*
		 * Initialize the set of active descriptors:
		 * 0 (stdin) and sd (socket)
		 */
		FD_ZERO (&readfds);
		FD_SET (0, &readfds);
		if (connected)
			FD_SET (net.sd, &readfds);

		/*
		 * Wait until activity on at least one of the file descriptors
		 */
		if ((nfds = select (FD_SETSIZE, &readfds, NULL, NULL, NULL))
			< 0)
		{
			perror ("select");
			exit (errno);
		}

		if (FD_ISSET (fileno (ifp), &readfds))
		{
			if (fgets (buf, MAXBUFSIZE, ifp) == NULL)
				return ferror (ifp);

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
				return 0;
			}
		}

		if (FD_ISSET (net.sd , &readfds))
		{
			int nbytes;

			nbytes = net_read (&net, buf, sizeof (buf));
			printf ("%s: received: ", progname);
			fprinthex (stdout, buf, nbytes);
			printf ("\n");
			sci_in (buf, nbytes);
		}
	}
}

char *progname;

/*
 * Usage: progname [host] [port]
 */
main (int argc, char *argv[])
{
	char *host;
	int   port;

	if (argc >= 2)
		host = argv[1];
	else
		host = "localhost";

	if (argc >= 3)
		port = atoi (argv[2]);
	else
		port = 0;

	progname = argv[0];
	commandloop (stdin, host, port);
}
#endif
