CFLAGS = -c -Wall
CC = gcc
LIBS =  -lm 

all: parser

parser_decls_not_care_order: main.o parser_decls_not_care_order.o scanner.o reader.o charcode.o token.o error.o
	${CC} main.o parser_decls_not_care_order.o scanner.o reader.o charcode.o token.o error.o -o parser

parser_var_decls: main.o parser.o scanner.o reader.o charcode.o token.o error.o
	${CC} main.o parser.o scanner.o reader.o charcode.o token.o error.o -o parser

parser: main.o parser.o scanner.o reader.o charcode.o token.o error.o
	${CC} main.o parser.o scanner.o reader.o charcode.o token.o error.o -o parser

main.o: main.c
	${CC} ${CFLAGS} main.c

scanner.o: scanner.c
	${CC} ${CFLAGS} scanner.c

parser_decls_not_care_order.o: parser_decls_not_care_order.c
	${CC} ${CFLAGS} parser_decls_not_care_order.c

parser_vardecls.o: parser.c
	${CC} ${CFLAGS} parser.c

parser.o: parser.c
	${CC} ${CFLAGS} parser.c

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

