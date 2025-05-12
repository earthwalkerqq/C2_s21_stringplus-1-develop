#include "test_string.h"

START_TEST(test_s21_memchr_1) {
    char string[] = "hello, world";
    ck_assert_int_eq((int)'h', *(int *)s21_memchr(string, (int)'h', 5));
} END_TEST