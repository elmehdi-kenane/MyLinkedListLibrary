/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekenane <ekenane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:43:50 by ekenane           #+#    #+#             */
/*   Updated: 2023/01/31 11:48:36 by ekenane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MyLinkedListLibrary.h"

Node *sort_list(Node *head)
{
    Node *node1;
    Node *node2;
    int  tmp;
    int  check;
    if (head == NULL)
    {
        printf("\033[37;41mthe list is EMPTY!!!\033[0m\n");
        return (NULL);
    }
    else if (head->next == NULL)
    {
        printf("\033[37;41mthere is just one NODE in the list!!\033[0m\n");
        return (head);
    }
    check = 0;
    node1 = head;
    while(node1 != NULL)
    {
        node2 = head;
        while(node2->next != NULL)
        {
            if (node2->value < node2->next->value)
            {
                check = 1;
                tmp = node2->next->value;
                node2->next->value = node2->value;
                node2->value = tmp;
            }
            node2 = node2->next;
        }
        node1 = node1->next;
    }
    if (check == 0)
        printf("\033[42m\033[97mthe list is already sorted!\033[0m\n");

    return head;
}