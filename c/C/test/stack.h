/* stack.h -- ջ���ͽӿ� */

/* �����������Ŀ���� */
typedef int Item;
#define MAXSTACK 100
typedef struct stack
{
	Item item[MAXSTACK];
	int size;
}Stack;

/**
*��������ʼ��ջ
*����ǰ��psָ��һ��ջ
*�����󣺸�ջ����ʼ��Ϊ��ջ
**/
void InitializeStack(Stack * ps);

/**
*�������ж�ջ�Ƿ�Ϊ��
*����ǰ��psָ��һ���ѳ�ʼ������ջ
*������Ϊ�գ�����TRUE,���򷵻�FALSE
**/
int StackIsEmpty(Stack * ps);

/**
*�������ж�ջ�Ƿ�����
*����ǰ��psָ��һ���ѳ�ʼ������ջ
*����������������TRUE,���򷵻�FALSE
**/
int StackIsFull(Stack * ps);

/**
*����������Ŀѹջ
*����ǰ��psָ��һ���ѳ�ʼ������ջ��item��Ҫ����ջ������Ŀ
*���������ջ�����򷵻�FALSE������item����ջ��������TRUE
**/
int Push(Item item, Stack * ps);

/**
*��������ջ��ɾ����Ŀ
*����ǰ��psָ��һ���ѳ�ʼ������ջ��item����ʱ��ų�ջ����Ŀ
*���������ջΪ���򷵻�FALSE������ջ����Ŀɾ�����뵽item������TRUE
**/
int Pop(Item * item, Stack * ps);