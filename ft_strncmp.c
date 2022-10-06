/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:34:44 by truangsi          #+#    #+#             */
/*   Updated: 2022/09/08 13:12:13 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	i = 1;
	s1 = (unsigned char *) str1;
	s2 = (unsigned char *) str2;
	while (i <= n)
	{
		if (s1[i - 1] < s2[i - 1] || s1[i - 1] > s2[i - 1])
			return (s1[i - 1] - s2[i - 1]);
		if (s1[i] == '\0' && s2[i] == '\0')
			return (s1[i - 1] - s2[i - 1]);
		i++;
	}
	return (0);
}

/*int main(void)
{
	// char  str1[] = "hello";
	// char  str2[] = "hello world";
	// char  str3[] = "Tri\0pouille";
	// char  str4[] = "Tripouille";
	char  str3[] = "test";
	char  str4[] = "testss";

	printf("%d\n", strncmp(str3, str4, 7));
//    printf("%d\n", strncmp(str1, str2, 5));
//    printf("%d\n", strncmp("\200", "\0", 1));
//    printf("%d\n", strncmp("\0", "\200", 1));
//    puts("---------------");

	printf("%d\n", ft_strncmp(str3, str4, 7));
//    printf("%d\n", ft_strncmp("\200", "\0", 1));
//    printf("%d\n", ft_strncmp("\0", "\200", 1));
   return (0);
}*/
