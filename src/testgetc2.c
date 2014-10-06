#include <stdio.h>

int
main (void)
{
  int i;
  while ((i = getchar()) != EOF)
    {
      unsigned char c = i;
      printf ("read c = '%c'\n", c);
    }
  return 0;
}
