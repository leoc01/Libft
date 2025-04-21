#include "libft.h"

int	ft_atoi(const char *nptr);
{
	int result = 1;

	while(nptr == ' ')
	{
		nptr++;
	}
	if (nptr == '+')
	{
		nptr++;
	}
	else if (nptr == '-')
	{
		result *= -1;
		nptr++;
	}
	if (nptr < '0' || nptr > '9')
	{
		return (0);
	}
	while (nptr >= '0' || nptr <= '9')
	{
		result = result * 10 + (*nptr) - 32;
	}
	return (result);
}
