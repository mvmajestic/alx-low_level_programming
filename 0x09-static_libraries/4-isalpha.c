#include "main.h"

/**
 * _isalpha - will check for alphabetic character
 * @c: the char to be checked
 * Return: 1 if c is a letter, and 0 if it is not.
 */

int _isalpha(int c)

{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
