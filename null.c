int foo (int *p);

int
main (void)
{
  int *p = 0;   /* null pointer */
  return foo (p);
}

int
foo (int *p)
{
  int y = *p;
  return y;
}
