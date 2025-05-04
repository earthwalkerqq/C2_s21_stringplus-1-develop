#include "s21_string.h"

int strcspn(const char *src, const char *pool) {
    int res = -1;
    int i = 0, j = 0;
    while (pool[i] != '\0') {
        while(src[j] != '\0') {
            if (src[j] == pool[i]) {
                res = j;
                break;
            }
            j++;
        }
        i++;
    }
    return (res == -1) ? j + 1 : res;
}