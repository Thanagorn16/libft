/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:49:00 by truangsi          #+#    #+#             */
/*   Updated: 2022/10/09 10:49:02 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*ptr;

	count = 0;
	if (lst == NULL)
		return (0);
	ptr = NULL;
	ptr = lst;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

/*int main(void)
{
	t_list	*head;
	t_list	*current;
	int	num[1];
	int	ret;

	num[0] = 42;
	head = (t_list *) malloc(sizeof(t_list));
	// head->content = "4";
	head->content = num;
	head->next = NULL;

	current = (t_list *) malloc(sizeof(t_list));
	current->content = "42";
	current->next = NULL;

	head->next = current;

	ret = ft_lstsize(head);
	printf("%d", ret);
}*/
