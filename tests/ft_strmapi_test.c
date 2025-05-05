/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:42:58 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/29 13:42:58 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

char	ft_pimba(unsigned int i, char c);

int	ft_strmapi_test(void)
{
	char	*str;

	str = ft_strmapi("pimba", ft_pimba);
	if (strcmp("Pimba", str))
		return (FAIL);
	free(str);
	return (OK);
}

char	ft_pimba(unsigned int i, char c)
{
	if (i == 0)
		return (c - 32);
	return (c);
}
