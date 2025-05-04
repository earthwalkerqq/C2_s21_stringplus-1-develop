#ifndef S21_STRING_H
#define S1_STRING_H

#include <stdio.h>

void *memchr(const void *buffer, int ch, size_t count);
int	memcmp(const void *buffer1, const void *buffer2, size_t count);
void *memcpy(void *to, const void *from, size_t count);
void *memset(void *buffer, int value, size_t count);
char *strncat(char *buffer, const char *src, size_t count);
char *strchr(const char *buffer, int ch);
int strncmp(const char *buffer1, const char *buffer2, size_t count);
char *strncpy(char *buffer, const char *src, size_t count);
int strcspn(const char *src, const char *pool);
int strlen(const char *src);

#endif
