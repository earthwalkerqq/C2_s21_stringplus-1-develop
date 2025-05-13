#include "s21_string.h"

START_TEST(test_strncar_1) {
    char buffer[15] = "hello";
    ck_assert_str_eq(s21_strncat(buffer, ", world", 10), "hello, world");
} END_TEST

START_TEST(test_strncat_2) {
    char buffer[15] = "earth";
    ck_assert_str_eq(s21_strncat(buffer, "walkerqq", 6), "earthwalker");
} END_TEST

START_TEST(test_strncat_3) {
    char buffer[15] = "earth";
    ck_assert_str_eq(s21_strncat(buffer, "walker", 0), "earth");
} END_TEST