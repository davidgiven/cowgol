#ifndef FILEIO_H
#define FILEIO_H

typedef struct
{
	uint8_t drive;
	char bytes[11];
}
cpm_filename_t;

extern void files_init(void);
extern void file_set_drive(int drive, const char* path);
extern struct file* file_open(cpm_filename_t* filename);
extern struct file* file_create(cpm_filename_t* filename);
extern int file_close(cpm_filename_t* filename);
extern int file_read(struct file* file, uint8_t* data, uint32_t record);
extern int file_write(struct file* file, uint8_t* data, uint32_t record);
extern int file_getrecordcount(struct file* f);
extern void file_setrecordcount(struct file* f, uint32_t count);
extern int file_findfirst(cpm_filename_t* pattern);
extern int file_findnext(cpm_filename_t* result);
extern int file_delete(cpm_filename_t* pattern);
extern int file_rename(cpm_filename_t* src, cpm_filename_t* dest);

extern void exit_error(char* fmt, ...);

#endif
