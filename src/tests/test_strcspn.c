#include "test_string.h"

START_TEST(test_strcspn_1) {
    ck_assert_int_eq(s21_strcspn("earthwalker", "earth"), 0);
} END_TEST

START_TEST(test_strcspn_2) {
    ck_assert_int_eq(s21_strcspn("earthwalker", "gg"), 0);
} END_TEST

START_TEST(test_strcspn_3) {
    ck_assert_int_eq(s21_strcspn("earthwalker", "walker"), 5);
} END_TEST

Suite *test_s21_strcspn(void) {
    Suite *s = suite_create("s21_strcspn");
    TCase *tc = tcase_create(" test_strcspn ");
    tcase_add_test(tc, test_strcspn_1);
    tcase_add_test(tc, test_strcspn_2);
    tcase_add_test(tc, test_strcspn_3);
    suite_add_tcase(s, tc);
    return s;
}