#include "s21_string.h"

char *s21_strtok(char *str, const char *delim) {
    static char *last = NULL;
    char *token = NULL;
    if (str != NULL) {
        last = str;
    }
    if (last == NULL) {
        return NULL;
    }
    while (*last && s21_strchr(delim, *last) != NULL) {
        last++;
    }
    if (*last == '\0') {
        last = NULL;
        return NULL;
    }
    token = last;
    while (*last && s21_strchr(delim, *last) == NULL) {
        last++;
    }
    if (*last != '\0') {
        *last = '\0';
        last++;
    } else {
        last = NULL;
    }
    return token;
}