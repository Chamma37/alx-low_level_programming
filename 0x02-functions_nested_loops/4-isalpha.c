#include "main.h"

/**
 * _isalpha - Check for alphabetic character
 * @c: The character to be checked
 * Return: 1 for alphabetic character or 0 for anyhing else
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	return (0);
}
