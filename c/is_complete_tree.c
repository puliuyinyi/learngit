/* 判断是否为完全二叉树 */
bool is_complete(tree *root)  
{  
    queue q;  
    tree *ptr;  
  
    if (NULL == root)  
    {  
        return true;  
    }  
    q.push(root);  
    while ((ptr = q.pop()) != NULL)  
    {  
        q.push(ptr->left);  
        q.push(ptr->right);  
    }  
    ptr = q.pop();  
    if (NULL != ptr)  
    {  
        return false;  
    }  
  
    return true;  
}  