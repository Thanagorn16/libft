/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 20:47:36 by truangsi          #+#    #+#             */
/*   Updated: 2022/09/25 22:41:40 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:24:16 by truangsi          #+#    #+#             */
/*   Updated: 2022/09/25 20:45:24 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_inset(char c, char const *set)
{
	while (*set)
		if (c == *set++)
			return (0);
	return (1);
}

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*ret;

	i = 0;
	if (!str)
		return (NULL);
	if (!set)
		return (ft_strdup(str));
	start = 0;
	end = ft_strlen(str);
	while (str[start] && check_inset(str[start], set) == 0)
		start++;
	while (end > start && check_inset(str[end - 1], set) == 0)
		end--;
	ret = malloc(sizeof(char) * (end - start) + 1);
	if (ret == NULL)
		return (NULL);
	while (start < end)
		ret[i++] = str[start++];
	ret[i] = 0;
	return (ret);
}

/*int	main(void)
{
	// char const	str1[] = "tripuille   xxx";
	// char const	str2[] = " x";
	char const	str1[] = "abcdba";
	char const	str2[] = "acb";
	//char const	str1[] = "helloworldhello";
	//char const	str2[] = "world";
	char	*ret;

	ret = ft_strtrim(str1, str2);
	puts(ret);
}*/
