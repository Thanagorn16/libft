/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:11:59 by truangsi          #+#    #+#             */
/*   Updated: 2022/09/20 12:12:01 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	int		i;
	int		a;
	char	*ptr;

	i = 0;
	a = 0;
	if (!str1)
		return (NULL);
	ptr = (char *) malloc((ft_strlen(str1) + ft_strlen(str2) + 1));
	if (!ptr)
		return (NULL);
	while (str1[i] != '\0')
	{
		ptr[i] = str1[i];
		i++;
	}
	while (str2[a] != '\0')
	{
		ptr[i] = str2[a];
		i++;
		a++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int main(void)
// {
//     char const  str1[] = "hello";
//     char const  str2[] = "world";
//     char    *ret;

//     ret = ft_strjoin(str1, str2);
//     puts(ret);
// }
