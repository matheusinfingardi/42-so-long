/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minfinga <minfinga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 20:43:37 by minfinga          #+#    #+#             */
/*   Updated: 2024/05/20 23:23:16 by minfinga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
	{
		return (NULL);
	}
	new -> content = content;
	new -> next = NULL;
	return (new);
}
/*
int main()
{
    char *content = "Cruzeiro Cabuloso!";
    t_list *node = ft_lstnew(content);

    if (node == NULL)
    {
        printf("Erro: Nao foi possivel alocar o novo node.\n");
        return (1);
    }

    printf("Node content: %s\n", (char *)node->content);
    printf("Node next: %p\n", (void *)node->next);

    free(node);

    return 0;
}
*/