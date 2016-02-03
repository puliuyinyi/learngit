#define FALSE 0
#define TRUE 1

typedef struct NODE{
	int value;
	struct NODE * next;
}Node;

typedef Node * LinkList;

void init_LinkList(Node ** root);
int sll_insert(Node ** rootp, int new_value);
int sll_insert2(register Node ** nextp, int new_value);
int sll_insert3(register Node ** nextp, int new_value);
void print_LinkList(Node * root);
int count_LinkList(LinkList l);
Node * find_node(LinkList l ,int value);
Node * find_node_ordered(LinkList l ,int value);
Node * sll_reverse(Node * first);
int sll_remove(Node ** rootp, Node * node);