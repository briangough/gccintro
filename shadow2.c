double
sin_series (double x)
{
  /* series expansion for small x */ 
  double sin = x * (1.0 - x * x / 6.0); 
  return sin;
}
