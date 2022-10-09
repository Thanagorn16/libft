/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:03:28 by truangsi          #+#    #+#             */
/*   Updated: 2022/09/17 10:06:43 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	unsigned char	cha;

	i = ft_strlen(str);
	cha = (unsigned char) c;
	while (i >= 0)
	{
		if (str[i] == cha)
			return ((char *) str + i);
		i--;
	}
	return (NULL);
}

/*int main(void)
{
    char    str[] = "tripouille";
    char    str2[] = "ltripouiel";
    char    *ret;
    char    *myret;

    ret = strrchr(str, 't');
    printf("here: %s\n", ret);
	// printf("len: %lu\n", strlen(ret));

    myret = ft_strrchr(str, 't');
    printf("here: %s\n", myret);
	// printf("len: %lu\n", strlen(myret));

    return (0);
}*/
