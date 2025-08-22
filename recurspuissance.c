#include <stdio.h>


int calcul(int x, int n)
{
  if (n == 0)
    return 1;
  else
    return x * calcul(x,n - 1);
}

int main(void)
{
  int nombre = 2;
  int puissance = 5;

  int resultat = calcul(nombre, puissance);

  printf("Le resultat est %d\n", resultat);

  return 0;
}
