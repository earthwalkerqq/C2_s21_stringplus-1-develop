#include "s21_string.h"

START_TEST(test_strstr_1) {
    char buffer[15] = "earthwalker";
    ck_assert_pnt_eq(s21_strstr(buffer, "walker"), buffer + 5);
} END_TEST

START_TEST(test_strstr_2) {
    char buffer[15] = "earthwalker";
    ck_assert_pnt_eq(s21_strstr(buffer, "earthwalker"), buffer);
} END_TEST

START_TEST(test_strstr_3) {
    char buffer[15] = "earthwalker";
    ck_assert_pnt_eq(s21_strstr(buffer, "hello"), NULL);
} END_TEST