#include "libft.h"

int ft_listsize(t_list *lst)
{
    int count;

    count = 0;
    while (lst != NULL)
        count++;
    return (count);
}