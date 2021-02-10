int my_compute_power_it(int nb, int p)
{
  int a;
  int b;
  
  b = nb;
  a = 1;
  if (p < 0) { 
      return (0);
    }
  if (p == 0)
    return (1);
  
  while(a < p) {
    nb = nb * b;
      a = a + 1;
   }
  return (nb);
}
