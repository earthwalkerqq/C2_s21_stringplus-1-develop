#include "test_string.h"

START_TEST(test_memcpy_1) {
    char buffer[10];
    ck_assert_ptr_eq(s21_memcpy(buffer, "hello", 5), buffer);
    ck_assert_str_eq(buffer, "hello");
} END_TEST

START_TEST(test_memcpy_2) {
    char buffer[15];
    ck_assert_pnt_eq(s21_memcpy(buffer, "earthwalker", 5), buffer);
    ck_assert_str_eq(buffer, "earth");
} END_TEST