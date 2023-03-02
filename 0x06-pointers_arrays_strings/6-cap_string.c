#include "main.h"
/**
  * cap_string - captilize the first character
  * of string.
  * @s: string
  * Return: pointer
  */
char *cap_string(char *s)
{
	int i, j;
	int sep_wds[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (i == 0)
		{
			if (*(s + i) >= 97 && *(s + i) < 123)
			{
				*(s + i) = *(s + i) - 32;
			}
		}
		else
		{
			for (j = 0; j < 13; j++)
			{
				if (*(s + i) == sep_wds[j])
				{
					if (*(s + i + 1) >= 97 && *(s + i + 1) < 123)
					{
						*(s + i + 1) = *(s + i + 1) - 32;
						break;
					}

				}
			}
		}
	}
	return (s);
}
