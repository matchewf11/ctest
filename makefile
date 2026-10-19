TARGET = ctest
CFLAGS = -Wall -Wextra -Werror
SRC = test.c
CC = gcc
HEADER_LIBS = ctest.h

run: $(TARGET)
	./$(TARGET)

$(TARGET): $(SRC) $(HEADER_LIBS)
	$(CC) -o $(TARGET) $(CFLAGS) $(SRC)
