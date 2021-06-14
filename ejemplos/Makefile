SRCS=$(wildcard *.c)
OBJS=$(patsubst %.c, %.o, $(SRCS))
CFLAGS=-Wall -Werror -pedantic -std=gnu99

myprogram: $(OBJS)
	gcc -o myprogram $(OBJS)

%.o: %.c
	gcc -c $(CFLAGS) $<
clean:
	rm myprogram *.o *~
