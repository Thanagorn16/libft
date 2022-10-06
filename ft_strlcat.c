/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:35:25 by truangsi          #+#    #+#             */
/*   Updated: 2022/09/05 16:36:00 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_cat(char *c1, const char *c2, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < dstsize - 1)
	{
		if (c1[i] == '\0')
		{
			c1[i] = c2[j++];
			c1[i + 1] = '\0';
		}
		if (c2[j] == '\0')
		{
			c1[i + 1] = '\0';
			break ;
		}
		i++;
	}
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	total;

	i = 0;
	if (!dst && !src)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	total = ft_strlen(dst) + ft_strlen(src);
	if (src[i] == '\0')
		return (total);
	if (dstsize == 0)
		return (ft_strlen(src));
	ft_cat(dst, src, dstsize);
	if (dstsize < ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	return (total);
}

/*int	tempmain(void)
{
	// char	first[50] = "hello ";
	// char	last[50] = "world";
	// char	dest[30];
	char	dest2[30];
	size_t	size = 8;
	size_t	r;
	size_t	d;
	char	buffer[size];

	// printf("dest1: %s\n", dest);
	// r = strlcat(dest, src, 3); // function
	// printf("return: %lu\n", r);
	// printf("dest: %s\n", dest);
	// //printf("%lu\n", strlen(first));
	// printf("cmp: %d\n", strcmp(dest, "B"));

	// strcpy(buffer, first);
	// printf("buffer before: %s\n", buffer);
	// printf("bf len before: %lu\n", strlen(buffer));
	// r = strlcat(buffer, last, size);
	// printf("buffer after: %s\n", buffer);
	// printf("bf len after: %lu\n", strlen(buffer));
	// printf("return: %lu", r);

	puts("\n----------------");

	// printf("%s\n", first);
	// printf("len before: %lu\n", strlen(first));
	// d = ft_strlcat(first, last, size);
	// printf("after func: %s\n", first);
	// printf("len after: %lu\n", strlen(first));
	// printf("my return: %lu", d);
}*/
