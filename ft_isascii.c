/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:14:12 by truangsi          #+#    #+#             */
/*   Updated: 2022/08/30 11:28:28 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <ctype.h>*/
#include "libft.h"

int	ft_isascii(int c)
{
	while (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_isascii('@'));
	printf("%d\n", isascii('@'));
	printf("%d\n", ft_isascii('='));
	printf("%d\n", isascii('='));
	printf("%d\n", ft_isascii('"'));
	printf("%d\n", isascii('"'));
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", isascii('a'));
	printf("%d\n", ft_isascii('b'));
	printf("%d\n", isascii('b'));
}*/
