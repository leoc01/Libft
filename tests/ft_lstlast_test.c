/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:36:53 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/30 11:37:30 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

int	ft_lstlast_test(void)
{
	t_list	*lst;
	t_list	*last;
	size_t	size;
	size_t	i;
	int		*i_arr;

	lst = NULL;
	size = 5;
	i_arr = calloc(size, sizeof(int));
	i = 0;
	while (i < size)
	{
		i_arr[i] = i + 2;
		ft_lstadd_front(&lst, ft_lstnew(&i_arr[i]));
		i++;
	}
	last = ft_lstlast(lst);
	if (*(int *)last -> content != 2)
		return (FAIL);
	free(i_arr);
	return (OK);
}
