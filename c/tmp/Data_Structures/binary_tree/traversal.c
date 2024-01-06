#include "binary_tree.h"
#include <stdio.h>
#include <stdlib.h>

/* Inorder traversal */
void inorder_traversal(struct node *root)
{
	if (root == NULL)
		return;

	inorder_traversal(root->left);
	printf("%d -> ", root->item);
	inorder_traversal(root->right);
}

/* Preorder traversal */
void preorder_traversal(struct node *root)
{
	if (root == NULL)
		return;
	printf("%d -> ", root->item);
	preorder_traversal(root->left);
	preorder_traversal(root->right);
}

/* Postorder traversal */
void postorder_traversal(struct node *root)
{
	if (root == NULL)
		return;
	postorder_traversal(root->left);
	postorder_traversal(root->right);
	printf("%d -> ", root->item);
}

struct node  *create_node(int value)
{
	struct node *new_node = NULL;

	/* Allocate memory for the new node */
	new_node = (struct node *)malloc(sizeof(struct node));
	if (new_node == NULL)
	{
		perror("couldn't allocate memory");
		exit(EXIT_FAILURE);
	}

	/* Assign values */
	new_node->item = value;
	new_node->left = NULL;
	new_node->right = NULL;
}

struct node *insert_left(struct node *root, int value)
{
	root->left = create_node(value);
	return (root->left);
}

struct node *insert_right(struct node *root, int value)
{
	root->right = create_node(value);
	return (root->right);
}

/**
 * main - implementantion of binary tree traversal
 *
 * Return: 0 (sucess)
 */
int main(void)
{
	struct node *root = create_node(1);

	insert_left(root, 12);
	insert_right(root, 9);

	insert_left(root->left, 6);
	insert_right(root->right, 5);

	printf("Inoder traversal \n");
	inorder_traversal(root);
	putchar('\n');

	printf("Preorder traversal \n");
	preorder_traversal(root);
	putchar('\n');

	printf("Postorder traversal \n");
	postorder_traversal(root);
	putchar('\n');

	return (0);
}
