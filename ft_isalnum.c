/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:28:07 by truangsi          #+#    #+#             */
/*   Updated: 2022/08/30 11:09:59 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <ctype.h> */
#include "libft.h"

int	ft_isalnum(int c)
{
	while (c >= 48 && c <= 57)
		return (1);
	while (c >= 65 && c <= 90)
		return (1);
	while (c >= 97 && c <= 122)
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_isalnum('d'));
	printf("%d\n", isalnum('d'));
	printf("%d\n", ft_isalnum('0'));
	printf("%d\n", isalnum('0'));
	printf("%d\n", ft_isalnum('\t'));
	printf("%d\n", isalnum('\t'));
	printf("%d\n", ft_isalnum(' '));
	printf("%d\n", isalnum(' '));
}*/
