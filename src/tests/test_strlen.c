#include "s21_string.h"

START_END(test_strlen_1) {
    ck_assert_int_eq(s21_strlen("hello"), 5);
} END_TEST

START_END(test_strlen_2) {
    ck_assert_int_eq(s21_strlen(""), 0);
} END_TEST

START_TEST(test_strlen_3) {
    ck_assert_int_eq(s12_strlen("hello, world"), 12);
} END_TEST