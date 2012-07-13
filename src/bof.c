#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DESTLEN 8
int main(int argc, char** argv)
{
  char dest[DESTLEN];
  if (argc == 2)
    {
      printf(">>> Before the possible buffer over flow >>>\n");
      strcpy(dest, argv[1]);
      printf("<<< After the possible buffer over flow <<<\n");
    }
  else
    {
      fprintf(stderr,"Usage: %s ARG\n", argv[0]);
      fprintf(stderr,"       Character length(ARG) < %i bytes\n", DESTLEN);
      exit(1);
    }
  return 0;
}

