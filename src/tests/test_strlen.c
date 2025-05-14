#include "test_string.h"

START_TEST(test_strlen_1) {
    ck_assert_int_eq(s21_strlen("hello"), 5);
} END_TEST

START_TEST(test_strlen_2) {
    ck_assert_int_eq(s21_strlen(""), 0);
} END_TEST

START_TEST(test_strlen_3) {
    ck_assert_int_eq(s12_strlen("hello, world"), 12);
} END_TEST

Suite *test_s21_strlen(void) {
    Suite *s = suite_create("s21_strlen");
    TCase *tc = tcase_create(" test_strlen ");
    tcase_add_test(tc, test_strlen_1);
    tcase_add_test(tc, test_strlen_2);
    tcase_add_test(tc, test_strlen_3);
    suite_add_tcase(s, tc);
    return s;
}