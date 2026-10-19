TARGET = ctest
CFLAGS = -Wall -Wextra -Werror

run: $(TARGET)
	./test

$(TARGET): test.c ctest.h
	gcc -o $(TARGET) $(CFLAGS) test.c
