#include "main.h"

/**
 * *cap_string - a function that capitalizes all words of a string.
 * @s: pointer to the char
 * Return: Capitalized strings.
 */

char *cap_string(char *s)
{
	char sep[] = ",\t;\n; .!?\"(){}";
	int flag;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		if (i == 0)
		{
			flag = 1;
		}
		else
		{
			for (j = 0; sep[j] != '\0'; j++)
			{
				if (s[i - 1] == sep[j])
				{
					flag = 1;
					break;
				}
			}
		}
		if (flag == 1)
		{
			if (s[i] <= 'z' && s[i] >= 'a')
			{
				s[i] -= ('a' - 'A');
			}
		}
	}
	return (s);
}

