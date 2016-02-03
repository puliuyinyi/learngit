#define WORD_SIZE 20
typedef struct Word_Node{
	char word[WORD_SIZE];
	struct Word_Node * next_word;
}Word_Node;

typedef struct Index_Node{
	char head_letter;
	struct Index_Node * next;
	Word_Node * head_word;
}Index_Node;

void init(Index_Node ** root);
int insert(Index_Node ** rootp, char * word);
int find(Index_Node * root,char * word);