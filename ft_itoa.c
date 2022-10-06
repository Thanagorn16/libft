/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 22:08:08 by truangsi          #+#    #+#             */
/*   Updated: 2022/09/27 00:09:07 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	make_nev(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

int	make_len(int n)
{
	int	len;

	len = 0;
	if (len <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	n2;
	int		len;
	int		nev;
	char	*ret;

	n2 = n;
	len = make_len(n);
	nev = make_nev(n);
	ret = (char *) malloc(sizeof(char) * (len + 1));
	n2 *= nev;
	if (!ret)
		return (NULL);
	ret[len--] = '\0';
	if (n2 == 0)
		ret[len] = '0';
	if (nev == -1)
		ret[0] = '-';
	else
		len -= 1;
	while (n2 > 0)
	{
		ret[len--] = (n2 % 10) + '0';
		n2 /= 10;
	}
	return (ret);
}

/*int	main(void)
{
	int	i;
	char	*ret;

	i = 123456;
	ret = ft_itoa(i);
	printf("%s\n", ret);
}*/
