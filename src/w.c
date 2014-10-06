int
foo (unsigned int x)
{
  if (x < 0)
    return 0;  /* cannot occur */
  else
    return 1;
}
