/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 13:49:59 by truangsi          #+#    #+#             */
/*   Updated: 2022/08/28 14:18:43 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <ctype.h>*/
#include "libft.h"

int	ft_isdigit(int num)
{
	while (num >= '0' && num <= '9')
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_isdigit('1'));
	printf("%d\n", ft_isdigit(1));
	printf("%d\n", ft_isdigit(123));
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit('\t'));
	printf("%d\n", ft_isdigit(' '));

	printf("\n");

	printf("%d\n", isdigit('1'));
	printf("%d\n", isdigit(1));
	printf("%d\n", isdigit(123));
	printf("%d\n", isdigit('a'));
	printf("%d\n", isdigit('\t'));
	printf("%d\n", isdigit(' '));
	return (0);
}*/
