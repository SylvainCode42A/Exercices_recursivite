#include <unistd.h>
#define N 5

void ft_putchar(int c);

void ft_putstr(char *str)
{
   int i = 0;
   
   while(str[i] != '\0')
   {
     ft_putchar(str[i]);  
     i++;
   }
}

void ft_putchar(int c)
{
  write(1, &c, 1);
}
 
void ft_putnbr(int o)
{
  if (o < 0)
  {
    write(1, "-", 1);
    o = -o;
  }

  if (o >= 10)
  {
    ft_putnbr(o / 10);
  }

  ft_putchar((o % 10) + '0');    
}
  
int factorielle(int n)
{   
  if (n == 0)
  {
    return 1;
  }
  else
    return (factorielle(n - 1)* n); 
}

int main(void)
{

  int resultat = factorielle(N);
  ft_putstr("La factorielle de 5 est ");
    
  ft_putnbr(resultat);

  return 0;  
}    
