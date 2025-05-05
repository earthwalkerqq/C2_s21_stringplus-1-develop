#include "s21_string.h"

char *s21_strstr(const char *haystack, const char *needle) {
    char *res = NULL;
    int i;
    for (i = 0; haystack[i]; i++) {
        if (haystack[i] == *needle) {
            for (int j = i + 1, k = 1; needle[k]; j++, k++) {
                if (!haystack[j] || haystack[j] != needle[k]) {
                    res = NULL;
                    break;
                }
                res = (res == NULL) ? (char *)haystack + j : res;
            }
        }
    }
    return res;
}