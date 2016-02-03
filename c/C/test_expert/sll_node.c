#include <stdio.h>
#include <stdlib.h>
#include "sll_node.h"

int sll_insert(Node ** rootp, int new_value)
{
	Node * current;
	Node * previous;
	Node * ne;
	
	current = *rootp;
	previous = NULL;
	while(current != NULL && current->value < new_value)
	{
		previous = current;
		current = current->next;
	}

	ne = (Node *)malloc(sizeof(Node));
	if(ne == NULL)
		return FALSE;
	ne->value = new_value;
	
	ne->next = current;
	if(current == *rootp)
		*rootp = ne;
	else
		previous->next = ne;
	return TRUE;
}

int sll_insert2(register Node ** nextp, int new_value )
{
	register Node * current;
	register Node * ne;
	
	current = *nextp;

	while(current != NULL && current->value < new_value)
	{
		nextp = &current->next;
		current = current->next;
	}

	ne = (Node *)malloc(sizeof(Node));
	if(ne == NULL)
		return FALSE;
	ne->value = new_value;
	
	ne->next = current;
	*nextp = ne;
	return TRUE;
}

/*(<<POINTERS ON C>> Chapter question 1 at page 254)*/
int sll_insert3(register Node ** nextp, int new_value )
{
	register Node * ne;
	

	while(*nextp != NULL && (*nextp)->value < new_value)
	{
		nextp = &((*nextp)->next);
	}

	ne = (Node *)malloc(sizeof(Node));
	if(ne == NULL)
		return FALSE;
	ne->value = new_value;
	
	ne->next = *nextp;
	*nextp = ne;
	return TRUE;
}

void init_LinkList(Node ** root)
{
	*root = NULL;
}

void print_LinkList(Node * root)
{
	while(root != NULL)
	{
		printf("%d,",root->value);
		root = root->next;
	}
	printf("\n");
}

/*���㵥����Ľڵ���(<<POINTERS ON C>> Chapter 12.1 at page 255)*/
int count_LinkList(LinkList l)
{
	int count = 0;
	
	while(l != NULL)
	{	
		count += 1;
		l = l->next;
	}
	return count;
}

/*�ڵ���������ض�ֵ(<<POINTERS ON C>> Chapter 12.2 at page 255)*/
Node * find_node(LinkList l ,int value)
{
	while(l != NULL && l->value != value)
		l = l->next;
	return l;
}
Node * find_node_ordered(LinkList l ,int value)
{
	while(l != NULL && l->value <= value)
		l = l->next;
	return l;
}

/*��ת������(<<POINTERS ON C>> Chapter 12.4 at page 255)*/
Node * sll_reverse(Node * first)
{
	Node * previous;  //ָ��ǰһ�����
	Node * current;   //ָ��ǰ���
	Node * later;     //ָ���һ�����
	
	/* ������ֱ�ӷ���NULL */
	if(first == NULL)
		return NULL;
	
	/*��ʼ��ָ��*/
	previous = NULL;	
	current = first;
	later = first->next;
	
	while(TRUE)
	{
		current->next = previous;  //�ѵ�ǰ����nextָ���ָ���Ϊǰһ�����
		
		/* ��ָ��������һλ */
		previous = current;
		current = later;
		if(current == NULL)  //��ǰָ��ΪNULL������
			break;
		later = current->next;
	}
	
	return previous;
}

/*�ڵ�����ɾ���ض��ڵ�(<<POINTERS ON C>> Chapter 12.5 at page 256)*/
int sll_remove(Node ** rootp, Node * node)
{
	Node * current = *rootp;
	
	if(current == NULL)
		return 0;

	if(current == node)
	{
		*rootp = current->next;
		return 1;
	}

	while(current->next != NULL)
	{
		if(current->next == node)
		{
			current->next = current->next->next;
			return 1;
		}
		current = current->next;
	}


	return 0;
}