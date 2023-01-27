/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_via_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekenane <ekenane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:43:50 by ekenane           #+#    #+#             */
/*   Updated: 2023/01/27 08:14:53 by ekenane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MyLinkedListLibrary.h"

Node *delete_via_index(Node *head, int index)
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
        if (current->index == index)
        {
            printf("\033[42m\033[97mthe node(head) with index |%d| is DELETED from the list!\033[0m\n", index);
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
            if (current->index == index)
            {
                i = 1;
                previous->next = tmp;
                while(current != NULL)
                {
                    current->index -= 1;
                    current = current->next;
                }
                free(current);
                printf("\033[42m\033[97mthe node with index |%d| is DELETED from the list!\033[0m\n", index);
                return(head);
            }
            current = current->next;
            previous = previous->next;
        }
        if (i == 0)
            printf("\033[37;41mthere is no NODE with the index |%d|\033[0m\n", index);
    }
    return(head);
}