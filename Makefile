all: hello

CFLAGS=-g

hello: main.o
	$(CC) -o$@ $+

clean:
	rm -f hello main.o

run: hello
	@./hello $(MESSAGE)