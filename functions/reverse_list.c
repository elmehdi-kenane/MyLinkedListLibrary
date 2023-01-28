/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekenane <ekenane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:43:50 by ekenane           #+#    #+#             */
/*   Updated: 2023/01/29 00:10:20 by ekenane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MyLinkedListLibrary.h"

Node *reverse_list(Node *head)
{
    Node *previous;
    Node *current;
    Node *tmp;
    
    if (head == NULL)
    {
        printf("\033[37;41mthe list is EMPTY!!!\033[0m\n");
        return (NULL);
    }
    else if (head->next == NULL)
    {
        printf("\033[33mthere is just one node!!\033[0m\n");
        return (head);
    }
    previous = head;
    current = previous->next;
    previous->next = NULL;
    while(current != NULL)
    {
        tmp = current->next;
        current->next = previous;
        previous = current;
        current = tmp;
    }
    return (previous);
}