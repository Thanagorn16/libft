/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 10:26:59 by truangsi          #+#    #+#             */
/*   Updated: 2022/09/07 10:52:05 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <ctype.h>*/

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}

/*int	main(void)
{
	printf("%c\n", toupper('A'));
	printf("%c\n", ft_toupper('A'));
	printf("%c\n", toupper('a'));
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", toupper(123));
	printf("%c\n", ft_toupper(123));
	return (0);
}*/
