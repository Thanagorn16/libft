/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:59:28 by truangsi          #+#    #+#             */
/*   Updated: 2022/09/25 22:03:29 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*creat_sub_str(char const *str, unsigned int start, size_t len, char *s)
{
	size_t	i;

	i = 0;
	if (len == 0)
	{
		s[i] = '\0';
		return (s);
	}
	while (*(str + i) != '\0')
	{
		*(s + i) = *(str + start + i);
		i++;
		if (i >= len)
			break ;
	}
	*(s + i) = '\0';
	return (s);
}

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*s;
	size_t	s_len;

	if (!str)
		return (NULL);
	s_len = ft_strlen(str);
	if (start >= s_len || (start == 0 && len == 0))
	{
		s = (char *)malloc(1);
		*s = '\0';
		return (s);
	}
	if (len > s_len)
		len = s_len;
	s = (char *)malloc(len + 1);
	if (!s)
		return (NULL);
	s = creat_sub_str(str, start, len, s);
	return (s);
}

/*int main(void)
{
    // char    str[] = "tripouille";
    char    str[] = "lorem ipsum dolor sit amet";
    char    *ret;

    ret = ft_substr(str, 7, 0);
    // printf("%d\n", strcmp(ret, "tripouille"));
    // printf("str size: %lu\n", sizeof(str));
    // printf("ret size: %lu\n", sizeof(ret));
    printf("len: %lu\n", strlen(ret));
    puts(ret);
}*/
