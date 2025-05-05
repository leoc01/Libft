/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:53:13 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/21 20:13:26 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

static int	runtest(size_t nmemb, size_t size);

int	ft_calloc_test(void)
{
	if (!runtest(3, 3))
		return (FAIL);
	if (!runtest(0, 100))
		return (FAIL);
	if (!runtest(100, 0))
		return (FAIL);
	if (!runtest(SIZE_MAX, 2))
		return (FAIL);
	if (!runtest(1000, 1000))
		return (FAIL);
	return (OK);
}

static int	runtest(size_t nmemb, size_t size)
{
	void	*ptr_o;
	void	*ptr_m;
	size_t	total_space;

	ptr_o = calloc(nmemb, size);
	ptr_m = ft_calloc(nmemb, size);
	if ((ptr_o == NULL && ptr_m != NULL) || (ptr_o != NULL && ptr_m == NULL))
	{
		free(ptr_o);
		free(ptr_m);
		return (FAIL);
	}
	else if (ptr_o && ptr_m)
	{
		total_space = nmemb * size;
		if (memcmp(ptr_o, ptr_m, total_space) != 0)
		{
			free(ptr_o);
			free(ptr_m);
			return (FAIL);
		}
	}
	free(ptr_o);
	free(ptr_m);
	return (OK);
}
