#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
#include <malloc.h>

/**
 * struct node - 1st node of the linked list
 * @data: data part
 * @next: pointer to the next node
 */
struct node {
	int data;
	struct node *next;
};

struct node *start = NULL;

/**** Singly LInked Lists Operations Functions Prototypes ****/
struct node *create_ll(struct node *start);
struct node *display(struct node *start);
struct node *insert_beg(struct node *start);
struct node *insert_end(struct node *start);
struct node *insert_before(struct node *start);
struct node *insert_after(struct node *start);
struct node *delete_beg(struct node *start);
struct node *delete_end(struct node *start);
struct node *delete_node(struct node *start);
struct node *delete_after(struct node *start);
struct node *delete_list(struct node *start);
struct node *sort_list(struct node *start);

#endif /* _LINKEDLIST_H */
