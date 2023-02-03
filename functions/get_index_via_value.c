/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index_via_value.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekenane <ekenane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:43:50 by ekenane           #+#    #+#             */
/*   Updated: 2023/01/31 11:16:37 by ekenane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MyLinkedListLibrary.h"

int get_index_via_value(Node *head, int value)
{
    Node *current;

    if (head == NULL)
    {
        printf("\033[37;41mthe list is EMPTY!!!\033[0m\n");
        return (0);
    }
    current = head;
    while (current != NULL)
    {
        if (current->value == value)
        {
            printf("\033[42m\033[97mthe node of the |%d| value ==> index |%d|\033[0m\n", current->value, current->index);
            return (current->index);
        }
        else if (current->next == NULL)
        {
            printf("\033[37;41mthere is no NODE with the |%d| value in the list!!!\033[0m\n", value);
            return (current->index);
        }
        current = current->next;
    }
    return (current->index);
}