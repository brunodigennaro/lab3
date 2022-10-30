# my first makefile

reverse_echo:
	gcc -Wall -o reverse_echo reverse_echo.c

clean:
	rm reverse_echo
	rm -f output.txt