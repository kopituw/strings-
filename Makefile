FLAGS := -Wall -Werror -Wextra -std=c11
BUILD_DIR := ./build
FUNC_DIR := ./func
FUNC_SOURCE := $(wildcard $(FUNC_DIR)/s21_*.c)
FUNC_OBJECTS := $(patsubst $(FUNC_DIR)/%.c, $(BUILD_DIR)/%.o, $(FUNC_SOURCE))
TEST_SOURCE := s21_test.c
TEST_EXEC := test_program
UNAME_S := $(shell uname -s)


ifeq ($(UNAME_S),Linux)
 OPEN_CMD = xdg-open
 CFLAGS = -lcheck -lsubunit -lm -lrt -lpthread -D_GNU_SOURCE
endif
ifeq ($(UNAME_S),Darwin)
 OPEN_CMD = open
 CFLAGS = -lcheck -lpthread -lm
endif

all: clean s21_string.a

clean:
	rm -f s21_string.a
	rm -rf $(BUILD_DIR)
	rm -f $(FUNC_DIR)/*.o
	rm -f ./test.out
	rm -rf ./logs
	rm -rf *.gcov *.gcda *.gcno
	rm -f test_program

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/%.o: $(FUNC_DIR)/%.c | $(BUILD_DIR)
	gcc $(FLAGS) -c $< -o $@

s21_string.a: $(FUNC_OBJECTS)
	ar rc s21_string.a $^

test: s21_string.a
	gcc $(FLAGS) -fprofile-arcs -ftest-coverage $(FUNC_SOURCE) $(TEST_SOURCE) $(CFLAGS) -o $(TEST_EXEC)
	./$(TEST_EXEC)

gcov_report: test
	mkdir -p logs
	gcovr --html-details -e "s21_test.c" -o logs/report.html
	$(OPEN_CMD) logs/report.html
