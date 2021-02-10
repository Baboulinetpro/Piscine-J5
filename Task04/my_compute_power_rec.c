int my_compute_power_rec(int nb, int p)
{
  if (p < 0)
      return (0);  
  if (p == 0)
    return (1);
  return (nb * my_compute_power_rec(nb, p - 1)); /* grace au -1 ex : 4*4*4 =64 alors que sans on aurait eu 4*4 = 16*16 = 256 */
}
