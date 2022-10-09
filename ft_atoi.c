/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 14:23:41 by truangsi          #+#    #+#             */
/*   Updated: 2022/09/11 14:40:54 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	temp;
	int	nev;
	int	i;

	i = 0;
	nev = 0;
	temp = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		i++;
	if (str[i] != '\0' && str[i] == '-')
	{
		nev = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		temp = (temp * 10) + (str[i++] - '0');
	if (nev == 1)
		return (-temp);
	return (temp);
}

/*int main(void)
{
    // const char  *str = "    -123124 321";
	// char	escape[] = {9, 10, 11, 12, 13, 0};
    int    ptr;
    int    myptr;

    // ptr = atoi("+42lyon");
    ptr = atoi(str);
    printf("atoi\t:%d\n", ptr);
    puts("-------------");
	myptr = ft_atoi(str);
    // myptr = ft_atoi("+42lyon");
    printf("ft_atoi\t:%d\n", myptr);
}
*/
