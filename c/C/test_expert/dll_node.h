typedef struct Node
{
	struct Node * fwd; //之前
	struct Node * bwd; //之后
	int value;
}Node;
/*在双链表删除特定节点(<<POINTERS ON C>> Chapter 12.6 at page 256)*/
int dll_remove(Node * rootp,Node * node);
int dll_remove2(Node * rootp,Node * node);