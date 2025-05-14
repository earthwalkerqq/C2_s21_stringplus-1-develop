#include "test_string.h"

START_TEST(test_strpbrk_1) {
    char buffer[15] = "earthwalker";
    ck_assert_ptr_eq(s21_strpbrk(buffer, "walker"), buffer + 5);
} END_TEST

START_TEST(test_strpbrk_2) {
    char buffer[15] = "earthwalker";
    ck_assert_ptr_eq(s21_strpbrk(buffer, "gg"), NULL);
} END_TEST

Suite *test_s21_strpbrk(void) {
    Suite *s = suite_create("s21_strpbrk");
    TCase *tc = tcase_create(" test_strpbrk ");
    tcase_add_test(tc, test_strpbrk_1);
    tcase_add_test(tc, test_strpbrk_2);
    suite_add_tcase(s, tc);
    return s;
}