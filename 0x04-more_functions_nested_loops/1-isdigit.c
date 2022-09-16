#include "main.h"
/**
 * _isdigit - checks if a number is a digit
 * @c: an input character
 * Return: isdigit
 *
 */

int _isdigit(int c)
{
	int num = 0;
	int isdigit = 0;

	for (; num <= 9; num++)
	{
		if (c == num)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
