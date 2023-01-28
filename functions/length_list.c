/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekenane <ekenane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:43:50 by ekenane           #+#    #+#             */
/*   Updated: 2023/01/27 06:10:58 by ekenane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MyLinkedListLibrary.h"

void length_list(Node *head)
{
    int  count;
    Node *current;

    count = 0;
    if (head == NULL)
    {
        printf("\033[37;41mthe list is EMPTY!!!\033[0m\n");
    }
    current = head;
    while(current != NULL)
    {
        count++;
        current = current->next;
    }
    printf("\033[48;5;8mthere is %d node(s) in this list.\033[0m\n", count);
}