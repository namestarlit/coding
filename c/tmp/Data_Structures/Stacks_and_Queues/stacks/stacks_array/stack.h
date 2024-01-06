#ifndef __STACKS_H__
#define __STACKS_H__

#include <stdio.h>
#include <stdlib.h>

/* Max number of elements of a stack */
#define MAXSIZE 3

int stack[MAXSIZE];
int top = -1;

void push(int stack[], int val);
int pop(int stack[]);
int peek(int stack[]);
void display(int stack[]);

#endif /* __STACKS_H__ */
