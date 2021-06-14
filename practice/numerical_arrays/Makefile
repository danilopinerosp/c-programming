SRCS=$(wildcard *.c)
OBJS=$(patsubst %.c, %.o, $(SRCS))
CFLAGS=-Wall -Werror -pedantic -std=gnu99

numerical_arrays: $(OBJS)
	gcc -o numerical_arrays $(OBJS)

%.o: %.c
	gcc -c $(CFLAGS) $<
clean:
	rm numerical_arrays *.o *~
