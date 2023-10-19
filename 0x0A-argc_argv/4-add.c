#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument array
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int result = 0;
int i;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
char *endptr;
long num = strtol(argv[i], &endptr, 10);

if (*endptr != '\0' || num <= 0)
{
printf("Error\n");
return (1);
}

result += num;
}

printf("%d\n", result);

return (0);
}
