/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 20:50:35 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/21 00:03:55 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}
/*
int main() 
{
    t_list *head = ft_lstnew("Cruzeiro");
    t_list *node2 = ft_lstnew("Cabuloso");
    t_list *node3 = ft_lstnew("Gigante");

    if (!head || !node2 || !node3) {
        printf("Falha ao criar os nodes\n");
        return 1;
    }

    ft_lstadd_front(&head, node2);
    ft_lstadd_front(&head, node3);

    int size = ft_lstsize(head);
    printf("O tamanho da lista e: %d\n", size);

    t_list *current = head;
    while (current != NULL) {
        t_list *temp = current;
        current = current->next;
        free(temp);
    }
    return 0;
}
*/