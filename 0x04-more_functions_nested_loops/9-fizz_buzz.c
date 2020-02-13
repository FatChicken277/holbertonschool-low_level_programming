#include <stdio.h>
/**
 *main - do something
 *Return: something
 */
int main(void)
{
  int contador;
  for (contador = 1; contador < 101; contador++)
    {
      if ((contador % 3 == 0) && (contador % 5 == 0))
	{
	  printf("FizzBuzz ");
	}
      if (contador % 3 == 0)
	{
	  printf("Fizz ");
	}
      if (contador % 5 == 0)
	{
	  if(contador < 100)
	  printf("Buzz ");
	  else
	    printf("Buzz");
	}
      if (!((contador % 3 == 0) || (contador % 5 == 0)))
	{
	  printf("%d ",contador);
	}
    }
  printf("\n");
  return (0);
}
