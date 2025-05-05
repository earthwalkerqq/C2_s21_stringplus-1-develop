#include "s21_string.h"

void *s21_memchr(const void *buffer, int ch, size_t count) {
    void *res = NULL;
    unsigned char *Cbuffer = (unsigned char *)buffer;
    unsigned char chr = (unsigned char)ch;
    for (int i = 0; i < (int)count; i++) {
        if (Cbuffer[i] == chr) {
            res = Cbuffer + i;
            break;
        }
    }
    return res;
}