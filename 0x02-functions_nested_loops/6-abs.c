#include "holberton.h"
/**
 *_abs - Do something
 *Return: Return something
 *@n: do something
 */
int _abs(int n)
{
if (n < 0)
return (n * -1);
else if (n == 0)
return (0);
else
return (n);
}
