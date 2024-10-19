/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 20:56:57 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/21 00:14:47 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}
/* int main()
{
    t_list *head = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");

    if (!head || !node2 || !node3) {
        printf("Falha ao criar os nodes\n");
        return 1;
    }

    ft_lstadd_front(&head, node2);
    ft_lstadd_front(&head, node3);

    t_list *last = ft_lstlast(head);

    if (last != NULL) {
        printf("O conteudo do ultimo no e: %s\n", (char *)last->content);
    } else {
        printf("A lista esta vazia\n");
    }

    t_list *current = head;
    while (current != NULL) {
        t_list *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
} */