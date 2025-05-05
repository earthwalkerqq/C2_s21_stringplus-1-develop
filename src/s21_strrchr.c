#include "s21_string.h"

char *s21_strrchr(const char *src, int ch) {
    char *res = NULL;
    for (int i = 0; src[i]; i++) {
        if (src[i] == ch) res = (char *)src + i;
    }
    return res;
}