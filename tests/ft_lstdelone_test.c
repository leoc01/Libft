/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 13:20:31 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/05/02 13:21:38 by lbuscaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftest.h"

static void	ft_del(void *content);

int	ft_lstdelone_test(void)
{
	t_list	*numbers;
	t_list	*last;
	int		*content;
	size_t	i;

	numbers = NULL;
	i = 0;
	while (i < 5)
	{
		content = malloc(sizeof(int));
		if (content == NULL)
		{
			ft_lstclear(&numbers, ft_del);
			break ;
		}
		*content = i;
		ft_lstadd_back(&numbers, ft_lstnew(content));
		i++;
	}
	last = ft_lstlast(numbers);
	ft_lstdelone(last, ft_del);
	return (OK);
}

static void	ft_del(void *content)
{
	free(content);
}
