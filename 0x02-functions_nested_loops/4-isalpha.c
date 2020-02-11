#include "holberton.h"
/**
 *_isalpha - Do something
 *Return: Return something
 *@c: do something
 */
int _isalpha(int c)
{
if ((c > 96 && c < 123) || (c > 64 && c < 91))
{
return (1);
}
else
{
return (0);
}
}
