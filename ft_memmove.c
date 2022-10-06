/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:10:07 by truangsi          #+#    #+#             */
/*   Updated: 2022/09/13 12:44:21 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr_src;
	char	*ptr_dst;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	ptr_src = (char *) src;
	ptr_dst = (char *) dst;
	i = 0;
	if (ptr_dst > ptr_src)
		while (len-- > 0)
			ptr_dst[len] = ptr_src[len];
	else
	{
		while (i < len)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
	}
	return (ptr_dst);
}

/*int	main(void)
{
	// char	str1[] = "helloWorld";
	char	str1[100] = "helloWorld";
	char	str2[] = "pizza";
	char	*first;

	first = str1;

	// printf("\noriginal: %s\n", str1);
	// printf("here: %lu\n", sizeof(str2));
	// memmove(str1, str2, sizeof(str2));
	// ft_memmove(str1, str2, sizeof(str2));

	// memmove(first + 5, first, 10);
	// ft_memmove(first + 5, first, 10);
	printf("\nmem: %s\n", str1);
}*/
