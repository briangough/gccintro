#include <stdio.h>

int
main (void)
{
  char c;
  while ((c = getchar()) != EOF) /* not portable */
    {
      printf ("read c = '%c'\n", c);
    }
  return 0;
}
