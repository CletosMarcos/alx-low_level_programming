#include "main.h"

/**
 * *_strcpy - copies a string
 * @src: string source
 * @dest: string destination
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

/*	for (j = 0; j <= i; j++)
		dest[i] = src[i];
*/
	return (dest);
}
