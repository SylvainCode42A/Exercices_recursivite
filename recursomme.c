#include <stdio.h>

int somme(int n);

int main(void)
{
  int nombre = 10;
     
  int resultat = somme(nombre);

  printf("La somme recursive de %d est %d", nombre, resultat);
  
  return 0;
}

int somme(int n)
{ 
  if (n == 0)
    return 0;  
  else
    return n + somme(n - 1);
}


