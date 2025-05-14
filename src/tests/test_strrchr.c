#include "test_string.h"

START_TEST(test_strrchr_1) {
    char buffer[15] = "earthwalker";
    ck_assert_ptr_eq(s21_strrchr(buffer, 'e'), buffer);
} END_TEST

START_TEST(test_strrchr_2) {
    char buffer[15] = "earthwalker";
    ck_assert_ptr_eq(s21_strrchr(buffer, 'w'), buffer + 5);
} END_TEST

START_TEST(test_strrchr_3) {
    char buffer[15] = "earthwalker";
    ck_assert_ptr_eq(s21_strrchr(buffer, 'g'), NULL);
} END_TEST

Suite *test_s21_strrchr(void) {
    Suite *s = suite_create("s21_strrchr");
    TCase *tc = tcase_create(" test_strrchr ");
    tcase_add_test(tc, test_strrchr_1);
    tcase_add_test(tc, test_strrchr_2);
    tcase_add_test(tc, test_strrchr_3);
    suite_add_tcase(s, tc);
    return s;
}