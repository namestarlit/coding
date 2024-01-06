#ifndef __BINARY_TREE__
#define __BINARY_TREE__

/**
 * struct node - defines a node of a binary tree.
 * @item: value stored in the node.
 * @left: pointer to left node
 * @right: pointer to right node
 */
struct node {
	int item;
	struct node *left;
	struct node *right;
};

void inorder_traversal(struct node *root);
void preorder_traversal(struct node *root);
void postorder_traversal(struct node *root);
struct node *create_new(int value);
struct node *insert_left(struct node *root, int value);
struct node *isnert_right(struct node *root, int value);

#endif /* __BINARY_TREE__ */
