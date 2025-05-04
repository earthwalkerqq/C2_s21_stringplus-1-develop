#include "s21_string.h"

char *strncpy(char *buffer, const char *src, size_t count) {
    int i = 0;
    while (src[i] != '\0' && i != count) {
        buffer[i] = src[i];
        i++;
    }
    return buffer;
}