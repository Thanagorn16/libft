/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:18:36 by truangsi          #+#    #+#             */
/*   Updated: 2022/09/19 16:58:11 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *) malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*int main(void)
{
    char    source[] = "";
    char    source2[] = "";

    char *target = strdup(source);
    char *target2 = ft_strdup(source2);

    puts(target);
    puts(target2);

    printf("%d\n", strcmp(target, ""));
    printf("%d\n", strcmp(target2, ""));
}*/
