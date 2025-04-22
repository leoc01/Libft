/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:03:33 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/22 15:03:35 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

int	ft_split_test(void)
{
	char	**words;
	size_t	i;

	i = 0;
	words = ft_split("a,b,beleza,,casa,mesa,tabua,,,,", ',');
	while (i < 6)
	{
		printf("%s\n", words[i]);
		i++;
	}
	return (FAIL);
}
