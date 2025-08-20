#include <stdio.h>

int factorielle(int n);

int main(void)
{
  int o = 0;


  printf("Choisi un nombre\n");
  scanf("%d", &o);

  int resultat = factorielle(o);

  printf("La factorielle de %d est %d\n", o, resultat);
 
  return 0;
}



int factorielle(int n)
{
  int i = 1;
  int fin = 1; 
 
  while (i <= n)
  {
    fin *= i;
    i++;

  }
  
  return fin;
}
