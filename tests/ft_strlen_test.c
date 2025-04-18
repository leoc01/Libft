/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:23:16 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/09 14:24:14 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

int	ft_strlen_test(void)
{
	char	str[5][20];
	int		cont;

	cont = 0;
	strcpy(str[0], "Um teste");
	strcpy(str[1], "");
	strcpy(str[2], "Ponto\n");
	strcpy(str[3], "\t \n oitenta");
	strcpy(str[4], "Um testesadsadsadsadsadsa");
	while (cont < 5)
	{
		if (ft_strlen(str[cont]) != strlen(str[cont]))
			return (FAIL);
		cont++;
	}
	return (OK);
}
