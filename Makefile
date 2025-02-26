CC = gcc
CFLAGS = -Wall -g
TARGET = 05-memoize-fibonacci.c
SRC = 05-memoize-fibonacci.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)