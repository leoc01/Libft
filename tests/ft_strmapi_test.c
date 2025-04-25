#include "libftest.h"

char	ft_pimba(unsigned int i, char c);

int	ft_strmapi_test(void)
{
	char	*str;

	str = ft_strmapi("pimba", ft_pimba);
	if (strcmp("Pimba", str))
		return (FAIL);
	return (OK);
}

char	ft_pimba(unsigned int i, char c)
{
	if (i == 0)
		return (c - 32);
	return (c);
}
