CFLAGS = -c -Wall
CC = gcc
LIBS =  -lm 

parser: main.o parser.o scanner.o reader.o charcode.o token.o error.o
	${CC} main.o parser.o scanner.o reader.o charcode.o token.o error.o -o parser

parser_decls_not_care_order: main.o parser_decls_not_care_order.o scanner.o reader.o charcode.o token.o error.o
	${CC} main.o parser_decls_not_care_order.o scanner.o reader.o charcode.o token.o error.o -o parser

parser_var_decls: main.o parser_var_decls.o scanner.o reader.o charcode.o token.o error.o
	${CC} main.o parser_var_decls.o scanner.o reader.o charcode.o token.o error.o -o parser

parser_remove_call_symbol: main.o parser_remove_call_symbol.o scanner.o reader.o charcode.o token.o error.o
	${CC} main.o parser_remove_call_symbol.o scanner.o reader.o charcode.o token.o error.o -o parser

parser_two_type_callst: main.o parser_two_type_callst.o scanner.o reader.o charcode.o token.o error.o
	${CC} main.o parser_two_type_callst.o scanner.o reader.o charcode.o token.o error.o -o parser

parser_args_must_have_parentheses: main.o parser_args_must_have_parentheses.o scanner.o reader.o charcode.o token.o error.o
	${CC} main.o parser_args_must_have_parentheses.o scanner.o reader.o charcode.o token.o error.o -o parser

parser_repeat: main.o parser_repeat.o scanner.o reader.o charcode.o token.o error.o
	${CC} main.o parser_repeat.o scanner.o reader.o charcode.o token.o error.o -o parser

main.o: main.c
	${CC} ${CFLAGS} main.c

scanner.o: scanner.c
	${CC} ${CFLAGS} scanner.c

parser.o: parser.c
	${CC} ${CFLAGS} parser.c

parser_decls_not_care_order.o: parser_decls_not_care_order.c
	${CC} ${CFLAGS} parser_decls_not_care_order.c

parser_var_decls.o: parser_var_decls.c
	${CC} ${CFLAGS} parser_var_decls.c

parser_remove_call_symbol.o: parser_remove_call_symbol.c
	${CC} ${CFLAGS} parser_remove_call_symbol.c

parser_two_type_callst.o: parser_two_type_callst.c
	${CC} ${CFLAGS} parser_two_type_callst.c

parser_args_must_have_parentheses.o: parser_args_must_have_parentheses.c
	${CC} ${CFLAGS} parser_args_must_have_parentheses.c

parser_repeat.o: parser_repeat.c
	${CC} ${CFLAGS} parser_repeat.c

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

