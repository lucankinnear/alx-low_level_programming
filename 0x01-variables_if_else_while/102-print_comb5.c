#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
int p;
int q;

for (p = 0; p < 100; p++)
{
for (q = p + 1; q < 100; q++)
{
putchar(p / 10 + '0');
putchar(p % 10 + '0');

putchar(' ');

putchar(q / 10 + '0');
putchar(q % 10 + '0');

if (p == 98 && q == 99)

if (p == 98 && q == 99)
{
break;
}

putchar(',');
putchar(' ');

}
}

putchar('\n');

return (0);

}
