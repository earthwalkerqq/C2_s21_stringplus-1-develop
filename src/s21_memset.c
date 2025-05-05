#include "s21_string.h"

void *s21_memset(void *buffer, int value, size_t count) {
    unsigned char *Cbuffer = (unsigned char *)buffer;
    for (int i = 0; i < (int)count; i++) {
        Cbuffer[i] = (unsigned char)value;
    }
    return Cbuffer;
}