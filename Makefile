CFLAGS = -Wall -Wextra -Werror -pedantic  -std=gnu89
cc = gcc

main: Main/main.c
	${cc} ${CFLAGS} *.c Main/${FILE}.c -o ${FILE}.out

lint:
	betty *.c *.h

clean:
	rm *.out