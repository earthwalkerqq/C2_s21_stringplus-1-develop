#include "s21_string.h"

int strncmp(const char *buffer1, const char *buffer2, size_t count) {
    int i = 0, res = 0;
    while (buffer1[i] != '\0' && buffer2[i] != '\0' && i != count) {
        if (buffer1[i] != buffer2[i]) {
            res = buffer1[i] - buffer2[i];
            break;
        }
        i++;
    }
    return res;
}