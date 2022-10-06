/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:11:51 by truangsi          #+#    #+#             */
/*   Updated: 2022/09/15 15:11:33 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	cha;

	i = 0;
	cha = (char) c;
	while (str[i] != '\0')
	{
		if (str[i] == cha)
		{
			return ((char *)str + i);
		}
		i++;
	}
	if (c == '\0')
		return ((char *)str + i);
	return (NULL);
}

/*int	main(void)
{
	char str[] = "hello world";
	char	*ret;
	char	*myret;

	ret = strchr(str, '\0');
	puts(str);
	printf("here: %s\n", ret);

	
	myret = ft_strchr(str, '\0');
	puts(str);
	printf("here: %s\n", myret);
	write(1, "write\n", 6);  
	write(1, ret, 12);
	write(1, "\n", 1);
	write(1, myret, 12);
	write(1, "\n", 1);
}*/
