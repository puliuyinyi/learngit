typedef struct Node
{
	struct Node * fwd; //֮ǰ
	struct Node * bwd; //֮��
	int value;
}Node;
/*��˫����ɾ���ض��ڵ�(<<POINTERS ON C>> Chapter 12.6 at page 256)*/
int dll_remove(Node * rootp,Node * node);
int dll_remove2(Node * rootp,Node * node);