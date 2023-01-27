/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_via_value.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekenane <ekenane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:43:50 by ekenane           #+#    #+#             */
/*   Updated: 2023/01/27 06:33:23 by ekenane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MyLinkedListLibrary.h"

void search_via_value(Node *head, int value)
{
    Node *current;
    int  count;

    current = head;
    count = 0;
    while(current != NULL)
    {
        if (current->value == value)
            count++;
        current = current->next;
    }
    if (count == 0)
        printf("\033[37;41mthere is no NODE with the value |%d|\033[0m\n", value);
    else
        printf("\033[42m\033[97mthere is %d node(s) with the value |%d|\033[0m\n", count, value);


}