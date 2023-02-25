/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekenane <ekenane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:43:30 by ekenane           #+#    #+#             */
/*   Updated: 2023/02/25 19:46:02 by ekenane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../MyLinkedListLibrary.h"

void	 index_nodes(Node **head)
{
	Node	*current;
	int			index;

	index = 1;
	current = (*head);
	while (current)
	{
		current->index = index;
		index++;
		current = current->next;
	}
}