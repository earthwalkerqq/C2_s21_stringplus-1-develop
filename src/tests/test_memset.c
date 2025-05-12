#include "test_string.h"

START_TEST(test_memset_1) {
    char buffer[10] = "hello";
    ck_assert_pnt_eq(s21_memset(buffer, 'o', 5), buffer);
    ck_assert_str_eq(buffer, "ooooo");
} END_TEST