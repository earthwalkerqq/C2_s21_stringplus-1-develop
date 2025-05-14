#include "test_string.h"

START_TEST(test_strchr_1) {
    char buffer[15] = "earthwalker";
    ck_assert_ptr_eq(s21_strchr(buffer, 'e'), buffer);
} END_TEST

START_TEST(test_strchr_2) {
    char buffer[15] = "earthwalker";
    ck_assert_ptr_eq(s21_strchr(buffer, "t"), buffer + 3);
} END_TEST

Suite *test_s21_strchr(void) {
    Suite *s = suite_create("s21_strchr");
    TCase *tc = tcase_create(" test_strchr ");
    tcase_add_test(tc, test_strchr_1);
    tcase_add_test(tc, test_strchr_2);
    suite_add_tcase(s, tc);
    return s;
}