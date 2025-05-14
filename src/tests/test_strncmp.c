#include "test_string.h"

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

Suite *test_s21_strncmp(void) {
    Suite *s = suite_create("s21_strncmp");
    TCase *tc = tcase_create(" test_strncmp ");
    tcase_add_test(tc, test_strncmp_1);
    tcase_add_test(tc, test_strncmp_2);
    tcase_add_test(tc, test_strncmp_3);
    tcase_add_test(tc, test_strncmp_4);
    tcase_add_test(tc, test_strncmp_5);
    suite_add_tcase(s, tc);
    return s;
}