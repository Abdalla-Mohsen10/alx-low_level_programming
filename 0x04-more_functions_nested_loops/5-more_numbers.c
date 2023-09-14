#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
int i;
int n;

for (i = 0; i < 11; i++)
{
for (n = 0; n < 15; n++)
{
if ( n > 9)
putchar((n / 10) + '0');
putchar((n % 10) + '0');
}

putchar('\n');
}

return 0;
}
