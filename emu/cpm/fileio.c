#define _XOPEN_SOURCE 500
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>
#include <dirent.h>
#include "globals.h"

#define logf(args...) while (0)

struct file
{
	struct file* prev;
	struct file* next;
	cpm_filename_t filename;
	int fd;
	int flags;
};

#define NUM_FILES 16
static struct file files[NUM_FILES];
static struct file* firstfile;

static cpm_filename_t currentpattern;
static DIR* currentdir;

void files_init(void)
{
	for (int i=0; i<NUM_FILES; i++)
	{
		struct file* f = &files[i];
		if (i == 0)
			f->prev = NULL;
		else
			f->prev = &files[i-1];

		if (i == (NUM_FILES-1))
			f->next = NULL;
		else
			f->next = &files[i+1];

		memset(&f->filename, ' ', 11);
		f->fd = f->flags = 0;
	}

	firstfile = &files[0];
}

static void bump(struct file* f)
{
	if (f->prev)
		f->prev->next = f->next;
	if (f->next)
		f->next->prev = f->prev;
	if (f != firstfile)
	{
		f->prev = NULL;
		f->next = firstfile;
		firstfile = f;
	}
}

static void cpm_filename_to_unix(cpm_filename_t* cpmfilename, char* unixfilename)
{
	char* pin = cpmfilename->bytes;
	char* pout = unixfilename;

	for (int i=0; i<8; i++)
	{
		char c = *pin++;
		if (c != ' ')
			*pout++ = tolower(c);
	}
	*pout++ = '.';
	for (int i=0; i<3; i++)
	{
		char c = *pin++;
		if (c != ' ')
			*pout++ = tolower(c);
	}
	if (pout[-1] == '.')
		pout--;
	*pout = '\0';
}

static bool unix_filename_to_cpm(const char* unixfilename, cpm_filename_t* cpmfilename)
{
	const char* pin = unixfilename;

	memset(cpmfilename, ' ', sizeof(cpm_filename_t));
	char* pout = &cpmfilename->bytes[0];
	int count = 0;
	int maxcount = 8;
	for (;;)
	{
		char c = *pin++;
		if ((c == '.') && (maxcount == 8))
		{
			maxcount = 3;
			count = 0;
			pout = &cpmfilename->bytes[8];
		}
		else if (c == '\0')
			break;
		else if (count == maxcount)
			return false;
		else if (isupper(c))
			return false;
		else
		{
			*pout++ = toupper(c);
			count++;
		}
	}

	return true;
}

static bool match_filenames(cpm_filename_t* pattern, cpm_filename_t* filename)
{
	for (int i=0; i<sizeof(cpm_filename_t); i++)
	{
		char p = pattern->bytes[i];
		if (p == '?')
			continue;
		if (p != filename->bytes[i])
			return false;
	}
	return true;
}

static void reopen(struct file* f, int flags)
{
	if ((f->fd == 0) || ((f->flags == O_RDONLY) && (flags == O_RDWR)))
	{
		char unixfilename[13];
		cpm_filename_to_unix(&f->filename, unixfilename);

		if (f->fd)
		{
			logf("[reopening actual file '%s' on %d with different flags]\n", unixfilename, f->fd);
			close(f->fd);
		}

		f->flags = flags;
		f->fd = open(unixfilename, flags, 0666);
		logf("[opened actual file '%s' to fd %d]\n", unixfilename, f->fd);
	}

}

static struct file* find_file(cpm_filename_t* filename)
{
	struct file* f = firstfile;
	for (;;)
	{
		if (memcmp(filename, &f->filename, sizeof(cpm_filename_t)) == 0)
			break;

		if (f->next)
			f = f->next;
		else
		{
			logf("[allocating file %d for '%.11s']\n", f-files, filename);
			bump(f);
			if (f->fd)
			{
				logf("[closing old file %d for '%.11s']\n", f-files, &f->filename);
				close(f->fd);
			}
			f->fd = 0;
			f->filename = *filename;
			f->flags = 0;
			break;
		}
	}
	return f;
}

struct file* file_open(cpm_filename_t* filename)
{
	struct file* f = find_file(filename);
	reopen(f, O_RDONLY);
	if (f->fd <= 0)
		return NULL;
	return f;
}

struct file* file_create(cpm_filename_t* filename)
{
	struct file* f = find_file(filename);
	reopen(f, O_RDWR | O_CREAT);
	f->flags = O_RDWR;
	if (f->fd <= 0)
		return NULL;
	return f;
}

int file_close(cpm_filename_t* filename)
{
	struct file* f = find_file(filename);

	logf("[explicitly closing file %d for '%.11s']\n", f-files, &f->filename);
	if (f->fd)
	{
		logf("[closing file descriptor %d]\n", f->fd);
		close(f->fd);
	}

	memset(&f->filename, ' ', 11);
	f->fd = f->flags = 0;

	return 0;
}

int file_read(struct file* f, uint8_t* data, uint16_t record)
{
	if (!f->fd)
		return -1;
	
	logf("[read record %02x from file %d for '%.11s']\n", record, f-files, &f->filename);
	bump(f);
	memset(data, '\0', 128);
	return pread(f->fd, data, 128, record*128);
}


int file_write(struct file* f, uint8_t* data, uint16_t record)
{
	if (!f->fd)
		return -1;
	
	if (f->flags == O_RDONLY)
		reopen(f, O_RDWR);

	logf("[write record %02x from file %d for '%.11s']\n", record, f-files, &f->filename);
	bump(f);
	return pwrite(f->fd, data, 128, record*128);
}

int file_findfirst(cpm_filename_t* pattern)
{
	if (currentdir)
	{
		closedir(currentdir);
		currentdir = NULL;
	}

	currentpattern = *pattern;
	logf("[reset search; current find pattern is '%.11s']\n", &currentpattern);
	currentdir = opendir(".");
	if (currentdir)
		return 0;
	return -1;
}

int file_findnext(cpm_filename_t* result)
{
	for (;;)
	{
		if (!currentdir)
			return -1;

		struct dirent* de = readdir(currentdir);
		if (!de)
		{
			closedir(currentdir);
			currentdir = NULL;
			logf("[finished search]\n");
			return -1;
		}

		struct stat st;
		if ((stat(de->d_name, &st) == 0)
			&& S_ISREG(st.st_mode)
			&& unix_filename_to_cpm(de->d_name, result))
		{
			logf("[compare '%.11s' with pattern '%.11s']\n", result, &currentpattern);
			if (match_filenames(&currentpattern, result))
			{
				logf("[positive match]\n");
				return 0;
			}
		}
	}
}

