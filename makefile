TARGET = test
CFLAGS = -Wall -Wextra -Werror

run: $(TARGET)
	./test

$(TARGET): test.c ctest.c ctest.h
	gcc -o $(TARGET) $(CFLAGS) ctest.c test.c
