#define TREE_TYPE int
#define TREE_SIZE 500
typedef TREE_TYPE BSTree[TREE_SIZE];  //实际可用空间为TREE_SIZE - 1，BSTree[0]弃之不用

void init_tree(BSTree *t);
void insert_tree(BSTree * t, TREE_TYPE value);
TREE_TYPE * find_tree(BSTree * t, TREE_TYPE value);
int count_tree(BSTree * t,int current);
void level_traversal_tree(BSTree * t);
