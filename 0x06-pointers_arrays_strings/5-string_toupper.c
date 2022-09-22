#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: string to be changed
 *
 * Return: address tp the string
 */

char *string_toupper(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		if (str[j] >= 'a' && str[j] <= 'z')
			str[j] -= 32;
		j++;
	}
	return (str);
}

