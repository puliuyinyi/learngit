#include "queue.h"
#include <stdlib.h>
#include <assert.h>

void init_queue2(Queue2 * q,int size)
{
	q->queue = (QUEUE_TYPE *)malloc(size * sizeof(QUEUE_TYPE));
	assert(q->queue);
	q->front = 1;
	q->rear = 0;
	q->size = size;
}

void resize_queue2(Queue2 *q,int new_size)
{
	QUEUE_TYPE * old_queue = q->queue;
	int start = q->front;
	int end = q->rear;
	int i = 1;

	assert(new_size > count_queue2(q));
	q->queue = (QUEUE_TYPE *)malloc(new_size * sizeof(QUEUE_TYPE));
	assert(q->queue);
	while(start != (end + 1) % q->size)
	{
		q->queue[i++] = old_queue[start];
		start = (start + 1) % q->size;
	}
	
	q->front = 1;
	q->rear = i - 1;
	q->size = new_size;
	free(old_queue);
}

void insert_queue2(Queue2 * q,QUEUE_TYPE value)
{
	assert(!is_full_queue2(q));
	q->rear = (q->rear + 1) % q->size;
	q->queue[q->rear] = value;
}

void delete_queue2(Queue2 * q)
{
	assert(!is_empty_queue2(q));
	q->front = (q->front + 1) % q->size;
}

QUEUE_TYPE first_queue2(Queue2 * q)
{
	assert(!is_empty_queue2(q));
	return q->queue[q->front];
}

int is_full_queue2(Queue2 * q)
{
	return (q->rear + 2) % q->size == q->front;
}

int is_empty_queue2(Queue2 * q)
{
	return (q->rear + 1) % q->size == q->front;
}

int count_queue2(Queue2 * q)
{
	if(q->rear >= q->front)
		return (q->rear - q->front + 1) % q->size;
	else
		return (q->size - q->front + q->rear + 1) % q->size;
}