/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_lists.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekenane <ekenane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:43:50 by ekenane           #+#    #+#             */
/*   Updated: 2023/01/28 23:08:44 by ekenane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MyLinkedListLibrary.h"

Node *append_lists(Node *head_list1, Node *head_list2)
{
    Node *final_head;

    if (head_list1 == NULL || head_list2 == NULL)
    {
        if (head_list1 == NULL)
        printf("\033[37;41mthe first list is EMPTY!!!\033[0m\n");
        if (head_list2 == NULL)
        printf("\033[37;41mthe second list is EMPTY!!!\033[0m\n");
        if (head_list1 == NULL && head_list2 == NULL)
        {
            printf("\033[37;41mthe both lists is EMPTY!!!\033[0m\n");
            return (NULL);
        }
        
    }
    final_head = head_list1;
    while (head_list1->next != NULL)
    {
        head_list1 = head_list1->next;
    }
    head_list1->next = head_list2;
    return (final_head);
}