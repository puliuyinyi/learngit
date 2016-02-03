//#include <stdio.h>
//#include <stdlib.h>
//#include "list2.h"
//static void CopyToNode(Item item, node * pnode);
//
//void InitializeList(List * plist)
//{
//	plist->head = NULL;
//	plist->end = NULL;
//}
//
//bool ListisEmpty(const List * plist)
//{
//	if(plist->head == NULL)
//		return true;
//	else
//		return false;
//}
//
//bool ListIsFull(const List * plist)
//{
//	Node * pt;
//	bool full;
//
//	pt = (Node *)malloc(sizeof(Node));
//	if(pt == NULL)
//		full = true;
//	else
//		full = false;
//	free(pt);
//	return full;
//}
//
//unsigned int ListItemCount(const List * plist)
//{
//	int count = 0;
//	Node * pnode = plist->head;
//
//	while(pnode != NULL)
//	{
//		count++;
//		pnode = pnode->next;
//	}
//	return count;
//}
//
//bool AddItem(Item item,List * plist)
//{
//	Node * pnew;
//	Node * scan = plist->end;
//
//	pnew = (Node *)malloc(sizeof(Node));
//	if(pnew == NULL)
//		return false;
//	CopyToNode(item,pnew);
//	pnew->next = NULL;
//	if(scan == NULL)
//	{
//		plist->head = pnew;
//		plist->end = pnew;
//	}
//	else
//		scan->next = pnew;
//	return true;
//}
//
//void traverse(const List * plist, void (* pfun)(Item item))
//{
//	Node * scan = plist->head;
//	
//	while(scan != NULL)
//	{
//		(*pfun)(scan->item);
//		scan = scan->next;
//	}
//}
//
//
//void EmptyTheList (List * plist)
//{
//	Node * psave;
//	while(plist->head != NULL)
//	{
//		psave = (plist->head)->next;
//		free(plist->head);
//		plist->head = psave;
//	}
//}
//
//static void CopyToNode(Item item, Node * pnode)
//{
//	pnode->item = item;
//}