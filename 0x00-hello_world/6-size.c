#include <stdio.h>
/**
 * main - An interactive program
 * Return: 0(success)
 */
int main(void)
{
char u;
int v;
long int w;
long long int x;
float z;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(u));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(v));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(w));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(z));
return (0);
}

