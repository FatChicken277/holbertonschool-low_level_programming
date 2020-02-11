#include "holberton.h"
/**
 * print_times_table - function prints the 9 times table, starting with 0
 * Return: void
 */
void print_times_table(int n)
{
  int i, j, prod;
  prod = 1;
if (!(n > 15))
  {
  for (i = 0; i <= n; i++)
    {
      for (j = 0; j <= n; j++)
	{
	  prod = i * j;
	  if (prod > 9)
	    {
	      _putchar(44);
	      _putchar(32);
	      if (prod < 100)
	      _putchar(32);
              if (prod > 99)
                {
		  _putchar((char) (prod / 100) + 48);
                }
	      _putchar((char) ((prod / 10) % 10) + 48);
	      _putchar((char) (prod % 10) + 48);
	    }
	  else
	    {
	      if (j > 0)
		{
		  _putchar(44);
		  _putchar(32);
		  _putchar(32);
                  _putchar(32);
		}
	      _putchar((char) (prod + 48));
	    }
	}
      _putchar('\n');
    }
  }
}
