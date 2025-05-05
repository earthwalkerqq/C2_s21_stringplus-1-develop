#ifndef S21_STRING_H
#define S21_STRING_H

#include <stdio.h>

void *s21_memchr(const void *buffer, int ch, size_t count);
int	s21_memcmp(const void *buffer1, const void *buffer2, size_t count);
void *s21_memcpy(void *buffer, void *src, size_t count);
void *s21_memset(void *buffer, int value, size_t count);
char *s21_strncat(char *buffer, const char *src, size_t count);
char *s21_strchr(const char *buffer, int ch);
int s21_strncmp(const char *buffer1, const char *buffer2, size_t count);
char *s21_strncpy(char *buffer, const char *src, size_t count);
int s21_strcspn(const char *src, const char *pool);
char *s21_strerror(int errnum);
size_t s21_strlen(const char *src);
char *s21_strpbrk(const char *src, const char *search);
char *s21_strrchr(const char *src, int ch);
char *s21_strstr(const char *haystack, const char *needle);
char *s21_strtok(char *target, const char *sep);

#endif
