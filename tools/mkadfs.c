#define _XOPEN_SOURCE 500
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>

static const char* output_filename = "adfs.adf";

static int boot_mode = 0;
static int disk_size = 1280;
static int disk_pos = 7;
static int disk_fd;

struct directory_entry
{
    uint8_t name[10];
    bool isdir;
    void* data;
    uint32_t sectors;
    uint32_t length;
    uint32_t start_sector;
    uint32_t load_address;
    uint32_t exec_address;
};

struct directory
{
    struct directory_entry* entries[47];
    uint32_t start_sector;
    uint32_t parent_sector;
    uint8_t name[10];
    uint8_t title[19];
    uint8_t data[0x500];
};

struct dirstack
{
    struct dirstack* next;
    struct directory* dir;
};

struct dirstack* cwd = NULL;
struct directory_entry* lastfile;

struct directory root_dir = {
    .parent_sector = 2,
    .name = "$\r\r\r\r\r\r\r\r\r",
    .title = "$\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r\r",
};

static void write_word(uint8_t* ptr, uint16_t value)
{
    ptr[0] = value;
    ptr[1] = value>>8;
}

static void write_triad(uint8_t* ptr, uint32_t value)
{
    ptr[0] = value;
    ptr[1] = value>>8;
    ptr[2] = value>>16;
}

static void write_quad(uint8_t* ptr, uint32_t value)
{
    ptr[0] = value;
    ptr[1] = value>>8;
    ptr[2] = value>>16;
    ptr[3] = value>>24;
}

static void add_de(struct directory* parent, const char* filename, bool isdir, uint32_t length, void* data)
{
    int pos = 0;
    while (parent->entries[pos])
    {
        pos++;
        if (pos == 47)
        {
            fprintf(stderr, "directory full\n");
            exit(1);
        }
    }

    lastfile = parent->entries[pos] = calloc(1, sizeof(struct directory_entry));

    lastfile->length = length;
    lastfile->data = data;
    lastfile->isdir = isdir;
    lastfile->load_address = lastfile->exec_address = 0xffffffff;

    memset(lastfile->name, 13, sizeof(lastfile->name));
    const char* leaf = strrchr(filename, '/');
    if (!leaf)
        leaf = filename;
    else
        leaf++;
    for (int i=0; i<sizeof(lastfile->name); i++)
    {
        char c = leaf[i];
        if ((c == '.') || (c == '\0'))
            break;
        lastfile->name[i] = c;
    }

    lastfile->sectors = ((length + 0xff) & ~0xff) >> 8;
    lastfile->start_sector = disk_pos;
    disk_pos += lastfile->sectors;
    if (disk_pos > disk_size)
    {
        fprintf(stderr, "no space on disk\n");
        exit(1);
    }
}

static void add_file(struct directory* parent, const char* filename)
{
    int fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        fprintf(stderr, "cannot open '%s': %s\n", filename, strerror(errno));
        exit(1);
    }

    struct stat st;
    fstat(fd, &st);

    void* data = mmap(NULL, st.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
    if (data == (void*)-1)
    {
        fprintf(stderr, "cannot load '%s': %s\n", filename, strerror(errno));
        exit(1);
    }

    add_de(parent, filename, false, st.st_size, data);
}

static struct directory* add_dir(struct directory* parent, const char* filename)
{
    struct directory* dir = calloc(1, sizeof(struct directory));
    add_de(parent, filename, true, 0x500, &dir->data);
    dir->parent_sector = parent->start_sector;
    dir->start_sector = lastfile->start_sector;
    memcpy(dir->name, lastfile->name, sizeof(dir->name));
    memset(dir->title, 13, sizeof(dir->title));
    memcpy(dir->title, lastfile->name, sizeof(dir->name));
    return dir;
}

static int filename_comparison(const void* leftp, const void* rightp)
{
    const struct directory_entry* left = *(struct directory_entry**)leftp;
    const struct directory_entry* right = *(struct directory_entry**)rightp;

    if (!left && !right)
        return 0;
    if (left && !right)
        return -1;
    if (!left && right)
        return 1;

    for (int i=0; i<sizeof(left->name); i++)
    {
        char leftc = tolower(left->name[i] & 0x7f);
        char rightc = tolower(right->name[i] & 0x7f);
        if (leftc < rightc)
            return -1;
        else if (leftc > rightc)
            return 1;
    }
    return 0;
}

static void compile_directory(struct directory* dir)
{
    qsort(dir->entries, 47, sizeof(void**), filename_comparison);

    memcpy(&dir->data[0x001], "Hugo", 4);
    memcpy(&dir->data[0x4fb], "Hugo", 4);
    memcpy(&dir->data[0x4cc], dir->name, sizeof(dir->name));
    memcpy(&dir->data[0x4d9], dir->title, sizeof(dir->title));
    write_triad(&dir->data[0x4d6], 2);

    for (int i=0; i<47; i++)
    {
        struct directory_entry* de = dir->entries[i];
        if (!de)
            continue;

        uint8_t* ptr = &dir->data[5 + i*0x1A];
        memcpy(&ptr[0x00], de->name, sizeof(de->name));
        ptr[0x00] |= 0x80;
        if (de->isdir)
            ptr[0x03] |= 0x80;
        else
            ptr[0x01] |= 0x80;

        write_quad(&ptr[0x0A], de->load_address);
        write_quad(&ptr[0x0E], de->exec_address);
        write_quad(&ptr[0x12], de->length);
        write_triad(&ptr[0x16], de->start_sector);
        ptr[0x19] = i;

        pwrite(disk_fd, de->data, 0x100 * de->sectors, de->start_sector * 0x100);
    }
}

static uint8_t checksum(uint8_t* ptr)
{
    uint16_t checksum = 0xff;
    for (int i=0xfe; i>=0; i--)
    {
        if (checksum > 0xff)
            checksum = (checksum + 1) & 0xff;
        checksum += ptr[i];
    }
    return checksum;
}

static void write_disk(void)
{
    uint8_t diskmap[512] = {};
    write_triad(&diskmap[0x000], disk_pos);
    write_triad(&diskmap[0x100], disk_size - disk_pos);
    write_triad(&diskmap[0x0fc], disk_size);
    write_word(&diskmap[0x1fb], rand());
    diskmap[0x1fd] = boot_mode;
    diskmap[0x1fe] = 3;
    diskmap[0x0ff] = checksum(&diskmap[0x000]);
    diskmap[0x1ff] = checksum(&diskmap[0x100]);
    pwrite(disk_fd, diskmap, sizeof(diskmap), 0x000);
}

int main(int argc, char* const argv[])
{
    cwd = calloc(1, sizeof(struct dirstack));
    cwd->dir = &root_dir;

    for (;;)
    {
        switch (getopt(argc, argv, "O:S:N:B:f:n:l:e:d:u"))
        {
            case -1:
                goto finished;

            case 'O':
                output_filename = optarg;
                disk_fd = open(output_filename, O_WRONLY|O_CREAT|O_TRUNC, 0644);
                if (disk_fd == -1)
                {
                    fprintf(stderr, "cannot open output file: %s\n", strerror(errno));
                    exit(1);
                }

                ftruncate(disk_fd, disk_size * 0x100);
                break;

            case 'S':
                disk_size = atoi(optarg);
                break;

            case 'N':
                memset(cwd->dir->title, 0, sizeof(cwd->dir->title));
                memcpy(cwd->dir->title, optarg, strlen(optarg));
                break;

            case 'B':
                boot_mode = atoi(optarg);
                break;

            case 'f':
                add_file(cwd->dir, optarg);
                break;

            case 'n':
                memset(&lastfile->name[0], 13, sizeof(lastfile->name));
                for (int i=0; i<sizeof(lastfile->name); i++)
                {
                    char c = optarg[i];
                    if (c == '\0')
                        break;
                    lastfile->name[i] = c;
                }
                break;

            case 'l':
                lastfile->load_address = strtoul(optarg, NULL, 0);
                if (lastfile->exec_address == 0xffffffff)
                    lastfile->exec_address = lastfile->load_address;
                break;

            case 'e':
                lastfile->exec_address = strtoul(optarg, NULL, 0);
                break;

            case 'd':
            {
                struct dirstack* ds = calloc(1, sizeof(struct dirstack));
                ds->next = cwd;
                ds->dir = add_dir(cwd->dir, optarg);
                cwd = ds;
                break;
            }

            case 'u':
                if (!cwd->next)
                {
                    fprintf(stderr, "at the root directory\n");
                    exit(1);
                }
                compile_directory(cwd->dir);
                cwd = cwd->next;
                break;

            default:
                fprintf(stderr, "Usage: mkdfs -O <diskname> -f <filename> ...\n");
                exit(1);
        }
    }
finished:
    while (cwd)
    {
        compile_directory(cwd->dir);
        cwd = cwd->next;
    }
    pwrite(disk_fd, root_dir.data, sizeof(root_dir.data), 0x200);
    write_disk();
    close(disk_fd);
}
