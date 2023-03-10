#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _isupper - checks for uppercase character
 *
 * @c: the character to check
 * Return: 1 if c is uppercase, 0 otherise
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
