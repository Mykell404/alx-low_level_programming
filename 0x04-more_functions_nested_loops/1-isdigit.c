#include "main.h"
/**
 * _isdigit - checks if a number is a digit
 * @c: an input character
 * Return: isdigit
 *
 */

int _isdigit(int c)
{
	int isdigit = 0;
	int numzero = 48;
	int numnine = 57;

	for (; numzero <= numnine; numzero++)
	{
		if (c == numzero)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
