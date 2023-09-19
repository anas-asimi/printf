#include "main.h"

/**
 * _get_flags - Calculates active flags
 * @specifier: specifier
 * Return: Flags:
 */
int _get_flags(char *specifier)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8 16  */
	int isMinus = 0;
	int isPlus = 0;
	int isZero = 0;
	int isHash = 0;
	int isSpace = 0;
	int i = 0;
	int flags;

	while (specifier[i])
	{
		if ((specifier[i] <= '9' && specifier[i] >= '1') || specifier[i] == '.')
			break;
		if (specifier[i] == '-')
			isMinus = 1;
		if (specifier[i] == '+')
			isPlus = 1;
		if (specifier[i] == '0')
			isZero = 1;
		if (specifier[i] == '#')
			isHash = 1;
		if (specifier[i] == ' ')
			isSpace = 1;
		i++;
	}
	flags = isMinus * 1 + isPlus * 2 + isZero * 4 + isHash * 8 + isSpace * 16;
	return (flags);
}
