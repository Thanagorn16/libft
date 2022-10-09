/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truangsi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:49:27 by truangsi          #+#    #+#             */
/*   Updated: 2022/10/09 10:49:29 by truangsi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	if (lst == NULL)
		return (NULL);
	ptr = NULL;
	ptr = lst;
	while (ptr->next != NULL)
		ptr = ptr->next;
	return (ptr);
}

/*int main(void)
{
	t_list	*head;
	t_list	*current;
	int	num[1];
	t_list	*ret;

	num[0] = 1;
	head = (t_list *) malloc(sizeof(t_list));
	// head->content = "4";
	head->content = num;
	head->next = NULL;

	current = (t_list *) malloc(sizeof(t_list));
	current->content = "42";
	current->next = NULL;

	head->next = current;

	ret = ft_lstlast(head);
	printf("%s", ret->content);
}
*/
