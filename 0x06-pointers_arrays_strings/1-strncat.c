#include "main.h"
/**
* _strncat - concatenates two strings
* an inputed number of bytes from src
* @dest: String to be appended upon
* @src: String to be appended to dest
* @n: The number to the resulting string dest
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
