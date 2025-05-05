/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:42:28 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/29 13:42:30 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

int	ft_putchar_fd_test(void)
{
	size_t	chr;

	chr = 0;
	while (chr < 255)
	{
		if (isprint(chr))
		{
			//ft_putchar_fd(chr, 1);
		}
		chr++;
	}
	return (OK);
}
