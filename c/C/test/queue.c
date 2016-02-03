//#include <stdio.h>
//#include <stdlib.h>
//#include "queue.h"
//
//static void CopyToNode(Item item,Node * pnew);
//static void CopyToItem(Node * pn, Item * pi);
//
//void InitializeQueue(Queue * pq)
//{
//	pq->front = pq->rear = NULL;
//	pq->items = 0;
//}
//
//int QueueIsEmpty(const Queue * pq)
//{
//	return pq->items == 0;
//}
//
//int QueueIsFull(const Queue * pq)
//{
//	return pq->items == MAXQUEUE;
//}
//
//int QueueItemCount(const Queue * pq)
//{
//	return pq->items;
//}
//
//int EnQueue(Item item,Queue * pq)
//{
//	Node * pnew;
//	if(QueueIsFull(pq))
//		return FALSE;
//	pnew = (Node *)malloc(sizeof(Node));
//	if(pnew == NULL)
//	{
//		fprintf(stderr,"Error malloc memory!\n");
//		exit(1);
//	}
//	CopyToNode(item,pnew);
//	pnew->next = NULL;
//	if(QueueIsEmpty(pq))
//		pq->front = pnew;
//	else
//		pq->rear->next = pnew;
//	pq->rear = pnew;
//	pq->items++;
//	
//	return TRUE;
//}
//
//int DeQueue(Item *pitem, Queue *pq)
//{
//	Node * pt;
//	if(QueueIsEmpty(pq))
//		return FALSE;
//	
//	CopyToItem(pq->front,pitem);
//	if(pq->front->next == NULL)
//		pq->front = pq->rear = NULL;
//	else
//	{
//		pt = pq->front->next;
//		free(pq->front);
//		pq->front = pt;
//	}
//	pq->items--;
//	return TRUE;
//}
//
//void EmptyTheQueue (Queue * pq)
//{
//	Item dummy;
//	while(!QueueIsEmpty(pq))
//		DeQueue(&dummy,pq);
//}
//
//static void CopyToNode(Item item,Node * pnew)
//{
//	pnew->item = item;
//}
//
//static void CopyToItem(Node * pn, Item * pi)
//{
//	*pi = pn->item;
//}