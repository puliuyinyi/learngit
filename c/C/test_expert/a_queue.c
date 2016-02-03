#include "queue.h"
#include <stdlib.h>
#include <assert.h>

void init_queue(Queue * q)
{
	(*q).front = 1;
	(*q).rear = 0;
}

void insert_queue(Queue * q,QUEUE_TYPE value)
{
	assert(!is_full_queue(q));
	(*q).rear = ((*q).rear + 1) % ARRAY_SIZE;
	(*q).queue[(*q).rear] = value;
}

void delete_queue(Queue * q)
{
	assert(!is_empty_queue(q));
	(*q).front = ((*q).front + 1) % ARRAY_SIZE;
}

QUEUE_TYPE first_queue(Queue * q)
{
	assert(!is_empty_queue(q));
	return (*q).queue[(*q).front];
}

int is_full_queue(Queue * q)
{
	return (((*q).rear + 2) % ARRAY_SIZE == (*q).front);
}
int is_empty_queue(Queue * q)
{
	return (((*q).rear + 1) % ARRAY_SIZE == (*q).front);
}

int count_queue(Queue * q)
{
	if(q->rear >= q->front)
		return (q->rear - q->front + 1) % ARRAY_SIZE;
	else
		return (ARRAY_SIZE - q->front + q->rear + 1) % ARRAY_SIZE;
}
