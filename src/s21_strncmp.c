#include "s21_string.h"

int s21_strncmp(const char *buffer1, const char *buffer2, size_t count) {
    int res = 0;
    for (int i = 0; buffer1[i] && buffer2[i] && (i + 1) != (int)count; i++) {
        if (buffer1[i] != buffer2[i]) {
            res = buffer1[i] - buffer2[i];
            break;
        }
    }
    return res;
}