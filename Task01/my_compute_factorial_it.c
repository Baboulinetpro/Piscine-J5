int my_compute_factorial_it(int nb)
{
  int  a;
  a = nb; /* je créer une varialbe A qui prend pour valeur nb */
  int  b;
  b = 1; /* je créer une variable B qui prendre pour valeur 1*/

  
  if (nb < 0 || nb > 15) {/* Si nb inférieur à 0 et suppérieur à 15 alors il me retourne 0 car faut mettre ABSOLUMENT une fin à notre récursive*/
      return (0);
    }

  if (nb == 0) {/* si nb est strictement égale à 0 alors */ 
      return (1);
    }

  while (b < a) {/* il faut que je face un boucle pour que la récursive soit en place donc en gros je dis que tant que B est inférieur à a */
      nb = nb * (a - b); /* tu me fait que nb = à nb fois a-b pour faire la récursive */
      b = b + 1; /* et du coup tu me le fais jusqu'à ce que j'ai le nombre demandé en nb */
    }
  return (nb);
}
