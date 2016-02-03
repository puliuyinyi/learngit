#include <stdio.h>
#include "dll_node.h"
int dll_remove(Node * rootp,Node * node)
{
	Node * previous;
	Node * current;
	
	current = rootp->bwd;
	previous = NULL;
	
	while(current != NULL)
	{
		if(current == node)
		{
			//current node is in first also current node is in last
			if(current == rootp->fwd && current == rootp->bwd)
			{
				rootp->fwd = NULL;
				rootp->bwd = NULL;
			}

			//current node is in first
			else if(current == rootp->fwd)
			{
				current->bwd->fwd = NULL;
				rootp->fwd = current->bwd;
			}

			//current node is in last
			else if(current == rootp->bwd)
			{
				previous->bwd = NULL;
				rootp->bwd = previous;
			}

			//current node is in normal
			else
			{
				previous->bwd = current->bwd;
				current->bwd->fwd = previous;
			}

			return 1;
		}
		previous = current;
		current = current->bwd;
	}

	return 0;
}

int dll_remove2(Node * rootp,Node * node)
{
	Node * previous;
	Node * current;
	
	current = rootp->bwd;
	previous = NULL;
	
	while(current != NULL)
	{
		if(current == node)
		{	
			if(current == rootp->fwd)
				rootp->fwd = current->bwd;
			else
				previous->bwd = current->bwd;

			if(current == rootp->bwd)
				rootp->bwd = previous;
			else
				current->bwd->fwd = previous;

			return 1;
		}
		previous = current;
		current = current->bwd;
	}

	return 0;
}