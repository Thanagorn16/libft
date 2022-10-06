/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:03:03 by truangsi          #+#    #+#             */
/*   Updated: 2022/09/14 10:05:02 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	cha;
	size_t			i;

	str = (unsigned char *) s;
	cha = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == cha)
			return (str + i);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     const char    str[] = "hello world";
//     const char    str2[] = {0, 1, 2, 3, 4, 5};
//     char    c = 'w';
//     printf("%s\n", memchr(str, c, 10));
//     printf("%s\n", ft_memchr(str, c, 11));
//     printf("here: %d\n", (int) memchr(str2, 2 + 256, 3));
//     // printf("%s\n", memchr(str, c, 5));
//     return (0);
// }