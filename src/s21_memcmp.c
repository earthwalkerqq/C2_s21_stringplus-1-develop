#include "s21_string.h"

int	memcmp(const void *buffer1, const void *buffer2, size_t count) {
    int res = 0;
    unsigned char *Cbuffer1 = (unsigned char *)buffer1;
    unsigned char *Cbuffer2 = (unsigned char *)buffer2;
    for (int i = 0; i < count; i++) {
        if (Cbuffer1[i] != Cbuffer2[i]) {
            res = (int)Cbuffer1[i] - (int)Cbuffer2[i];
            break;
        }
    }
    return res;
}