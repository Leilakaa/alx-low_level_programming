#include "main.h"
/**
* print_most_numbers - Print the numbers from 0 to 9
* Description: Prints the numbers except 2 and 4
*/
void print_most_numbers(void)
{
int x = 0;
for (; x <= 9; x++)
{
if (x == 2 || x == 4)
{
continue;
}
else
{
_putchar(x + '0');
}
}
_putchar('\n');
}

