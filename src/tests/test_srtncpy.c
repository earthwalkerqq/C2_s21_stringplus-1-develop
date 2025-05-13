#include "s21_string.h"

START_TEST(test_strncpy_1) {
    char buffer[15];
    ck_assert_str_eq(s21_strncpy(buffer, "hello, world", 15), "hello, world");
} END_TEST

START_TEST(test_strncpt_2) {
    char buffer[15];
    ck_assert_str_eq(s21_strncpy(buffer, "earthwalker", 5), "earth");
} END_TEST

START_TEST(test_strncpy_3) {
    char buffer[15];
    ck_assert_str_eq(s21_strncpy(buffer, "earthwalker", 0), "");
}