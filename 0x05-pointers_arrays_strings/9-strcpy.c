#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @src: copy to
 * @dest: copy from
 * Return: string
 */
int main(void)
{
	 char s1[98];
	 char *ptr;

	 ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
	printf("%s", s1);
	printf("%s", ptr);
        return (0);
}

