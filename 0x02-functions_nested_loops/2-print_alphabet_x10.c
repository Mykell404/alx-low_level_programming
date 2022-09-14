#include "main.h"
/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a = 1;

	while (a <= 10)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		a++;
	}
}
