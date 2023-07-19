#include "function_pointers.h"
/**
 * print_name - function that call back a function usinf function's pointer
 * @name: name to print
 * @f: function pointer
 * Return: void.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
