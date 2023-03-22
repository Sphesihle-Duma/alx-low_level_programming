#include "function_pointers.h"
/**
  * print_name - prints name
  * @name: string name
  * @f: function pointer
  * Return: Nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		if (name)
			f(name);
	}

}
