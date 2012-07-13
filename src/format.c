#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
  if (argc == 2)
    {
      fprintf(stderr, argv[1]);
      fprintf(stderr, "\n");
    }
  else
    {
      fprintf(stderr,"Usage: %s ARG\n", argv[0]);
      exit(1);
    }
  return 0;
}

