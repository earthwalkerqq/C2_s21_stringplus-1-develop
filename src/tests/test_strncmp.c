#include "s21_string.h"

START_TEST(test_strncmp_1) {
    ck_assert_int_eq(s21_strncmp("a", "b", 1), (int)"a" - (int)"b");
} END_TEST

START_TEST(test_strncmp_2) {
    ck_assert_int_eq(s21_strncmp("a", "b", 1), 0);
} END_TEST

START_TEST(test_strncmp_3) {
    ck_assert_int_eq(s21_strncmp("hello", "hel", 3), 0);
} END_TEST

START_TEST(test_strncmp_4) {
    ck_assert_int_eq(s21_strncmp("hello", "earth", 0), 0);
} END_TEST

START_TEST(test_strncmp_5) {
    ck_assert_int_eq(s21_strncmp("earthwalker", "earthmover", 5), 0);
} END_TEST