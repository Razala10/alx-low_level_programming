#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: "postive or negative"
 * Return: Always 0 (success)
 */

int main(void)
{
srand(time(NULL));
int n = rand() % 201 - 100;

printf("%d\n", n);

if (n > 0)
{
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
{
printf("is negative\n");
}

printf("\n");

return (0);
}
