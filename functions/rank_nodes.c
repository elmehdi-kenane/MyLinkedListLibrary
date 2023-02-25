/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rank_nodes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekenane <ekenane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 22:24:38 by ekenane           #+#    #+#             */
/*   Updated: 2023/02/25 22:25:38 by ekenane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MyLinkedListLibrary.h"

void	rank_nodes(Node *head)
{
	Node	*current;
	Node	*previous;
	int			rank;

	rank = 1;
	previous = head;
	while (previous)
	{
		rank = 1;
		current = head;
		while (current)
		{
			if (previous->value > current->value)
				rank++;
			current = current->next;
		}
		previous->rank = rank;
		previous = previous->next;
	}
}