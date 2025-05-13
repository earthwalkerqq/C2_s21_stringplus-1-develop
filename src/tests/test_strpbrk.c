#include "s21_string.h"

START_TEST(test_strpbrk_1) {
    char buffer[15] = "earthwalker";
    ck_assert_pnt_eq(s21_strpbrk(buffer, "walker"), buffer + 5);
} END_TEST

START_TEST(test_strpbrk_2) {
    char buffer[15] = "earthwalker";
    ck_assert_pnt_eq(s21_strpbrk(buffer, "gg"), NULL);
} END_TEST