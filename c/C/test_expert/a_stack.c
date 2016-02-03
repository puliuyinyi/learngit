#include "stack.h"
#include <assert.h>
#include <stdlib.h>

void init1(Stack * s,int new_size)
{
	s->size = new_size;
	s->top = -1;
	s->stack = (STACK_TYPE *)malloc(new_size * sizeof(STACK_TYPE));
	assert(s != NULL);
}

void destroy(Stack * s)
{
	assert(s->size > 0);
	s->size = 0;
	free(s);
}

void resize(Stack * s,int new_size)
{
	assert(new_size > s->top);
	s->size = new_size;
	s->stack = (STACK_TYPE *)realloc(s->stack,new_size * sizeof(STACK_TYPE));
	assert(s->stack);
}
void push(Stack * s, STACK_TYPE value)
{
	assert(!is_full(s));
	(*s).top += 1;
	(*s).stack[(*s).top] = value;
}

void pop(Stack * s)
{
	assert(!is_empty(s));
	(*s).top -= 1;
}

STACK_TYPE top(const Stack * s)
{
	assert(!is_empty(s));
	return (*s).stack[(*s).top];
}

int is_empty(const Stack * s)
{
	return ((*s).top == -1);
}
int is_full(const Stack * s)
{
	return ((*s).top == s->size - 1);
}
