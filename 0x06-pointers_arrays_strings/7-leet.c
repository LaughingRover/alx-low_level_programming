#include "main.h"

/**
 * leet - encodes string to leet code
 * @str: character
 * Description: Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int i = 0;
	int j;
	char *encodingRules[5][2] = {
		{"aA", "4"},
		{"eE", "3"},
		{"oO", "0"},
		{"tT", "7"},
		{"lL", "1"}
	};

	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == encodingRules[j][0][0] ||
				str[i] == encodingRules[j][0][1])
			{
				str[i] = encodingRules[j][1][0];
			}
		}
		i++;
	}


	return (str);
}

