/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:30:26 by truangsi          #+#    #+#             */
/*   Updated: 2022/09/14 10:11:36 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *) str;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}

/*int	main(void)
{
	char	str[] = "hello";

	printf("%s\n", str);

	// ft_memset(str, '@', 4);
	// printf("%s\n", str);
	// printf("%s\n", memset(str, '@', 4));

	// ft_memset(str, '@', 6);
	// printf("%s\n", str);
	// printf("%s\n", memset(str, '@', 6));
}*/