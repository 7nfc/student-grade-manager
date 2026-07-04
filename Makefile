CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = grade
SOURCES = grade.main.c grade.input.c grade.show.c grade.search.c grade.delete.c grade.change.c grade.sort.c grade.load.c

all: $(TARGET)

$(TARGET): $(SOURCES) grade.h
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

clean:
	del /Q $(TARGET).exe $(TARGET) *.o 2>NUL || true

.PHONY: all clean
