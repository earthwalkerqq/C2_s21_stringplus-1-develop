#include "test_string.h"

START_TEST(test_memcmp_1) {
    ck_assert_int_eq(s21_memcmp("hello", "hello", 5), 0);
} END_TEST

START_TEST(test_memcmp_2) {
    ck_assert_int_eq(s21_memcmp("hel", "hol", 3), (int)"e" - (int)"o");
} END_TEST

START_TEST(test_memcmp_3) {
    ck_assert_int_eq(s21_memcmp("", "", 1), 0);
} END_TEST

START_TEST(test_memcmp_4) {
    ck_assert_int_eq(s21_memcmp("A", "b", 1), (int)"A" - (int)"b");
} END_TEST