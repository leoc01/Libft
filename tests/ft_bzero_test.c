/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:52:05 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/09 15:53:00 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

void	tozero(char *str, int len);

int	ft_bzero_test(void)
{
	char	str_o[11];
	char	str_m[11];
	int		len_o;
	int		len_m;

	len_o = sizeof(str_o);
	len_m = sizeof(str_m);
	strcpy(str_o, "1234567890\0");
	strcpy(str_m, "1234567890\0");
	bzero(str_o, len_o);
	ft_bzero(str_m, len_m);
	tozero(str_o, len_o - 1);
	tozero(str_m, len_m - 1);
	if (strcmp(str_o, str_m))
		return (FAIL);
	return (OK);
}

void	tozero(char *str, int len)
{
	int	n;

	n = 0;
	while (n < len)
	{
		if (str[n] == '\0')
			str[n] = '1';
		n++;
	}
}
