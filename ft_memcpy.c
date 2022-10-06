/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 14:58:26 by truangsi          #+#    #+#             */
/*   Updated: 2022/09/14 10:10:06 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	str1 = (char *)dst;
	str2 = (char *)src;
	i = 0;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dst);
}

/*int main(void)
{
	char    str1[] = "hello world";
	char    str2[] = "this is memcpy";

	// puts(str1);
	// memcpy(str1 + 1, str1, 3);
	// puts(str1);
	// ft_memcpy(str1 + 1, str1, 3);
	// puts(str1);
	// puts("-------------");
	// puts(str1);
	// memcpy(str1, str2, sizeof(str1));
	// printf("%s\n", str1);
	// ft_memcpy(str1, str2, sizeof(str1));
	// printf("%s\n", str1);
	// memcpy(str1, str2, sizeof(str1));
	// printf("%s\n", str1);
}*/
