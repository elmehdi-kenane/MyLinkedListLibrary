/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addnode_at_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekenane <ekenane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:43:50 by ekenane           #+#    #+#             */
/*   Updated: 2023/01/26 09:12:54 by ekenane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MyLinkedListLibrary.h"

Node *addnode_at_index(Node *head, int after_index)
{
    Node *new_node;
    Node *current;
    Node *tmp;
    int  i;

    i = 0;
    current = head;
    if (head == NULL)
    {
        printf("\033[37;41mthe list is EMPTY!!!\033[0m\n");
        return (NULL);
    }
    while (current != NULL)
    {
        tmp = current->next;
        if (after_index == current->index)
        {
            i = 1;
            new_node = calloc(1, sizeof(Node));
            if (!new_node)
            {
                printf("\033[37;41the node has not added!!!\033[0m\n");
                return(NULL);
            }
            new_node->index = (current->index + 1);
            current->next = new_node;
            new_node->next = tmp;
            while (tmp->next != NULL)
            {
                tmp = tmp->next;
                tmp->index += 1;
            }
            printf("\033[42m\033[97mthe node with index |%d| is added after the node of index |%d|\033[0m\n", new_node->index, after_index);
        }
        current = current->next;
    }
    if (i == 0)
    {
        printf("\033[37;41mthere is no NODE with the index |%d|\033[0m\n", after_index);
        return (NULL);
    }
    return (head);
}