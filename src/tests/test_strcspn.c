#include "s21_string.h"

START_TEST(test_strcspn_1) {
    ck_assert_int_eq(s21_strcspn("earthwalker", "earth"), 0);
} END_TEST

START_TEST(test_strcspn_2) {
    ck_assert_int_eq(s21_strcspn("earthwalker", "gg"), 0);
} END_TEST

START_TEST(test_strcspn_3) {
    ck_assert_int_eq(s21_strcspn("earthwalker", "walker"), 5);
} END_TEST