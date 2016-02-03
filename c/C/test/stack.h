/* stack.h -- 栈类型接口 */

/* 在这里插入项目类型 */
typedef int Item;
#define MAXSTACK 100
typedef struct stack
{
	Item item[MAXSTACK];
	int size;
}Stack;

/**
*操作：初始化栈
*操作前：ps指向一个栈
*操作后：该栈被初始化为空栈
**/
void InitializeStack(Stack * ps);

/**
*操作：判断栈是否为空
*操作前：ps指向一个已初始化过的栈
*操作后：为空，返回TRUE,否则返回FALSE
**/
int StackIsEmpty(Stack * ps);

/**
*操作：判断栈是否已满
*操作前：ps指向一个已初始化过的栈
*操作后：已满，返回TRUE,否则返回FALSE
**/
int StackIsFull(Stack * ps);

/**
*操作：把项目压栈
*操作前：ps指向一个已初始化过的栈，item是要进入栈顶的项目
*操作后：如果栈已满则返回FALSE，否则将item加入栈顶，返回TRUE
**/
int Push(Item item, Stack * ps);

/**
*操作：从栈顶删除项目
*操作前：ps指向一个已初始化过的栈，item是暂时存放出栈的项目
*操作后：如果栈为空则返回FALSE，否则将栈顶项目删除放入到item，返回TRUE
**/
int Pop(Item * item, Stack * ps);