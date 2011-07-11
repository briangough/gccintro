double 
test (double x)
{
  double y = 1.0;
  {
    double y;
    y = x;
  }
  return y;
}  
