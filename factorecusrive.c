#include <stdio.h>

int factorielle(int n);

int main(void)
{
  int i = 0;

  printf("Choisi un nombre\n");
  scanf("%d", &i);

  int resultat = factorielle(i);
  
  if (resultat == 1)
  {
    printf("La factorielle de %d est %d\n", i, resultat);
  }
  else 
  {
    printf("La factorielle de %d est %d\n", i, resultat);
  }
  
  return 0;
}

int factorielle(int n)
{
  if (n == 0)
    return 1;
  else
    return (n * factorielle(n - 1));
}
