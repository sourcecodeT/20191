CFLAGS = -c -Wall
CC = gcc
LIBS =  -lm 

all: scanner

scanner: scanner.o reader.o charcode.o token.o error.o
	${CC} scanner.o reader.o charcode.o token.o error.o -o scanner

scanner_dont_care_upper_lower_case: scanner_dont_care_upper_lower_case.o reader.o charcode.o token.o error.o
	${CC} scanner_dont_care_upper_lower_case.o reader.o charcode.o token.o error.o -o scanner

reader.o: reader.c
	${CC} ${CFLAGS} reader.c

scanner.o: scanner.c
	${CC} ${CFLAGS} scanner.c

scanner_dont_care_upper_lower_case.o: scanner_dont_care_upper_lower_case.c
	${CC} ${CFLAGS} scanner_dont_care_upper_lower_case.c

charcode.o: charcode.c
	${CC} ${CFLAGS} charcode.c

token.o: token.c
	${CC} ${CFLAGS} token.c

error.o: error.c
	${CC} ${CFLAGS} error.c

clean:
	rm -f *.o *~ && rm scanner

