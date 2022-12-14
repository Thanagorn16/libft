/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:36:36 by truangsi          #+#    #+#             */
/*   Updated: 2022/10/01 00:00:54 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**get_mal(char const *s, char c)
{
	int		slot;
	int		i;
	char	**arr;

	i = 1;
	slot = 0;
	if (s[0] != '\0')
	{
		while (s[i] && ft_strlen(s) != 0)
		{
			if (s[0] != c && i == 1)
				slot++;
			if (s[i - 1] == c && s[i] != c)
				slot++;
			i++;
		}
		slot++;
	}
	else
		slot = 1;
	arr = (char **) malloc(slot * sizeof(char *));
	return (arr);
}

char	**insert(char const *s, char c, int slot, char **arr)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (i < slot)
	{
		while (s[count] == c)
			count++;
		while (s[count] != c && s[count] != '\0')
		{
			arr[i][j] = s[count];
			j++;
			count++;
		}
		arr[i][j] = '\0';
		j = 0;
		i++;
	}
	arr[slot] = NULL;
	return (arr);
}

char	**allocate(char const *s, char c, char **arr)
{
	int		count;
	int		slot;
	size_t	i;

	i = 0;
	count = 0;
	slot = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			count++;
		}
		if (count > 0)
		{
			arr[slot] = (char *) malloc(count + 1);
			slot++;
			count = 0;
		}
		i++;
	}
	arr = insert(s, c, slot, arr);
	return (arr);
}

char	**ft_split(char const*s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = get_mal(s, c);
	if (!arr)
		return (NULL);
	arr = allocate(s, c, arr);
	return (arr);
}

/*int	main(void)
{
	// char	*str = "  tripouille  42  ";
	// char	c = ' ';
	// char	*str = " tripouille";
	// char	c = ' ';
	char	*str = "";
	char	c = 'z';
	// char	c = ' ';
	// char	*str = "tripouille";
	// char	c = 0;

	// char	*str = strdup("tripouille");
	// char	c = ' ';
	char	**ret;

	ret = ft_split(str, c);
	int i = 0;
	printf("ret0: |%s|\n", ret[0]);
	// printf("ret0: |%s|\n", ret[1]);
	// printf("ret0: |%s|\n", ret[2]);
	// printf("ret0: |%s|\n", ret[3]);
	// free(ret);
}*/
