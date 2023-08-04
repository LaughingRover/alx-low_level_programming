#include "main.h"
#include <limits.h>

/**
 * _atoi - converts string to an integer
 * @s: string
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	/*Skip leading spaces*/
	while (s[i] == ' ')
		i++;

	/*Check for sign*/
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}

	/*Convert string to integer*/
	while (s[i] >= '0' && s[i] <= '9')
	{
		/*Return max or min value if integer overflows*/
		if (result > INT_MAX / 10 || result < INT_MIN / 10)
			return ((sign == 1) ? INT_MAX : INT_MIN);

		result = (result * 10) + (s[i] - '0');
		i++;
	}

	return (result * sign);
}

