#include "s21_string.h"

START_TEST(test_strerror_1) {
    ck_assert_str_eq(s21_strerror(1), "Operation not permitted");
} END_TEST

START_TEST(test_strerror_2) {
    ck_assert_str_eq(s21_strerror(10), "No child processes");
} END_TEST

START_TEST(test_strerror_3) {
    ck_assert_str_eq(s21_strerror(0), "Undefined error: 0");
} END_TEST

START_TEST(test_strerror_4) {
    ck_assert_str_eq(s21_strerror(-2), "Undefined error: -2");
} END_TEST