/* Bruno DiGennaro
	CPSC 1111
	Fall 2022
	My first makefile
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	
  // print out how many arguments
  printf("argc is:  %d\n", argc);

  // reverse the arguments that were entered and print them out
  for (i = argc - 1; i > 0; --i) {
    printf("%s", argv[i]);
    if (i != 1)
      printf(" ");
  }

  printf("\n\n");

  return 0;
}
