#include <stdio.h>

int somme(int n);

int main(void)
{
  int o = 0;

  printf("Choisi un nombre\n");
  scanf("%d", &o);

  int resultat = somme(o);

  printf("La somme recursive de %d est %d\n", o, resultat);

  return 0;
}


int somme(int n)
{
  
  
  if (n == 0)
    return 0;
  else
    return (n + somme(n-1)); 
}  
  
