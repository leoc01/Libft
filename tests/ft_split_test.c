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
	size_t	w;

	w = 0;
	words = ft_split(",,,,word1,word 2,word3,,word4,word  5,,, word6, p", ',');
	while (words[w] != NULL)
	{
		w++;
	}
	w = 0;
	while (words[w] != NULL)
	{
		free(words[w]);
		w++;
	}
	free(words[w]);
	free(words);
	return (OK);
}
