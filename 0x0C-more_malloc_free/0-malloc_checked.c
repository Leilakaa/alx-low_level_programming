#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* malloc_checked - allocates memory using malloc and exit if failed
* @b: the size to allocate
* Return: pointer to the array initialized or NULL
*/
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == 0)
exit(98);
return (p);
}
