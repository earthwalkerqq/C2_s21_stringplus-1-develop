#include "s21_string.h"

char *s21_strpbrk(const char *src, const char *search) {
    char *res = NULL;
    for (int i = 0; search[i]; i++) {
        for (int j = 0; src[j]; j++) {
            if (src[j] == search[i]) {
                res = (char *)src + i;
                break;
            }
        }
        if (res != NULL) break;
    }
    return res;
}