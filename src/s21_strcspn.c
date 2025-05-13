#include "s21_string.h"

int s21_strcspn(const char *src, const char *pool) {
    int res = 0;
    for (int i = 0; pool[i]; i++) {
        for (int j = 0; src[j]; j++) {
            if (src[j] == pool[i]) {
                res = (!j) ? j : j + 1;
                break;
            }
        }
    }
    return res;
}