#include "test_string.h"

START_TEST(test_memset_1) {
    char buffer[10] = "hello";
    ck_assert_ptr_eq(s21_memset(buffer, 'o', 5), buffer);
    ck_assert_str_eq(buffer, "ooooo");
} END_TEST

Suite *test_s21_memset(void) {
    Suite *s = suite_create("s21_memset");
    TCase *tc = tcase_create(" test_memset ");
    tcase_add_test(tc, test_memset_1);
    suite_add_tcase(s, tc);
    return s;
}