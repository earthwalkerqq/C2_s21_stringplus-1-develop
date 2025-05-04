#include "s21_string.h"

char *strchr(const char *buffer, int ch) {
    int i = 0;
    char *res = NULL;
    while (buffer[i] != '\0') {
        if ((int)buffer[i] == ch) {
            res = buffer + i;
            break;
        }
        i++;
    }
    return res;
}