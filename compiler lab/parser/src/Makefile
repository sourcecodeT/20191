CFLAGS = -c -Wall
CC = gcc
LIBS =  -lm 

all: parser_callst

parser_callst: main.o parser_callst.o scanner.o reader.o charcode.o token.o error.o
	${CC} main.o parser_callst.o scanner.o reader.o charcode.o token.o error.o -o parser_callst

main.o: main.c
	${CC} ${CFLAGS} main.c

scanner.o: scanner.c
	${CC} ${CFLAGS} scanner.c

parser_callst.o: parser_callst.c
	${CC} ${CFLAGS} parser_callst.c

reader.o: reader.c
	${CC} ${CFLAGS} reader.c

charcode.o: charcode.c
	${CC} ${CFLAGS} charcode.c

token.o: token.c
	${CC} ${CFLAGS} token.c

error.o: error.c
	${CC} ${CFLAGS} error.c

clean:
	rm -f *.o *~

