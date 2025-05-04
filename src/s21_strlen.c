#include "s21_string.h"

int strlen(const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        i++;
    }
    return i + 1;
}