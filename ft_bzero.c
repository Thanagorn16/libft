/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:59:02 by truangsi          #+#    #+#             */
/*   Updated: 2022/09/14 10:03:27 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *) s;
	while (i < n && n != 0)
	{
		ptr[i] = '\0';
		i++;
	}
}

/*int	main(void)
{
	char	str[5] = "hello";

	printf("%s\n", str);

	ft_bzero(str + 3, 0);
	printf("%s\n", str);

	// bzero(str + 3, (0));
	// printf("%s\n", str);

	return (0);
}*/
