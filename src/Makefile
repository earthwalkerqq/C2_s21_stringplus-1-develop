CC=gcc
FLAGS=-Wall -Werror -Wextra -std=c11
MAC_FLAGS=-lcheck -lm
LINUX_FLAGS=-lcheck -lm -lrt -lpthread -lsubunit
GCOV_FLAGS=-fprofile-arcs -ftest-coverage


FILES=$(wildcard s21_*.c)
OBJ=$(patsubst %.c,%.o,$(FILES))
TEST_FILES = $(wildcard tests/test_*.c)

MYLIB = s21_string.a

OS := $(shell uname -s)

ifeq ($(OS), Darwin)
    CHECK_PATH=$(shell brew --prefix check)
	OPEN=open
else
    CHECK_PATH=/usr/lib/check
	OPEN=xdg-open
endif


all: $(MYLIB)

.PHONY: all test $(MYLIB) gcov_report clean rebuild

$(MYLIB): $(FILES)
	$(CC) -c $(FLAGS) $(FILES)
	ar rc $@ $(OBJ)
	ranlib $@
	rm -rf *.o

test: $(MYLIB)
ifeq ($(OS),Darwin)
	$(CC) $(FLAGS) -I$(CHECK_PATH)/include $(TEST_FILES) $< -o test $(MAC_FLAGS)
else
	$(CC) $(FLAGS) -I$(CHECK_PATH)/include $(TEST_FILES) $< -o test $(LINUX_FLAGS)
endif
	./test


gcov_report: clean
ifeq ($(OS),Darwin)
	$(CC) $(FLAGS) $(GCOV_FLAGS) $(FILES) $(TEST_FILES) -o test $(MAC_FLAGS)
else
	$(CC) $(FLAGS) $(GCOV_FLAGS) $(FILES) $(TEST_FILES) -o test $(LINUX_FLAGS)
endif
	./test
	rm *test_*
	lcov -t "s21_test" -o postreport.info -c -d .
	genhtml -o report postreport.info
	$(OPEN) report/index.html


style_check:
	clang-format -i -style=google tests/*.c tests/*.h *.c *.h
	clang-format -n -style=google tests/*.c tests/*.h *.c *.h

clean_obj:
	rm -rf obj/*.o *.o

clean_lib: 
	rm -rf *.a

clean_test:
	rm -rf *.gcda
	rm -rf *.gcno
	rm -rf *.info
	rm -rf test
	rm -rf report
	rm -rf valgrind.txt

clean: clean_lib clean_test clean_obj
	rm -rf unit_test
	rm -rf RESULT_VALGRIND.txt

rebuild: clean all


