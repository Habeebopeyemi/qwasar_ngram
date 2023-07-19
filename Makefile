my_ngram: my_ngram.o
	cc my_ngram.o -o my_ngram
my_ngram.o: my_ngram.c
	gcc -Wall -Wextra -Werror -c my_ngram.c -o my_ngram.o
clean:
	rm -f *.o
fclean:
	rm -f my_ngram.o my_ngram