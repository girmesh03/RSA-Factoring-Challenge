#include "factor.h"

/**
 * factorize - factorize a number from a file in less than 1 second
 * @buffer: number to factorize
 * Return: 0 on success
 */

/*print format: num=p*q */
int factorize(char *buffer)
{
	unsigned long int num, p, q, i;

	num = strtoul(buffer, NULL, 10);
	if (num % 2 == 0)
	{
		p = 2;
		q = num / 2;
		printf("%lu=%lu*%lu\n", num, p, q);
		return (0);
	}

	for (i = 3; i <= num / 2; i += 2)
	{
		if (num % i == 0)
		{
			p = i;
			q = num / i;
			printf("%lu=%lu*%lu\n", num, p, q);
			return (0);
		}
	}

	return (0);
}
