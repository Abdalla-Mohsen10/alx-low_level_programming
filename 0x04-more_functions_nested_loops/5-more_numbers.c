#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
int i;
char n;

for (i = 0; i < 11; i++)
{
for (n = 0; n < 15; n++)
{
if ( n > 9)
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');

}

_putchar('\n');
}

return 0;
}
