CC=clang
TEST_INCLUDE=test/inc
TEST_CFLAGS=-Wall -Werror -Wextra

test: build/test
	./build/test

build/test: test/src/test.c
	$(CC) test/src/test.c -I $(TEST_INCLUDE) $(TEST_CFLAGS) -o build/test

clean:
	rm -rf build/*
