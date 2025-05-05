/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:23:50 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/21 20:23:51 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

static int	runtest(char *s);

int	ft_strdup_test(void)
{
	if (!runtest("Pimba"))
		return (FAIL);
	if (!runtest(""))
		return (FAIL);
	if (!runtest("\n\tpo"))
		return (FAIL);
	if (!runtest("fsdgfgregwrfwqcwvrwrfr fgrfrefre re gegr gr rrg g"))
		return (FAIL);
	if (!runtest("234567"))
		return (FAIL);
	return (OK);
}

static int	runtest(char *s)
{
	char	*str_o;
	char	*str_m;

	str_o = strdup(s);
	str_m = ft_strdup(s);
	if (strcmp(str_o, str_m) != 0)
	{
		free(str_o);
		free(str_m);
		return (FAIL);
	}
	free(str_o);
	free(str_m);
	return (OK);
}
