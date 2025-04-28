#include "libftest.h"

void	ft_pimba2(unsigned int i, char *s);

int	ft_striteri_test(void)
{
	char	*str;

	str = ft_strdup("Pimba");
	ft_striteri(str, ft_pimba2);
	if (strcmp("pimba", str) != 0)
		return (FAIL);
	return (OK);
}

void	ft_pimba2(unsigned int i, char *s)
{
	if (i == 0)
		s[i] = ft_tolower(s[i]);
}
