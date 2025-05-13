#include "s21_string.h"

START_TEST(test_strrchr_1) {
    char buffer[15] = "earthwalker";
    ck_assert_pnt_eq(s21_strrchr(buffer, 'e'), buffer);
} END_TEST

START_TEST(test_strrchr_2) {
    char buffer[15] = "earthwalker";
    ck_assert_pnt_eq(s21_strrchr(buffer, 'w'), buffer + 5);
} END_TEST

START_TEST(test_strrchr_3) {
    char buffer[15] = "earthwalker";
    ck_assert_pnt_eq(s21_strrchr(buffer, 'g'), NULL);
} END_TEST