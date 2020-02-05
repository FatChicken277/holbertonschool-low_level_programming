#include <stdio.h>
/**
 *main - print size
 *Return: size of various types on the computer
 */
int main(void)
{
printf("The size of char: %d byte(s)\n", sizeof(char));
printf("The size of int: %d byte(s)\n", sizeof(int));
printf("The size of long int: %d byte(s)\n", sizeof(long int));
printf("The size of long long int: %d byte(s)\n", sizeof(long long int));
printf("The size of float: %d byte(s)\n", sizeof(float));
return (0);
}
