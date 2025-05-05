#include "s21_string.h"

size_t s21_strlen(const char *src) {
    size_t len = 0;
    for (; src[len]; len++);
    return len + 1;
}