#include "queue.h"
#include <assert.h>

void init_queue3(Queue3 * q)
{
	q->fwd = NULL;
	q->bwd = NULL;
}
void insert_queue3(Queue3 * q, QUEUE_TYPE value)
{
	Queue3 * nw;
	nw = (Queue3 *)malloc(sizeof(Queue3));
	assert(nw);

	nw->value = value;
	nw->fwd = q->bwd;
	nw->bwd = NULL;
	if(q->bwd)
		q->bwd->bwd = nw;
	else
		q->fwd = nw;
	q->bwd = nw;

}
void delete_queue3(Queue3 * q)
{
	Queue3 * rubish;
	assert(!is_empty_queue3(q));
	rubish = q->fwd;
	q->fwd = rubish->bwd;
	if(q->fwd)
		q->fwd->fwd = NULL;
	else
		q->bwd = NULL;
	free(rubish);
}
QUEUE_TYPE first_queue3(Queue3 * q)
{
	assert(!is_empty_queue3(q));
	return q->fwd->value;
}

int is_empty_queue3(Queue3 * q)
{
	return q->fwd == NULL;
}
int count_queue3(Queue3 * q)
{
	int count = 0;

	Queue3 * ci = q->fwd;
	
	while(ci)
	{
		count++;
		ci = ci->bwd;
	}
}