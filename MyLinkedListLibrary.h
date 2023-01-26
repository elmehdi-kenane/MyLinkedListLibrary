/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyLinkedListLibrary.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekenane <ekenane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:43:50 by ekenane           #+#    #+#             */
/*   Updated: 2023/01/26 02:57:07 by ekenane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_LINKED_LIST_LIBRARY
# define MY_LINKED_LIST_LIBRARY
#include <stdio.h>
#include <stdlib.h>
#include "MyLinkedListLibrary.h"

typedef struct node{
    int value;
    struct node *next;
}Node;

// Functions:
Node *new_list(int value);
Node *addnode_at_tail(Node *head, int value);
void print_list(Node *head);
Node *addnode_at_head(Node *head, int value);

#endif