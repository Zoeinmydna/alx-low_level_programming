#include "main.h"

/**
 * _strlen-Finds the lenght of a string
 * @s: String pointer to the string whose leght is to be found.
 * Return: retirns the lenght of the string.
 */

int _strlen(char *s)
{
	int p = 0;
	/**increment up to when the last character is NULL 0*/
	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
