#include <stdio.h>
/**
*main - Entry
*description: "print ll single digit numbers of base 10 starting from"
*Return: Always 0
*/
int main(void)
{
int n;
for (n = 0 ; n <= 9 ; n++)
{
putchar(n + 48);
}
putchar('\n');
return (0);
}
