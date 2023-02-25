/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addnode_at_head.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekenane <ekenane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:43:50 by ekenane           #+#    #+#             */
/*   Updated: 2023/02/25 19:49:33 by ekenane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MyLinkedListLibrary.h"

Node *addnode_at_head(Node *head, int value)
{
    Node *new_node;

    if (head == NULL)
    {
        head = new_list(value);
        return (head);
    }
    else
    {
	    new_node = calloc(1, sizeof(Node));
        if (!new_node)
        {
            printf("\033[37;41the node has not added!!\033[0m\n");
            return(NULL);
        }
        new_node->value = value;
        new_node->next = head;
        printf("\033[42m\033[97mthe node with value |%d| is added in the head of list!\033[0m\n", value);
    }
    return (new_node);
}