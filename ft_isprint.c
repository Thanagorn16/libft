/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:29:17 by truangsi          #+#    #+#             */
/*   Updated: 2022/08/30 11:54:53 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	while (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_isprint('k'));
	printf("%d\n", isprint('k'));
	printf("%d\n", ft_isprint('8'));
	printf("%d\n", isprint('8'));
	printf("%d\n", ft_isprint('\t'));
	printf("%d\n", isprint('\t'));
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", isprint(' '));
}*/
