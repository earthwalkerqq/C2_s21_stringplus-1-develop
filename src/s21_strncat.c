#include "s21_string.h"

char *strncat(char *buffer, const char *src, size_t count) {
    int i = 0, j = 0;
    while (buffer[i] != '\0') {
        i++;
    }
    while (src[j++] != '\0' && j != count) {
        buffer[i] = src[i++];
    }
    return buffer;
}