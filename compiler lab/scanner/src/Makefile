CFLAGS = -c -Wall
CC = gcc
LIBS =  -lm 

all: scanner

scanner: scanner.o reader.o charcode.o token.o error.o
	${CC} scanner.o reader.o charcode.o token.o error.o -o scanner

scanner_ident_only_take_k_first_chars: scanner_ident_only_take_k_first_chars.o reader.o charcode.o token.o error.o
	${CC} scanner_ident_only_take_k_first_chars.o reader.o charcode.o token.o error.o -o scanner

scanner_new_comment_syntax: scanner_new_comment_syntax.o reader.o charcode.o token.o error.o
	${CC} scanner_new_comment_syntax.o reader.o charcode.o token.o error.o -o scanner

scanner_dont_care_upper_lower_case: scanner_dont_care_upper_lower_case.o reader.o charcode.o token.o error.o
	${CC} scanner_dont_care_upper_lower_case.o reader.o charcode.o token.o error.o -o scanner

scanner_error_number_too_large: scanner_error_number_too_large.o reader.o charcode.o token.o error.o
	${CC} scanner_error_number_too_large.o reader.o charcode.o token.o error.o -o scanner

scanner_read_const_char_by_4singleqoute: scanner_read_const_char_by_4singleqoute.o reader.o charcode.o token.o error.o
	${CC} scanner_read_const_char_by_4singleqoute.o reader.o charcode.o token.o error.o -o scanner

reader.o: reader.c
	${CC} ${CFLAGS} reader.c

scanner.o: scanner.c
	${CC} ${CFLAGS} scanner.c

scanner_read_const_char_by_4singleqoute.o: scanner_read_const_char_by_4singleqoute.c
	${CC} ${CFLAGS} scanner_read_const_char_by_4singleqoute.c

scanner_ident_only_take_k_first_chars.o: scanner_ident_only_take_k_first_chars.c
	${CC} ${CFLAGS} scanner_ident_only_take_k_first_chars.c

scanner_new_comment_syntax.o: scanner_new_comment_syntax.c
	${CC} ${CFLAGS} scanner_new_comment_syntax.c

scanner_error_number_too_large.o: scanner_error_number_too_large.c
	${CC} ${CFLAGS} scanner_error_number_too_large.c

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

