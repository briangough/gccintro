char *
f (const char *s)
{
  *s = '\0';  /* assigns to read-only data */
  return s;   /* discards const */
}
