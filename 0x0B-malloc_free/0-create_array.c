#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 * Return: Nothing.
 */

*create_array(unsigned int size, char c);
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			_putchar(" ");
		}
		if (!(i % 10) && i)
		{
			_putchar("\n");
		}
		_putchar("0x%02x", buffer[i]);
		i++;
	}
	_putchar("\n");
}
