#include "s21_string.h"

char *s21_strncpy(char *buffer, const char *src, size_t count) {
    for (int i = 0; src[i] && i != (int)count; i++) {
        buffer[i] = src[i];
    }
    return buffer;
}