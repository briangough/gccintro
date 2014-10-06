#include <stdio.h>

int
main (void)
{
#ifdef TEST
  printf ("Test mode\n");
#endif
  printf ("Running...\n");
  return 0;
}
