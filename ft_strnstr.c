/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:45:08 by truangsi          #+#    #+#             */
/*   Updated: 2022/09/09 14:22:28 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	a;

	i = 0;
	if (!str2[0])
		return ((char *)str1 + i);
	if (!n)
		return (NULL);
	while (i < n && str1[i])
	{
		a = 0;
		while (str1[a + i] == str2[a] && str2[a] != '\0' && (i + a) < n)
			a++;
		if (str2[a] == '\0')
			return ((char *)str1 + i);
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	// const char  *str1 = "FooBar Bar Baz";
	// const char  *str2 = "Bar";
	// const char *str1 = "hello world";
	// const char *str2 = "hello";
	// const char *str1 = "aaabcabcd";
	// const char *str2 = "aabc";
	const char *str1 = "lorem ipsum dolor sit amet";
	// const char *str2 = "aabc";
	// const char *str3 = (char*)"";
	// const char *str4 = (char*)"";
	char *ptr;
	char *myptr;

	ptr = strnstr(str1, "ipsumm", 30);
	printf("real: %s\n", ptr);
	// ptr = strnstr(NULL, "coucou", 0);
	// printf("real: %s\n", ptr);
	puts("----------------");
	myptr = ft_strnstr(str1, "ipsumm", 30);
	printf("fake: %s\n", myptr);
	// myptr = ft_strnstr(NULL, "coucou", 0);
	// printf("fake: %s\n", myptr);
	return (0);
}*/
