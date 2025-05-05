#include "s21_string.h"

char *s21_strchr(const char *buffer, int ch) {
    char *res = NULL;
    for (int i = 0; buffer[i]; i++) {
        if ((int)buffer[i] == ch) {
            res = (char *)buffer + i;
            break;
        }
    }
    return res;
}