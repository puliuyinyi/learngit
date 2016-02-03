#include "tree.h"
#include "queue.h"
#include <assert.h>
#include <stdio.h>

static int left_child(int current)
{
	return current * 2;
}

static int right_child(int current)
{
	return current * 2 + 1;
}

void init_tree(BSTree *t)
{
	int i;
	for(i = 0;i < TREE_SIZE;i++)
		(*t)[i] = 0;
}

void insert_tree(BSTree * t, TREE_TYPE value)
{
	int current;
	assert(value != 0);  //0表示此节点为空 

	current = 1; //从下标1开始,下标0弃之不用
	while((*t)[current] != 0)
	{
		if(value > (*t)[current])
			current = right_child(current);
		else
		{
			assert(value != (*t)[current]);
			current = left_child(current);
		}
		assert(current < TREE_SIZE);
	}

	(*t)[current] = value;
}

TREE_TYPE * find_tree(BSTree * t, TREE_TYPE value)
{
	int current;
	
	current = 1;
	while(current < TREE_SIZE)
	{
		if(value > (*t)[current])
			current = right_child(current);
		else if(value < (*t)[current])
			current = left_child(current);
		else
			return (*t) + current;
	}

	return 0;
}

int count_tree(BSTree * t,int current)
{
	if((*t)[current] == 0)
		return 0;
	return count_tree(t,left_child(current)) + count_tree(t,right_child(current)) + 1;
}

/*层次遍历*/
void level_traversal_tree(BSTree * t)
{
	Queue q;
	init_queue(&q);
	assert((*t)[1]);
	insert_queue(&q,1);

	while(!is_empty_queue(&q))
	{
		int current;
		int left = 0;
		int right = 0;

		current = first_queue(&q);
		printf("%d ",(*t)[current]);
		delete_queue(&q);

		if(left = left_child(current),(*t)[left])
		{
			insert_queue(&q,left);
		}
		if(right = right_child(current),(*t)[right])
		{
			insert_queue(&q,right);
		}
	}
}

/*中序遍历*/
static void do_in_order_traverse(BSTree t, int current, void (*callback)(TREE_TYPE value))
{
	if(current < TREE_SIZE && t[current] != 0)
	{
		do_in_order_traverse(t,left_child(current),callback);
		callback(t[current]);
		do_in_order_traverse(t,right_child(current),callback);
	}
}

void in_order_traverse(BSTree t, void (*callback)(TREE_TYPE value))
{
	do_in_order_traverse(t,1,callback);
}
