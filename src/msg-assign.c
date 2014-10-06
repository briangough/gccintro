#include <stdio.h>

int
main (void)
{
  int i = 0;
  if (i = 1) {  /* = should be == */
    printf ("unexpected result\n");
  }
  return 0;
}
