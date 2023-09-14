#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
int i;
int number;

for (i = 0; i < 11; i++)
{
for (number = 0; number < 15; number++)
{
putchar(number + '0' - 8);
}

putchar('\n');
}

return 0;
}
