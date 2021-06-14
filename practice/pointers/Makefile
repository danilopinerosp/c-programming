SRCS=$(wildcard *.c)
OBJS=$(patsubst %.c, %.o, $(SRCS))
CFLAGS=-Wall -Werror -pedantic -std=gnu99

pointers: $(OBJS)
	gcc -o pointers $(OBJS)

%.o: %.c
	gcc -c $(CFLAGS) $<
clean:
	rm pointers *.o *~
