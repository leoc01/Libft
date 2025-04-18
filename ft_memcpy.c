/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:35:26 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/10 13:35:59 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			position;
	unsigned char	*dest_ptr;

	if (dest == NULL || src == NULL)
		return (NULL);
	dest_ptr = (unsigned char *)dest;
	position = 0;
	while (position < n)
	{
		dest_ptr[position] = ((unsigned char *)src)[position];
		position++;
	}
	return (dest_ptr);
}
