#include "test_string.h"

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

Suite *test_s21_strncpy(void) {
    Suite *s = suite_create("s21_strncpy");
    TCase *tc = tcase_create(" test_strncpy ");
    tcase_add_test(tc, test_strncpy_1);
    tcase_add_test(tc, test_strncpy_2);
    tcase_add_test(tc, test_strncpy_3);
    suite_add_tcase(s, tc);
    return s;
}