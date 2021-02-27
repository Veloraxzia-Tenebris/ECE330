CC = gcc
CFLAGS = -I. -lm
DEPS = heartrates.h
OBJ = main.o heartrates.o 

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

run: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f run main.o heartrates.o