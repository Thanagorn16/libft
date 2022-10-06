/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 13:08:55 by truangsi          #+#    #+#             */
/*   Updated: 2022/08/28 13:39:03 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/
#include "libft.h"

int	ft_isalpha(int num)
{
	while ((num >= 65 && num <= 90) || (num >= 97 && num <= 122))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_isalpha('z' + 1));
// 	return (0);
// }