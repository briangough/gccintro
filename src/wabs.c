#include <stdio.h>
#include <stdlib.h>

int 
main (void)
{
  double x = -3.14;
  double y = abs(x);  /* should be fabs(x) */
  printf ("x = %g |x| = %g\n", x, y);
  return 0;
}
