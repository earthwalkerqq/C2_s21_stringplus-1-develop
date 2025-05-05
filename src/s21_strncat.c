#include "s21_string.h"

char *s21_strncat(char *buffer, const char *src, size_t count) {
    int i;
    for (i = 0; buffer[i]; i++);
    for (int j = 0; src[j] && j != (int)count; i++, j++) {
        buffer[i] = src[j];
    }
    return buffer;
}