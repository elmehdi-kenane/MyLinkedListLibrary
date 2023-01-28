/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyLinkedListLibrary.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekenane <ekenane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 23:43:50 by ekenane           #+#    #+#             */
/*   Updated: 2023/01/28 23:08:48 by ekenane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_LINKED_LIST_LIBRARY
# define MY_LINKED_LIST_LIBRARY
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "MyLinkedListLibrary.h"

typedef struct node{
    int value;
    int index;
    struct node *next;
}Node;

// Functions:
Node *new_list(int value);
Node *addnode_at_head(Node *head, int value);
Node *addnode_at_tail(Node *head, int value);
Node *addnode_at_index(Node *head, int after_index, int value);
Node *addnode_at_value(Node *head, int after_value, int new_value);
Node *delete_via_value(Node *head, int value);
Node *delete_via_index(Node *head, int index);
Node *delete_duplicates(Node *head, int value);
void search_via_value(Node *head, int value);
void replace_value(Node *head, int value, int new_value, int times);
Node *append_lists(Node *head_list1, Node *head_list2);
int length_list(Node *head);
void print_list(Node *head);

#endif