#include "s21_string.h"

char *s21_strncpy(char *buffer, const char *src, size_t count) {
    int i;
    for (i = 0; src[i] && (i + 1) != (int)count; i++) {
        buffer[i] = src[i];
    }
    buffer[i] = '\0';
    return buffer;
}