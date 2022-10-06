/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 13:23:10 by truangsi          #+#    #+#             */
/*   Updated: 2022/09/14 10:09:02 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;
	int				total;

	s1 = (unsigned char *) str1;
	s2 = (unsigned char *) str2;
	i = 0;
	total = 0;
	if (n == 0 || s1 == s2)
		return (total);
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (total);
}

/*int main(void)
{
    char    str1[] = "hello world";
    char    str2[] = "helloasd";
    int ret;
    int myret;

    ret = memcmp(str1, str2, 100);
    // ret = memcmp("\200", "\0", 100);
    printf("%d\n", ret);

    puts("-----------------");

    myret = ft_memcmp(str1, str2, 100);
    // myret = memcmp("\200", "\0", 100);
    printf("%d\n", myret);

    return (0);
}*/
