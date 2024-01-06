#ifndef __LINKED_STACK_H__
#define __LINKED_STACK_H__

#include <stdio.h>
#include <stdlib.h>

/**
 * typedef struct stack - a stack structure
 * @data: int data
 * @next: pointer to next node of the stack
 */
typedef struct stack
{
	int data;
	struct stack *next;
} stack;

stack *top = NULL;
stack *push(stack *top, int data);
stack *pop(stack *top);
stack *display(stack *top);
int peek(stack *top);

#endif /* __LINKED_STACK_H__ */
