/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekenane <ekenane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:43:50 by ekenane           #+#    #+#             */
/*   Updated: 2023/01/30 21:19:36 by ekenane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MyLinkedListLibrary.h"

Node *new_list(int value)
{
	Node *head;

	head = calloc(1, sizeof(Node));
	if (!head)
	{
		printf("\033[37;41mthe list DOESN'T created!!!\n\033[0m");
		return (NULL);
	}
    head->index = 1;
	head->value = value;
	head->next = NULL;
    printf("\033[42m\033[97mthe first node with the |%d| value & List created with SUCCESS!\033[0m\n", value);
	return (head);
}