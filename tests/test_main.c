/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuscaro <lbuscaro@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 18:33:13 by lbuscaro          #+#    #+#             */
/*   Updated: 2025/04/09 14:22:01 by username         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KWHT  "\x1B[37m"

#include <stdio.h>
#include "libft.h"
#include "libftest.h"

void	run_test(char *test_name, int (*f)(void));

int	main(void)
{
	run_test("ft_isalpha", ft_isalpha_test);
	run_test("ft_isdigit", ft_isdigit_test);
	run_test("ft_isalnum", ft_isalnum_test);
	run_test("ft_isascii", ft_isascii_test);
	run_test("ft_isprint", ft_isprint_test);
	run_test("ft_strlen", ft_strlen_test);
	run_test("ft_memset", ft_memset_test);
	run_test("ft_bzero", ft_bzero_test);
	run_test("ft_memcpy", ft_memcpy_test);
	run_test("ft_memmove", ft_memmove_test);
	run_test("ft_strlcpy", ft_strlcpy_test);
	run_test("ft_strlcat", ft_strlcat_test);
	run_test("ft_toupper", ft_toupper_test);
	run_test("ft_tolower", ft_tolower_test);
	run_test("ft_strchr", ft_strchr_test);
	run_test("ft_strrchr", ft_strrchr_test);
	run_test("ft_strncmp", ft_strncmp_test);
	run_test("ft_memchr", ft_memchr_test);
	run_test("ft_memcmp", ft_memcmp_test);
	run_test("ft_strnstr", ft_strnstr_test);
	run_test("ft_atoi", ft_atoi_test);
	run_test("ft_calloc", ft_calloc_test);
	run_test("ft_strdup", ft_strdup_test);
	run_test("ft_substr", ft_substr_test);
	run_test("ft_strjoin", ft_strjoin_test);
	run_test("ft_strtrim", ft_strtrim_test);
	run_test("ft_split", ft_split_test);
	run_test("ft_itoa", ft_itoa_test);
	printf("\n\n");
	return (0);
}

void	run_test(char *test_name, int (*f)(void))
{
	int	result;

	printf("     %s\n", test_name);
	result = f();
	printf("              ");
	if (result)
		printf("%sOK%s", KGRN, KNRM);
	else
		printf("%sFAIL%s", KRED, KNRM);
	printf("\n");
}
