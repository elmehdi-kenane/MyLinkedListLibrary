/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_value.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekenane <ekenane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:43:50 by ekenane           #+#    #+#             */
/*   Updated: 2023/01/27 08:44:48 by ekenane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MyLinkedListLibrary.h"

void replace_value(Node *head, int value, int new_value, int times)
{
    Node *current;
    int  i;

    current = head;
    i = 0;
    if (head == NULL)
        printf("\033[37;41mthe list is EMPTY!!!\033[0m\n");
    else if (times == 0)
    {
        printf("\033[37;41mtimes = 0!!!\033[0m\n");
    }
    else
    {
        while(current != NULL)
        {
            if (current->value == value && i < times)
                i++;
            current = current->next;
        }
        if (i == 0)
            printf("\033[37;41mthere is no nodes with the |%d| value\033[0m\n", value);
        else if (i < times)
            printf("\033[37;41mthere is less than %d node(s) with the |%d| value\033[0m\n", times, value);
        else
        {
            current = head;
            while(current != NULL && times > 0)
            {
                if (current->value == value)
                {
                    current->value = new_value;
                    times--;
                }
                printf("current->value = %d\n", current->value);
                current = current->next;
            }
            printf("\033[42m\033[97mthe %d node(s) of value |%d| changed to |%d|\033[0m\n", i, value, new_value);
        }    
    }
}