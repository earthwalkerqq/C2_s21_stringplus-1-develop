#include <stdio.h>

#include "test_string.h"

int main(void) {
    Suite *string_test[] = {
        Suite *test_s21_memchr(),
        Suite *test_s21_memcmp(),
        Suite *test_s21_memcpy(),
        Suite *test_s21_memset(),
        Suite *test_s21_strncpy(),
        Suite *test_s21_strchr(),
        Suite *test_s21_strcspn(),
        Suite *test_s21_strerror(),
        Suite *test_s21_strlen(),
        Suite *test_s21_strncat(),
        Suite *test_s21_strncmp(),
        Suite *test_s21_strpbrk(),
        Suite *test_s21_strrchr(),
        Suite *test_s21_strstr()
    };
    for (int i = 0, failed; string_test[i] != NULL; i++, failed = 0) {
        SRunner *sr = srunner_create(string_test[i]);
        srunner_run_all(sr, CK_NORMAL);
        failed += srunner_ntests_failed(sr);
        srunner_free(sr);
        if (!failed) {
            printf("Success");
        } else {
            printf("Failed");
        }
    }
  return 0;
}