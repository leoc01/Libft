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

#define WORDCOUNT 3

#include "libftest.h"

int	ft_memset_test(void)
{
	char	str_o[WORDCOUNT][20];
	char	str_m[WORDCOUNT][20];
	int		cont;
	int		size;
	int		bytetw;

	strcpy(str_o[0], "A small sentence");
	strcpy(str_o[1], "A small sentence");
	strcpy(str_o[2], "A small sentence");
	strcpy(str_m[0], "A small sentence");
	strcpy(str_m[1], "A small sentence");
	strcpy(str_m[2], "A small sentence");
	bytetw = 300;
	size = 0;
	cont = 0;
	while (cont < WORDCOUNT)
	{
		if (strcmp(ft_memset(str_m[cont], bytetw, size),
				memset(str_o[cont], bytetw, size)) != 0)
			return (FAIL);
		cont++;
		size += 4;
		bytetw -= 102;
	}
	return (OK);
}
