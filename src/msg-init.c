#include <stdio.h>

FILE *stream = stdout;  /* not constant */
int i = 10;
int j = 2 * i;          /* not constant */

int
main (void)
{
  fprintf (stream, "Hello World!\n");
  return 0;
}
