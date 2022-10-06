/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:33:11 by truangsi          #+#    #+#             */
/*   Updated: 2022/09/03 10:34:01 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	while (src[index] != '\0' && index != size)
	{
		dst[index] = src[index];
		index++;
		if (index == size)
		{
			index--;
			dst[index] = '\0';
			index++;
		}
		else if (src[index] == '\0')
			dst[index] = '\0';
	}
	if (src[0] == '\0')
		dst[0] = '\0';
	return (ft_strlen(src));
}

/*int	main(void)
{
	int	r;
	int	c;
	char 	a[10] = "hello67890";
	// char 	a[10] = "";
	// char 	b[] = "aaaaa";
	// const char 	cc[] = "mouse123456";
	const char 	cc[] = "";

	// r = strlcpy(a, cc, 10);
	// printf("ret: %d\n", r);
	// printf("str: %s\n", a); 
	// printf("here: %c\n", a[strlen(cc) + 1]);

	// puts("-----------------");

	c = ft_strlcpy(a, cc, 10);
	printf("ret: %d\n", c);
	printf("str: %s\n", a); 
	// printf("here: %c\n", a[strlen(cc) + 1]);
	return (0);
}*/