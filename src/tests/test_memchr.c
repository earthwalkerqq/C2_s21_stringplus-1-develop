#include "test_string.h"

START_TEST(test_s21_memchr_1) {
    char string[] = "hello, world";
    ck_assert_int_eq((int)'h', *(int *)s21_memchr(string, (int)'h', 5));
} END_TEST

Suite *test_s21_memchr(void) {
  Suite *s = suite_create("s21_memchr");
  TCase *tc = tcase_create(" test_memchr ");
  tcase_add_test(tc, test_s21_memchr_1);
  suite_add_tcase(s, tc);
  return s;
}