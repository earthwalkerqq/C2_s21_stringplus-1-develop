#include "s21_string.h"

void *memchr(const void *buffer, int ch, size_t count) {
    void *res = NULL;
    unsigned char *Cbuffer = (unsigned char *)buffer;
    unsigned char chr = (unsigned char)ch;
    for (int i = 0; i < count; i++) {
        if (Cbuffer[i] == chr) {
            res = Cbuffer + i;
            break;
        }
    }
    return res;
}