/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekenane <ekenane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:43:50 by ekenane           #+#    #+#             */
/*   Updated: 2023/01/26 02:11:53 by ekenane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MyLinkedListLibrary.h"

void print_list(Node *head)
{
    Node *current;
    int  i;

    if (head == NULL)
        printf("\033[37;41mthe list is EMPTY!!!\033[0m\n");
	current = head;
	if (head != NULL)
		printf("\033[90mthe values of the list...\n\033[0m");
	i = 1;
    while (current != NULL)
    {
		if (i == 1)
        	printf("first node = %d\n", current->value);
		else if (current->next == NULL)
        {
        	printf("last node = %d\n", current->value);
	        printf("\033[90mthe end of the list...\n\033[0m");
        }
		else
        printf("node[%d] = %d\n", i, current->value);
		current = current->next;
		i++;
    }
	
    

}