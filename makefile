CC = gcc
CFLAGS = -Wall
OBJ = main.o datos.o calculos.o

all: programa

programa: $(OBJ)
	$(CC) $(CFLAGS) -o programa $(OBJ) -lm
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -f *.o programa
