/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekenane <ekenane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:43:50 by ekenane           #+#    #+#             */
/*   Updated: 2023/02/04 04:30:18 by ekenane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MyLinkedListLibrary.h"

void print_list(Node *head)
{
    Node *current;
    int  i;

    if (head == NULL)
        printf("\033[37;41mthe list is EMPTY!!!\033[0m\n");
	else
		printf("\033[90mthe nodes of the list..\n\033[0m");
	current = head;
	i = 1;
    while (current != NULL)
    {
		if (i == 1)
        	printf("first node = %d == index = %d\n", current->value, current->index);
		else if (current->next == NULL)
        {
        	printf("last node = %d == index = %d\n", current->value, current->index);
        }
		else
        printf("node[%d] = %d == index = %d\n", i, current->value, current->index);
		current = current->next;
		i++;
    }
	printf("\033[90mthe end of the list..\n\033[0m");
}