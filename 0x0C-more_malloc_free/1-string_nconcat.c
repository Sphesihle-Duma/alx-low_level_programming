#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: First string.
 * @s2: Second string.
 * @n: Maximum number of bytes to concatenate from s2.
 *
 * Return: Pointer to newly allocated memory containing the concatenated
 *         strings, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		len2 = n;
	concat = malloc(len1 + len2 + 1);
	if (!concat)
		return (NULL);
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (i = 0; i < len2; i++)
		concat[len1 + i] = s2[i];
	concat[len1 + len2] = '\0';
	return (concat);
}





