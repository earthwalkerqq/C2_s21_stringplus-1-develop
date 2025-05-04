#include "s21_string.h"

void *memcpy(void *buffer, void *src, size_t count) {
    unsigned char *Cbuffer = (unsigned char *)buffer;
    unsigned char *Csrc = (unsigned char *)src;
    if ((uintptr_t)Csrc % sizeof(unsigned long) == 0
        && (uintptr_t)Cbuffer % sizeof(unsigned long) == 0) {
        unsigned long *Lbuffer = (unsigned long *)Cbuffer;
        unsigned long *Lsrc = (unsigned long *)Csrc;
        int m = (int)(count / sizeof(unsigned long));
        for (int i = 0; i < m; i++) {
            Lbuffer[i] = Lsrc[i];
        }
        count = (int)(count % sizeof(unsigned long));
        Cbuffer = (unsigned char *)Lbuffer;
        Csrc = (unsigned char *)Lsrc;
    }
    for (int i = 0; i < count; i++) {
        Cbuffer[i] = Csrc[i];
    }
    return buffer;
}