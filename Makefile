CFLAGS = -Wall -Wextra -Werror -pedantic  -std=gnu89
cc = gcc

main:
	${cc} ${CFLAGS}

lint:
	betty *.c *.h

clean:
	rm *.out