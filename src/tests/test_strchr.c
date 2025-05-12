#include "s21_string.h"

START_TEST(test_strchr_1) {
    char buffer[15] = "earthwalker";
    ck_assert_pnt_eq(s21_strchr(buffer, 'e'), buffer);
} END_TEST

START_TEST(test_strchr_2) {
    char buffer[15] = "earthwalker";
    ck_assert_pnt_eq(s12_strchr(buffer, "t"), buffer + 3);
} END_TEST