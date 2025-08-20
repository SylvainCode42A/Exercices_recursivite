#include <stdio.h>

int puissance(int x, int n);

int main(void)
{
  int o = 0;
  int i = 0;

  printf("Choisi un nombre\n");
  scanf("%d", &o);

  printf("Choisi sa puissance\n");
  scanf("%d", &i);

  int resultat = puissance(o, i);

  printf("La recursive de %d^%d est %d\n", o, i, resultat);

  return 0;
}


int puissance(int x, int n)
{
  if (n == 0)
    return 1;
  else
    return x * puissance(x, n-1); 
}
