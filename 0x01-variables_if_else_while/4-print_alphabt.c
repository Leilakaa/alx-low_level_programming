#include <stdio.h>
/**
*main - Entry
*Description: "print the alphabet in lowercase except q and e"
*Return: Always O
*/
int main(void)
{
int n = 97;
while (n <= 122)
{
if (n == 101 || n == 113)
{
n++;
continue;
}
putchar(n);
n++;
}
putchar('\n');
return (0);
}
