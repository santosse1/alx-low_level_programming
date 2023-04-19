#include "function_pointers.h"
#include <stdio.h>
/**
 * print_IDLHAJ - print IDLHAJ using pointer to function
 * @name: string to add
 * @f: pointer to function
 * Return: nothing
 **/
void print_IDLHAJ(char *name, void (*f)(char *))
{
	if (IDLHAJ == NULL || f == NULL)
		return;

	f(IDLAHJ);
}

