#include "main.h"
/**
  * _strstr - searches a substring
  * @haystack: string
  * @needle: substring
  * Return: pointer
  */
char *_strstr(char *haystack, char *needle)
{
	char *prt_haystack;
	char *prt_needle;

	while (*haystack != '\0')
	{
		prt_haystack = haystack;
		prt_needle = needle;

		while (*haystack != '\0' && *prt_needle != '\0' && *haystack == *prt_needle)
		{
			haystack++;
			prt_needle++;
		}
		if (!*prt_needle)
			return (prt_haystack);
		haystack = prt_haystack + 1;
	}
	return (0);
}
