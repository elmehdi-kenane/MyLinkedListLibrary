/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addnode_at_value.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekenane <ekenane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:43:50 by ekenane           #+#    #+#             */
/*   Updated: 2023/01/27 05:55:22 by ekenane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MyLinkedListLibrary.h"

Node *addnode_at_value(Node *head, int after_value, int new_value)
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
        if (after_value == current->value)
        {
            i = 1;
            new_node = calloc(1, sizeof(Node));
            if (!new_node)
            {
                printf("\033[37;41the node has not added!!!\033[0m\n");
                return(NULL);
            }
            new_node->index = (current->index + 1);
            new_node->value = new_value;
            current->next = new_node;
            new_node->next = tmp;
            printf("\033[42m\033[97mthe node with value |%d| is added after the node of value |%d|\033[0m\n", new_value, after_value);
            if (tmp)
            {
                while (tmp != NULL)
                {
                    tmp->index += 1;
                    tmp = tmp->next;
                }
            }
        }
        current = current->next;
    }
    if (i == 0)
    {
        printf("\033[37;41mthere is no NODE with the value |%d|\033[0m\n", after_value);
        return (head);
    }
    return (head);
}