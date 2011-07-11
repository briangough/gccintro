#include <stdio.h>

int 
main (void)
{
  char c = 255;
  if (c > 128) {
    printf ("char is unsigned (c = %d)\n", c);
  } else {
    printf ("char is signed (c = %d)\n", c);
  }
  return 0;
}
