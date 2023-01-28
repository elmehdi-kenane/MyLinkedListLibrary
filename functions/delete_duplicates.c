/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_duplicates.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekenane <ekenane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:43:50 by ekenane           #+#    #+#             */
/*   Updated: 2023/01/28 18:37:45 by ekenane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MyLinkedListLibrary.h"

Node *delete_duplicates(Node *head, int value)
{
    Node *current;
    Node *previous;
    Node *tmp;
    bool  i;
    int  duplicates;

    if (head == NULL)
    {
        printf("\033[37;41mthe list is EMPTY!!!\033[0m\n");
        return (NULL);
    }
    duplicates = 0;
    previous = head;
    tmp = head;
    // count duplicates
    while(tmp != NULL)
    {
        if (tmp->value == value)
            duplicates++;
        tmp = tmp->next;
    }
    // check if there is no duplicates
    if (duplicates == 1 || duplicates == 0)
    {
        if (duplicates == 1)
            printf("\033[33mthere is just one node with the |%d| value!!\033[0m\n", value);
        else
            printf("\033[33mthere is no node with the |%d| value!!\033[0m\n", value);
        return (head);
    }
    i = false;
    // if the head have the search value 
    if (previous->value == value)
        i = 1;
    duplicates = 1;
    current = previous->next;
    // search from the second node if there is a duplicate nodes for the given value
    while (current != NULL)
    {
        tmp = current->next;
        if (current->value == value && !i)
        {
            i = true;
            previous = previous->next;
        }
        else if (current->value == value && i)
        {
            printf("\033[42m\033[97mthe duplicate_node(%d) with value |%d| is DELETED from the list!\033[0m\n", duplicates, value);
            previous->next = current->next;
            if (tmp)
                tmp->index -= 1;
            duplicates++;
            free(current);
        }
        else
            previous = previous->next;
        current = current->next;
    }
    return (head);
}