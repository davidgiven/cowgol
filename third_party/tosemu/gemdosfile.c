/*
 * TOSEMU - an emulated environment for TOS applications
 * Copyright (C) 2014 Johan Thelin <e8johan@gmail.com>
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 */

#include "gemdosfile_p.h"

#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <linux/limits.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <glob.h>
#include <libgen.h>

#include "m68k.h"
#include "cpu.h"
#include "utils.h"
#include "memory.h"

#include "gemdos_p.h"

/* File structures ***********************************************************/

#pragma pack(push,2)
struct DTA
{
    uint8_t   d_reserved[21];  /* Reserved for GEMDOS */
    uint8_t   d_attrib;        /* File attributes     */
    uint16_t  d_time;          /* Time                */
    uint16_t  d_date;          /* Date                */
    uint32_t  d_length;        /* File length         */
    int8_t    d_fname[14];     /* Filename            */
};
#pragma pack(pop)

struct fhandle
{
    FILE *f;
    uint32_t flags;
};

#define HANDLES 10
#define HANDLE_ALLOCATED 0x001

#define ATTR_READ_ONLY  0x01
#define ATTR_HIDDEN     0x02
#define ATTR_SYSTEM     0x04
#define ATTR_LABEL      0x08
#define ATTR_DIRECTORY  0x10
#define ATTR_ARCHIVE    0x20

static struct tos_environment *tos_env;

/* File functions ************************************************************/

uint32_t GEMDOS_Fseek()
{
    /*
     * STDIN       Current File Handle 0 (standard input)
     * STDOUT      Current File Handle 1 (standard output)
     * STDERR      Current File Handle 2 (standard error)
     * 
     * seekmode Type of repositioning:
     *       0 =     From start of file
     *       1 =     From current position
     *       2 =     From end of file
     */
    
    uint16_t seekmode = peek_u16(8);
    uint16_t handle = peek_u16(6);
    uint32_t offset = peek_u32(2);
    off_t ret;
    int whence;
    
    FUNC_TRACE_ENTER_ARGS {
        printf("    offset: 0x%x, handle: 0x%x, seekmode: 0x%x\n", offset, handle, seekmode);
    }
    
    switch (seekmode)
    {
    case 0: /* From start of file */
        whence = SEEK_SET;
        break;
    case 1: /* From current position */
        whence = SEEK_CUR;
        break;
    case 2: /* From end of file */
        whence = SEEK_END;
        break;
    default:
        return GEMDOS_EINVAL;
    }
    
    ret = lseek(handle, offset, whence);
    
    if (ret < 0)
    {
        switch(errno)
        {
        case EBADF:
            return GEMDOS_EIHNDL;
        case ESPIPE:
            return GEMDOS_EACCDN;
        case EINVAL:
            return GEMDOS_EINVAL;
        case EOVERFLOW:
        case ENXIO:
        default:
            return GEMDOS_EINTRN;
        }
    }
    
    return ret;
}

uint32_t GEMDOS_Fdatime()
{
    struct stat buf;
    struct tm *lt;
    int ret;
    uint32_t res;
    
    uint16_t wflag = peek_u16(8);
    uint16_t handle = peek_u16(6);
    uint32_t ptr = peek_u32(2);
    
    if (wflag == 0)
    {
        /* Read time */
        
        ret = fstat(handle, &buf);
        
        if (!ret)
        {
            lt = localtime(&buf.st_mtime);
    
            res = (lt->tm_sec / 2) |
                  (lt->tm_min << 5) |
                  (lt->tm_hour << 11) |
                  (lt->tm_mday << 16) |
                  ((lt->tm_mon+1) << 21) |
                  ((lt->tm_year-80) << 25);

            m68k_write_memory_32(ptr, res);
                  
            return 0;
        }
        else if (ret == EBADF)
            return GEMDOS_EIHNDL;
        else
            return GEMDOS_EINTRN;
    }
    else
        return GEMDOS_EINVAL; /* TODO we do not support setting datime, only reading */
}

uint32_t GEMDOS_Dgetdrv()
{
    return 2; /* C: */
}

uint32_t dta_addr;

uint32_t GEMDOS_Fgetdta()
{
    FUNC_TRACE_ENTER
    
    return dta_addr;
}

uint32_t GEMDOS_Fsetdta()
{
    uint32_t addr = peek_u32(2);
    
    FUNC_TRACE_ENTER_ARGS {
        printf("    0x%x\n", addr);
    }
        
    dta_addr = addr;
    
    return 0;
}

static int get_path(char *buf, uint32_t address)
{
    int i=1;
    buf[0] = m68k_read_disassembler_8(address);
    
    while(buf[i-1] && i<PATH_MAX)
    {
        buf[i] = m68k_read_disassembler_8(address+i);
        ++i;
    }

    return i;
}

uint32_t GEMDOS_Dgetpath()
{
    uint32_t addr = peek_u32(2);
    uint16_t drive = peek_u32(6);
    char buf[256];
    char ubuf[PATH_MAX+1];
    int i;

    FUNC_TRACE_ENTER_ARGS {
        printf("    addr: 0x%x, drive=%d\n", addr, drive);
    }

    memset(buf, 0, PATH_MAX+1);
    memset(ubuf, 0, PATH_MAX+1);
    getcwd(ubuf, sizeof ubuf);

    i=0;
    do
    {
        m68k_write_memory_8(addr+i, ubuf[i]);
        ++i;
    }
    while(ubuf[i-1]!=0 && i<PATH_MAX);

    return 0;
}

/* 
 * Converts a TOS path to a host path 
 *
 * Returns the lenght of the resulting path on success, or zero on failure.
 */
static int path_from_tos(char *tp, char *up)
{
    char tbuf[PATH_MAX+1];
    int len;
    char *src, *dest;
    int prev_slash = 1;
    
    memset(tbuf, 0, PATH_MAX+1);
    
    /* Prepend prefix */
    strncpy(up, tos_env->base_path, PATH_MAX);
    len = strlen(up);
    src = tp;
    dest = up + len;
    
    /* Convert \ -> / */
    while(*src && len < PATH_MAX)
    {
        switch(*src)
        {
        case '\\':
            if (!prev_slash)
            {
                *dest = '/';
                ++ dest;
            }
            prev_slash = 1;
            
            break;
        default:
            *dest = *src;
            ++ dest;
            
            prev_slash = 0;

            break;
        }
        
        ++ src;
        ++ len;
    }
    
    /* Make canonical */ /* TODO, this limits the usage of symbolic links when mixing the TOS and host file systems */
    realpath(up, tbuf);
    
    if (tos_env->base_path[0] != 0)
    {
        /* Ensure within prefix */    
        if (strncmp(up, tbuf, strlen(tos_env->base_path)-1))
            return 0;
    }
    
    return strlen(up);
}

uint32_t GEMDOS_Dsetpath()
{
    uint32_t addr = peek_u32(2);
    char buf[256];
    char ubuf[PATH_MAX+1];

    FUNC_TRACE_ENTER_ARGS {
        printf("    addr: 0x%x\n", addr);
    }

    memset(buf, 0, PATH_MAX+1);
    memset(ubuf, 0, PATH_MAX+1);
    get_path(buf, addr);

    if (!path_from_tos(buf, ubuf))
        return GEMDOS_EFILNF;

    if (chdir(ubuf))
        perror("chdir");

    return 0;
}

uint32_t GEMDOS_Dcreate()
{
    uint32_t addr = peek_u32(2);
    char buf[PATH_MAX+1];
    char ubuf[PATH_MAX+1];

    FUNC_TRACE_ENTER_ARGS {
        printf("    addr: 0x%x\n", addr);
    }

    memset(buf, 0, PATH_MAX+1);
    memset(ubuf, 0, PATH_MAX+1);
    get_path(buf, addr);

    if (!path_from_tos(buf, ubuf))
        return GEMDOS_EFILNF;

    if(mkdir(ubuf, 0777) != 0)
        return GEMDOS_EACCDN;

    return 0;
}

uint32_t GEMDOS_Fdelete()
{
    uint32_t addr = peek_u32(2);
    char buf[PATH_MAX+1];
    char ubuf[PATH_MAX+1];

    FUNC_TRACE_ENTER_ARGS {
        printf("    addr: 0x%x\n", addr);
    }

    memset(buf, 0, PATH_MAX+1);
    memset(ubuf, 0, PATH_MAX+1);
    get_path(buf, addr);

    if (!path_from_tos(buf, ubuf))
        return GEMDOS_EFILNF;

    if (unlink(ubuf) != 0)
        return GEMDOS_EFILNF;

    return 0;
}

static struct fhandle handles[HANDLES];

static int get_handle(FILE *f)
{
    int i;
    for (i = 0; i < HANDLES; i++)
    {
        if (handles[i].flags & HANDLE_ALLOCATED)
            continue;
        handles[i].f = f;
        handles[i].flags = HANDLE_ALLOCATED;
        return i;
    }
    return -1;
}

static void make_dirs(char *path)
{
    char *start, *end;

    start = path;
    while ((end = strchr(start, '/')) != NULL)
    {
        *end = 0;
        if (mkdir(path, 0777) < 0 && errno != EEXIST)
            perror("mkdir");
        *end = '/';
        start = end + 1;
    }
}

uint32_t GEMDOS_Fcreate()
{
    uint32_t addr = peek_u32(2);
    char buf[PATH_MAX+1];
    char ubuf[PATH_MAX+1];
    int h, fd;

    FUNC_TRACE_ENTER_ARGS {
        printf("    addr: 0x%x\n", addr);
    }

    memset(buf, 0, PATH_MAX+1);
    memset(ubuf, 0, PATH_MAX+1);
    get_path(buf, addr);

    if (!path_from_tos(buf, ubuf))
        return GEMDOS_EFILNF;

    make_dirs(ubuf);
    fd = creat(ubuf, 0777);
    if (fd < 0)
        return GEMDOS_EACCDN;

    h = get_handle(fdopen(fd, "w"));

    return h;
}

struct globitem;
struct globitem {
    glob_t *g;
    int id;
    
    struct globitem *next;
};

struct globitem *globhead = 0;

glob_t *gemdos_prepare_dta(int *id)
{
    static int sid = 42;
    glob_t *res;
    struct globitem *item;
    
    sid ++;
    res = malloc(sizeof(glob_t));
    item = malloc(sizeof(struct globitem));
    
    item->g = res;
    item->id = sid;
    item->next = globhead;
    globhead = item;
    
    *id = sid;
    return res;
}

glob_t *gemdos_find_dta(int *id)
{
    struct globitem *ptr = globhead;
    while (ptr) {
        if (ptr->id == *id)
            return ptr->g;
        ptr = ptr->next;
    }
    
    return 0;
}

/* TODO where would be a good place to call this? Fsnext? */
void gemdos_clear_dta(int *id)
{
    struct globitem *ptr, *pptr;
    
    pptr = 0;
    ptr = globhead;
    while (ptr) {
        if (ptr->id == *id) {
            if (pptr)
                pptr->next = ptr->next;
            else
                globhead = ptr->next;
            
            globfree(ptr->g);
            free(ptr);
            
            return;
        }
        pptr = ptr;
        ptr = ptr->next;
    }
}

static uint16_t mode_to_attrib(mode_t mode)
{
  uint16_t attrib = 0;

  if (S_ISDIR(mode))
      attrib |= ATTR_DIRECTORY;

  return attrib;
}

uint32_t GEMDOS_Fsfirst()
{
    glob_t *gres;
    struct stat sres;
    struct tm *lt;

    char buf[PATH_MAX+1];
    char ubuf[PATH_MAX+1];

    int i;
    int gres_id;
    char *bn;

    struct DTA *dta;

    uint32_t filename = peek_u32(2);
    uint16_t attr = peek_u16(6);
    
    FUNC_TRACE_ENTER_ARGS {
        printf("    filename: 0x%x, attr: 0x%x\n", filename, attr);
    }
    
    memset(buf, 0, PATH_MAX+1);
    memset(ubuf, 0, PATH_MAX+1);
    
    gres = gemdos_prepare_dta(&gres_id);
    
    get_path(buf, filename);
    
    if (!path_from_tos(buf, ubuf))
        return GEMDOS_EFILNF;
    
    /* TODO, take attr into account */
    
    if ((i = glob(ubuf, 0, 0, gres)) == 0) {
        if (gres->gl_pathc>0) {
            stat(gres->gl_pathv[0], &sres);
            lt = localtime(&sres.st_mtime);
            
            dta = (struct DTA*)(tos_mem_to_host_mem(dta_addr));
            
            ((int*)dta)[0] = gres_id;
            ((int*)dta)[1] = 0;
            
            /* 
            Bit 0:  File is write-protected
            Bit 1:  File is hidden
            Bit 2:  System file
            Bit 3:  Volume label (diskette name)
            Bit 4:  Directory
            Bit 5:  Archive bit 
            */
            dta->d_attrib = mode_to_attrib(sres.st_mode);
            
            /*
            0-4 Seconds in units of two (0-29)
            5-10    Minutes (0-59)
            11-15   Hours (0-23)
            */
            dta->d_time = endianize_16(
                            (lt->tm_sec / 2) |
                            (lt->tm_min << 5) |
                            (lt->tm_hour << 11));
            
            /*
            0-4 Day (1-31)
            5-8     Month (1-12)
            9-15    Year (0-119, 0= 1980)
            */
            dta->d_date = endianize_16(
                            lt->tm_mday |
                          ((lt->tm_mon+1) << 5) |
                          ((lt->tm_year-80) << 9));
            
            dta->d_length = endianize_32(sres.st_size);
            
            bn = basename(gres->gl_pathv[0]);
            memset(dta->d_fname, 0, 14);
            strncpy((char*)dta->d_fname, bn, 13);
        }
    } else {
        switch(i)
        {
            case GLOB_NOSPACE:
            case GLOB_ABORTED:
            case GLOB_NOMATCH:
                return GEMDOS_EFILNF;
            default:
                return GEMDOS_EFILNF;
        }
    }
    
    return GEMDOS_E_OK;
}

uint32_t GEMDOS_Fsnext()
{
    glob_t *gres;
    struct stat sres;
    struct tm *lt;

    int i;
    char *bn;

    struct DTA *dta;

    FUNC_TRACE_ENTER
    
    dta = (struct DTA*)(tos_mem_to_host_mem(dta_addr));
    gres = gemdos_find_dta((int*)dta);
    i = ((int*)dta)[1] + 1;
    ((int*)dta)[1] = i;
    
    /* TODO, take attr into account */

    if (i < gres->gl_pathc) {
        stat(gres->gl_pathv[i], &sres);
        lt = localtime(&sres.st_mtime);
            
        /* 
        Bit 0:  File is write-protected
        Bit 1:  File is hidden
        Bit 2:  System file
        Bit 3:  Volume label (diskette name)
        Bit 4:  Directory
        Bit 5:  Archive bit 
        */
        dta->d_attrib = mode_to_attrib(sres.st_mode);
        
        /*
        0-4 Seconds in units of two (0-29)
        5-10    Minutes (0-59)
        11-15   Hours (0-23)
        */
        dta->d_time = endianize_16(
                        (lt->tm_sec / 2) |
                        (lt->tm_min << 5) |
                        (lt->tm_hour << 11));
        
        /*
        0-4 Day (1-31)
        5-8     Month (1-12)
        9-15    Year (0-119, 0= 1980)
        */
        dta->d_date = endianize_16(
                        lt->tm_mday |
                        ((lt->tm_mon+1) << 5) |
                        ((lt->tm_year-80) << 9));
        
        dta->d_length = endianize_32(sres.st_size);
        
        bn = basename(gres->gl_pathv[i]);
        memset(dta->d_fname, 0, 14);
        strncpy((char*)dta->d_fname, bn, 13);
    }
    else
    {
        return GEMDOS_ENMFIL;
    }

            
    return GEMDOS_E_OK;   
}

uint32_t GEMDOS_Fopen()
{
    char buf[PATH_MAX+1];
    char ubuf[PATH_MAX+1];

    const char *m;
    FILE *f;
    int h;

    uint32_t filename = peek_u32(2);
    uint16_t mode = peek_u16(6);

    FUNC_TRACE_ENTER_ARGS {
        printf("    filename: 0x%x, mode: 0x%x\n", filename, mode);
    }

    memset(buf, 0, PATH_MAX+1);
    memset(ubuf, 0, PATH_MAX+1);
    
    get_path(buf, filename);

    if (!path_from_tos(buf, ubuf))
        return GEMDOS_EFILNF;

    switch(mode & 0x3)
    {
    case 0:
        m = "r";
        break;
    case 1:
        m = "w";
        break;
    case 2:
        m = "r+";
        break;
    case 3:
        return GEMDOS_EINVAL;
        break;
    }

    f = fopen(ubuf, m);
    if (f == NULL)
        return GEMDOS_EFILNF;

    h = get_handle(f);
    if (h == -1)
        return GEMDOS_ENHNDL;

    return h;
}

uint32_t GEMDOS_Fattrib()
{
    struct stat st;
    char buf[PATH_MAX+1];
    char ubuf[PATH_MAX+1];

    uint32_t filename = peek_u32(2);
    uint16_t wflag = peek_u16(6);
    uint16_t attr = peek_u16(8);

    FUNC_TRACE_ENTER_ARGS {
        printf("    filename: 0x%x, wflag: %d, attr: 0x%x\n",
               filename, wflag, attr);
    }

    memset(buf, 0, PATH_MAX+1);
    memset(ubuf, 0, PATH_MAX+1);
    
    get_path(buf, filename);

    if (!path_from_tos(buf, ubuf))
        return GEMDOS_EFILNF;

    if (stat(ubuf, &st) < 0)
        return GEMDOS_EFILNF;

    return mode_to_attrib(st.st_mode);
}

static int invalid_handle(uint16_t h)
{
    return (h >= HANDLES) || !(handles[h].flags & HANDLE_ALLOCATED);
}

uint32_t GEMDOS_Fclose()
{
    uint16_t h = peek_u16(2);

    if (invalid_handle(h))
        return GEMDOS_EIHNDL;

    handles[h].flags = 0;
    fclose(handles[h].f);
    return GEMDOS_E_OK;
}

uint32_t GEMDOS_Fread()
{
    uint16_t h = peek_u16(2);
    uint32_t len = peek_u32(4);
    uint32_t buf = peek_u32(8);
    uint8_t *tmp;
    size_t n;
    int i;

    if (invalid_handle(h))
        return GEMDOS_EIHNDL;

    tmp = malloc(len);
    if (tmp == NULL)
        return GEMDOS_ENSMEM;

    n = fread(tmp, 1, len, handles[h].f);
    if (ferror(handles[h].f))
    {
        free(tmp);
        return GEMDOS_EINTRN;
    }

    for (i = 0; i < n; i++)
        m68k_write_memory_8(buf+i, tmp[i]);

    free(tmp);
    return n;
}

uint32_t GEMDOS_Fwrite()
{
    uint16_t h = peek_u16(2);
    uint32_t len = peek_u32(4);
    uint32_t buf = peek_u32(8);
    uint8_t *tmp;
    size_t n;
    int i;

    FUNC_TRACE_ENTER_ARGS {
        printf("    handle: %d, len: %d, buf: %x\n", h, len , buf);
    }

    if (invalid_handle(h))
        return GEMDOS_EIHNDL;

    tmp = malloc(len);
    if (tmp == NULL)
        return GEMDOS_ENSMEM;

    for (i = 0; i < len; i++)
        tmp[i] = m68k_read_memory_8(buf+i);

    n = fwrite(tmp, 1, len, handles[h].f);
    if (ferror(handles[h].f))
    {
        free(tmp);
        return GEMDOS_EINTRN;
    }

    free(tmp);
    return n;
}

void gemdos_file_init(struct tos_environment *te)
{
    int i;

    dta_addr = 0x000830; /* TODO this is probably cheating, points to reserved memory */

    memset(handles, 0, sizeof handles);
    /* Handles 0-5 are reserved. */
    for (i = 0; i < 6; i++)
        handles[i].flags = HANDLE_ALLOCATED;
    handles[0].f = stdin;
    handles[1].f = stdout;

    tos_env = te;
}

void gemdos_file_free()
{
}
