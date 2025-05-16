#include <stdlib.h>
#include <stdarg.h>
#include "s21_string.h"

int *s21_sprintf(char *buffer, char const *str, ...) {
    int num1 = 0, num2 = 0;
    int i = 0;
    char *tmp = NULL;
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
            switch (*str++)
            {
            case 'X':
            case 'x':
                tmp = convertToNumSys(va_arg(list, unsigned int), 16);
                size_t len = s21_strlen(tmp);
                if ((num1 - len) > 0) {
                    for (int j = 0; j <= num1; j++, i++) {
                        buffer[i] = ' ';
                    }
                }
                buffer[i++] = '\0';
                s21_strncat(buffer, tmp, len);
                break;
            case 'D':
            case 'd':
                tmp = itoa(va_arg(list, int));
                size_t len = s21_strlen(tmp);
                if ((num1 - len) > 0) {
                    for (int j = 0; j <= num1; j++, i++) {
                        buffer[i] = ' ';
                    }
                }
                buffer[i++] = '\0';
                s21_strncat(buffer, tmp, len);
                break;
            case 'C':
            case 'c':
                size_t len = 1;
                if ((num1 - len) > 0) {
                    for (int j = 0; j <= num1; j++, i++) {
                        buffer[i] = ' ';
                    }
                }
                buffer[i++] = '\0';
                s21_strncat(buffer, va_arg(list, char), len);
                break;
            case 'I':
            case 'i':
                // доделать спецификаторы
                break;
            case 'O':
            case 'o':
                tmp = convertToNumSys(va_arg(list, unsigned int), 8);
                size_t len = s21_strlen(tmp);
                if ((num1 - len) > 0) {
                    for (int j = 0; j <= num1; j++, i++) {
                        buffer[i] = ' ';
                    }
                }
                buffer[i++] = '\0';
                s21_strncat(buffer, tmp, len);
                break;
            case 'S':
            case 's':
                size_t len = 1;
                if ((num1 - len) > 0) {
                    for (int j = 0; j <= num1; j++, i++) {
                        buffer[i] = ' ';
                    }
                }
                buffer[i++] = '\0';
                s21_strncat(buffer, va_arg(list, char*), len);
                break;
            case 'f':

                break;
            }
        } else {
            buffer[i++] = *(str - 1);
        }
    }
    buffer[i] = '\0';
    va_end(list);
    return i + 1;
}

char *itoa(int num) {
    char *res = convertToNumSys((unsigned int)num, 10);
    if (num < 0) {
        int len = s21_strlen(res);
        len;
        res = realloc(res, (len + 1) * sizeof(char));
        for (int i = len; i > 0; i--) res[i] = res[i - 1];
        *res = '-';
    }
    return res;
}

char *itof(float num) {
    int len = 2;
    char *res = malloc(sizeof(char));
    for (; )
}

// возбмет десятичнуб чвасть по параметру округления 
int getDecimalPart(float val, int deg) {
    int num = (int)val;
    // дописать
}

char *convertToNumSys(unsigned int num, int numSys) {
    int len = 2;
    char *res = malloc(sizeof(char));
    for (int i = 0; num != 0; i++, len++, num /= numSys) {
        res = realloc(res, len * sizeof(char));
        res[i] = "0123456789abcdef"[num % numSys];
    }
    res[len - 1] = '\0';
    conversely(res, len);
    return res;
}

void conversely(char *str, int len) {
    for (int st = 0, fn = len - 2; st < fn; st++, fn--) {
        char temp = str[st];
        str[st] = str[fn];
        str[fn] = temp;
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
