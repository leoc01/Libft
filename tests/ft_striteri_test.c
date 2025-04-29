/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:44:17 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/29 13:44:18 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

void	ft_pimba2(unsigned int i, char *s);

int	ft_striteri_test(void)
{
	char	*str;

	str = ft_strdup("Pimba");
	ft_striteri(str, ft_pimba2);
	if (strcmp("pimba", str) != 0)
		return (FAIL);
	free(str);
	return (OK);
}

void	ft_pimba2(unsigned int i, char *s)
{
	if (i == 0)
		s[i] = ft_tolower(s[i]);
}
