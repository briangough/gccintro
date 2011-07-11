#include <stdio.h>

void 
set_fpu (unsigned int mode)
{
  asm ("fldcw %0" : : "m" (*&mode));
}

int
main (void)
{
  double a = 3.0, b = 7.0, c;
#ifdef DOUBLE
  set_fpu (0x27F);  /* use double-precision rounding */
#endif
  c = a / b;

  if (c == a / b) {
    printf ("comparison succeeds\n");
  } else {
    printf ("unexpected result\n");
  }
  return 0;
}
