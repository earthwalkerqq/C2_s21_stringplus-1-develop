#include "test_string.h"

START_TEST(test_strstr_1) {
    char buffer[15] = "earthwalker";
    ck_assert_ptr_eq(s21_strstr(buffer, "walker"), buffer + 5);
} END_TEST

START_TEST(test_strstr_2) {
    char buffer[15] = "earthwalker";
    ck_assert_ptr_eq(s21_strstr(buffer, "earthwalker"), buffer);
} END_TEST

START_TEST(test_strstr_3) {
    char buffer[15] = "earthwalker";
    ck_assert_ptr_eq(s21_strstr(buffer, "hello"), NULL);
} END_TEST

Suite *test_s21_strstr(void) {
    Suite *s = suite_create("s21_strstr");
    TCase *tc = tcase_create(" test_strstr ");
    tcase_add_test(tc, test_strstr_1);
    tcase_add_test(tc, test_strstr_2);
    tcase_add_test(tc, test_strstr_3);
    suite_add_tcase(s, tc);
    return s;
}