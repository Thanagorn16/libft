/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 10:55:00 by truangsi          #+#    #+#             */
/*   Updated: 2022/09/07 10:59:59 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <ctype.h>*/

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
	}
	return (c);
}

/*int	main(void)
{
	printf("%c\n", tolower('A'));
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", tolower('a'));
	printf("%c\n", ft_tolower('a'));
	printf("%c\n", tolower(123));
	printf("%c\n", ft_tolower(123));
	return (0);
}*/
