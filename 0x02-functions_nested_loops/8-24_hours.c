#include "holberton.h"
/**
 *print_last_digit - Do something
 *Return: Return something
 *@n: do something
 */
void jack_bauer(void)
{
  int n, o, m, p;
  for (o = 0; o < 3; o++)
    {
      for (n = 0; n < 10; n++)
	{
	  for (p = 0; p < 6; p++)
	    {
	      for (m = 0; m < 10; m++)
		{
		  if (o == 2 && n == 4 && p == 0 && m == 0)
		    {
		      return;
		    }
		  else
		    {
		      _putchar((char)(o + 48));
		      _putchar((char)(n + 48));
		      _putchar(58);
		      _putchar((char)(p + 48));
		      _putchar((char)(m + 48));
		      _putchar('\n');
		    }
		}
	    }
	}
    }
}
