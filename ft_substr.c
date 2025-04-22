/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:27:33 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/22 11:27:57 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (s == NULL || len == 0)
	{
		return (NULL);
	}
	if (start > ft_strlen(s))
	{
		return (NULL);
	}
	s += start;
	if (ft_strlen(s) > len)
	{
		substr = malloc((len + 1) * sizeof(char));
	}
	else
	{
		substr = malloc((ft_strlen(s) + 1) * sizeof(char));
	}
	if (substr == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(substr, s, len + 1);
	return (substr);
}
