#define TREE_TYPE int
#define TREE_SIZE 500
typedef TREE_TYPE BSTree[TREE_SIZE];  //ʵ�ʿ��ÿռ�ΪTREE_SIZE - 1��BSTree[0]��֮����

void init_tree(BSTree *t);
void insert_tree(BSTree * t, TREE_TYPE value);
TREE_TYPE * find_tree(BSTree * t, TREE_TYPE value);
int count_tree(BSTree * t,int current);
void level_traversal_tree(BSTree * t);
