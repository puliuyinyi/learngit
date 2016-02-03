#define STACK_TYPE int

typedef struct STACK{
	STACK_TYPE * stack;
	int size;
	int top;
}Stack;

typedef struct stack2{
	STACK_TYPE data;
	struct stack2 * next;
}Stack2;

/*动态数组stack*/
void init1(Stack * s,int new_size);
void destroy(Stack * s);
void resize(Stack * s,int new_size);
void push(Stack * s, STACK_TYPE value);
void pop(Stack * s);
STACK_TYPE top(const Stack * s);
int is_empty(const Stack * s);
int is_full(const Stack * s);

/*链式stack*/
void init2(Stack2 ** s);
void destroy2(Stack2 * s);
void push2(Stack2 ** s, STACK_TYPE value);
void pop2(Stack2 ** s);
STACK_TYPE top2(const Stack2 * s);
int is_empty2(const Stack2 * s);
int is_full2(const Stack2 * s);

