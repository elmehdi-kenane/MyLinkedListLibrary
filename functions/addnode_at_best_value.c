/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addnode_at_best_value.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekenane <ekenane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:43:50 by ekenane           #+#    #+#             */
/*   Updated: 2023/02/25 19:03:58 by ekenane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MyLinkedListLibrary.h"

Node *addnode_at_best_value(Node *head, int value)
{
    Node *current;

    current = head;
    if (head == NULL)
    {
        head = new_list(value);
        return (head);
    }
    if (head->next == NULL)
    {
        if (head->value > value)
            head = addnode_at_tail(head, value);
        else
            head = addnode_at_head(head, value);
        return (head);
    }
    printf("\033[33mNOTE: the list should be already sorted ascending (ex. 1 --> 9)!\033[0m\n");
    while (current != NULL)
    {
        if (current == head && current->value > value)
        {
            head = addnode_at_index(head, current->index, value);
            return (head);
        }
        else if (current->value > value)
        {
            head = addnode_at_index(head, (current->index - 1), value);
            return (head);
        }
        else if (current->next == NULL)
        {
            head = addnode_at_tail(head, value);
            return (head);
        }
        else
            current = current->next;
    }
    return (head);
}