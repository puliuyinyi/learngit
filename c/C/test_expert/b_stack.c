#include "stack.h"
#include <stdlib.h>
#include <assert.h>

void init2(Stack2 ** s)
{
	*s = NULL;
}

void destroy2(Stack2 ** s)
{
	while(*s != NULL )
		pop2(s);
}

void push2(Stack2 ** s, STACK_TYPE value)
{
	Stack2 * nw;
	nw = (Stack2 *)malloc(sizeof(Stack2));
	assert(nw);
	nw->data = value;
	nw->next = *s;
	*s = nw;
}
void pop2(Stack2 ** s)
{
	Stack2 * rubish;
	assert(!is_empty2(*s));
	rubish = *s;
	*s = (*s)->next;
	free(rubish);
}

STACK_TYPE top2(const Stack2 * s)
{
	assert(!is_empty2(s));
	return s->data;
}
int is_empty2(const Stack2 * s)
{
	if(s)
		return 0;
	return 1;
}
