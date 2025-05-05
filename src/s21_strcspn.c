#include "s21_string.h"

int s21_strcspn(const char *src, const char *pool) {
    int res = -1;
    int j;
    for (int i = 0; pool[i]; i++) {
        for (j = 0; src[j]; j++) {
            if (src[j] == pool[i]) {
                res = j;
                break;
            }
        }
    }
    return (res == -1) ? j + 1 : res;
}