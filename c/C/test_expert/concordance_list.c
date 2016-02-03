/*(<<POINTERS ON C>> Chapter 12.7 at page 256)*/
#include <stdlib.h>
#include <string.h>
#include "concordance_list.h"
#define LETTER_OF_COUNT 26
static int insert_sup(Word_Node ** rootp,char * word);
static Index_Node * find_sup(Index_Node * root, char letter);
static int find_sup2(Word_Node * root, char * word);

void init(Index_Node ** root)
{
	Index_Node * previous;
	Index_Node * current;
	int i;
	
	previous = NULL;

	for(i = 0;i < LETTER_OF_COUNT;i++)
	{
		current = (Index_Node *)malloc(sizeof(Index_Node));
		if(current == NULL)
			exit(1);
		current->head_letter = 'a' + i;
		current->head_word = NULL;
		if(previous != NULL)
			previous->next = current;
		else
			*root = current;
		
		previous = current;
	}
	current->next = NULL;
}

int insert(Index_Node ** rootp, char * word)
{

	Index_Node * root = *rootp;
	char head_letter = *word;
	Index_Node * finded_index_node = find_sup(root,head_letter);
	int flag = insert_sup(&(finded_index_node->head_word),word);
	if(flag)
		return 1;
	else
		return 0;
}

int find(Index_Node * root,char * word)
{
	Index_Node * finded_index_node = find_sup(root,*word);

	int flag = find_sup2(finded_index_node->head_word,word);
	if(flag)
		return 1;
	return 0;
}

static Index_Node * find_sup(Index_Node * root, char letter)
{
	while(root != NULL)
	{
		if(root->head_letter == letter)
			return root;
		root = root->next;
	}
	return NULL;
}

static int find_sup2(Word_Node * root, char * word)
{
	while(root != NULL)
	{
		if(strcmp(root->word,word) == 0)
			return 1;
		root = root->next_word;
	}
	return 0;
}

static int insert_sup(Word_Node ** rootp,char * word)
{
	Word_Node * current;
	Word_Node * previous;
	Word_Node * ne;
	
	current = *rootp;
	previous = NULL;
	while(current != NULL && strcmp(current->word,word) < 0)
	{
		previous = current;
		current = current->next_word;
	}

	ne = (Word_Node *)malloc(sizeof(Word_Node));
	if(ne == NULL)
		return 0;
	strcpy(ne->word,word);
	
	ne->next_word = current;
	if(current == *rootp)
		*rootp = ne;
	else
		previous->next_word = ne;
	return 1;
}
