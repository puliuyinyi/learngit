#include <stdlib.h>

#define QUEUE_TYPE int


/*��̬����*/
#define QUEUE_SIZE 100	/*����Ԫ���������*/
#define ARRAY_SIZE (QUEUE_SIZE + 1)	/*����ĳ���*/
typedef struct queue
{
	QUEUE_TYPE queue[ARRAY_SIZE];
	int front;
	int rear;
}Queue;

void init_queue(Queue * q);
void insert_queue(Queue * q,QUEUE_TYPE value);
void delete_queue(Queue * q);
QUEUE_TYPE first_queue(Queue * q);
int is_full_queue(Queue * q);
int is_empty_queue(Queue * q);
int count_queue(Queue * q);



/*��̬����*/
typedef struct queue2
{
	QUEUE_TYPE * queue;
	int size;
	int front;
	int rear;
}Queue2;

void init_queue2(Queue2 * q,int size);
void resize_queue2(Queue2 *q,int new_size);
void insert_queue2(Queue2 * q,QUEUE_TYPE value);
void delete_queue2(Queue2 * q);
QUEUE_TYPE first_queue2(Queue2 * q);
int is_full_queue2(Queue2 * q);
int is_empty_queue2(Queue2 * q);
int count_queue2(Queue2 * q);


/*˫����*/
typedef struct queue3
{
	struct queue3 * fwd; //֮ǰ  ͷ
	struct queue3 * bwd; //֮��  β
	QUEUE_TYPE value;
}Queue3;

void init_queue3(Queue3 * q);
void insert_queue3(Queue3 * q, QUEUE_TYPE value);
void delete_queue3(Queue3 * q);
QUEUE_TYPE first_queue3(Queue3 * q);
int is_full_queue3(Queue3 * q);
int is_empty_queue3(Queue3 * q);
int count_queue3(Queue3 * q);

