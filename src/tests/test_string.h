#ifndef TEST_STRING_H
#define TEST_STRING_H

#include <check.h>
#include <stdio.h>

#include "../s21_string.h"

Suite *test_s21_memchr(void);
Suite *test_s21_memcmp(void);
Suite *test_s21_memcpy(void);
Suite *test_s21_memset(void);
Suite *test_s21_strncpy(void);
Suite *test_s21_strchr(void);
Suite *test_s21_strcspn(void);
Suite *test_s21_strerror(void);
Suite *test_s21_strlen(void);
Suite *test_s21_strncat(void);
Suite *test_s21_strncmp(void);
Suite *test_s21_strpbrk(void);
Suite *test_s21_strrchr(void);
Suite *test_s21_strstr(void);

#endif