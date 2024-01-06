#include <stdio.h>

#define MAXSIZE 10

/* initialize Queue Array */
int queue[MAXSIZE];
/* initialize front and rear of the queue to -1 */
int front = -1, rear = 1;

/**
 * enqueue - adds element to the back of the queue
 * @value: value added
 */
void enqueue(int value)
{
	/* check if queue is full */
	if (rear >= MAXSIZE - 1)
	{
		printf("Queue Overflow\n");
	}
	else
	{
		/* check if queue is empty */
		if (front == -1)
		{
			front = 0;
		}

		/* increment rear to add an element */
		rear++;
		queue[rear] = value;
	}
}

/**
 * dequeue - removes element from the front of the queue
 *
 * Return: value (removed value)
 */
int dequeue(void)
{
	/* check if queue is empty */
	if (front == -1 || front > rear)
	{
		printf("Queue Underflow\n");
		return (-1);
	}
	else
	{
		/* assign front value of the queue to variable */
		int value = queue[front];
		/* increment front element to the next element */
		front++;
		return (value);
	}
}

/**
 * main - Queues implementantion and Operations
 *
 * Return: 0 (success)
 */
int main(void)
{
	/* inserting elements to the back of the Queue */
	enqueue(10);
	enqueue(20);
	enqueue(30);

	/* removing elements from the front of the Queue */
	printf("%d\n", dequeue());
	printf("%d\n", dequeue());
	printf("%d\n", dequeue());
	printf("%d\n", dequeue());
	printf("%d\n", dequeue());
	printf("%d\n", dequeue());

	return (0);
}
