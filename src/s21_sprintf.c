#include <stdlib.h>
#include <stdarg.h>
#include "s21_string.h"


char *s21_sprintf(char *buffer, char const *str, ...) {
    int num1 = 0, num2 = 0;
    int i = 0;
    va_list list;
    va_start(list, str);
    while (*str) {
        if (*str++ == '%') {
            if ((int)*str >= 49 && (int)*str <= 57) {
                num1 = modificationNumber(&str);
            }
            if (*str == '.') {
                str++;
                if ((int)*str >= 49 && (int)*str <= 57) {
                    num2 = modificationNumber(&str);
                }
            }
            
        } else {
            buffer[i++] = *(str - 1);
        }
    }
    va_end(list);
}

void convertToNumSys(char **buffer, size_t size, unsigned int num, int numSys) {
    char *p = *buffer;
    p[size - 1] = '\0';
    while (num) {
        *--p = "0123456789abcdef"[num % numSys];
        num /= numSys;
    }
}

int modificationNumber(char **src) {
    char *p = *src;
    char *res = NULL;
    int i;
    for (i = 0; *p != '.' && ((int)*p >= 48 && (int)*p <= 57); i++, p++) {
        res[i] = *p;
    }
    res[i] = '\0';
    return atoi(res); 
}
