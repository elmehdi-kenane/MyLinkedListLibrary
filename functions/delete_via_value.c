/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_via_value.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekenane <ekenane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:43:50 by ekenane           #+#    #+#             */
/*   Updated: 2023/02/25 22:26:41 by ekenane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MyLinkedListLibrary.h"

Node *delete_via_value(Node *head, int value)
{
    Node *current;
    int  i;
    Node *previous;
    Node *tmp;

    i = 0;
    if (head == NULL)
    {
        printf("\033[37;41mthe list is EMPTY!!!\033[0m\n");
        return (NULL);
    }
    else
    {
        current = head;
        tmp = current->next;
        if (current->value == value)
        {
            printf("\033[42m\033[97mthe node(head) with value |%d| is DELETED from the list!\033[0m\n", value);
            while(current != NULL)
            {
                current->index -= 1;
                current = current->next;
            }
            free(current);
            return (tmp);
        }
        previous = head;
        while(current != NULL)
        {
            current = previous->next;
            tmp = current->next;
            if (current->value == value)
            {
                i = 1;
                previous->next = tmp;
                free(current);
                printf("\033[42m\033[97mthe node with value |%d| is DELETED from the list!\033[0m\n", value);
                return(head);
            }
            current = current->next;
            previous = previous->next;
        }
        if (i == 0)
            printf("\033[37;41mthere is no NODE with the value |%d|\033[0m\n", value);
    }
    return(head);
}