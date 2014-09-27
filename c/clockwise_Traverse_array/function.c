#include "clockwice.h"


static int is_traversed(const int flag[][COLS], point p);
static int sign(int flag[][COLS],point p);

/*�жϵ��Ƿ񱻱�����*/
static int is_traversed(const int flag[][COLS], point p)
{
	if(flag[p.row][p.col])
		return 1;
	else
		return 0;
}

/*�ж��Ƿ��������*/
int is_finished(const int flag[][COLS], int rows)
{
	int row,col;
	int temp = 1;

	for(row = 0;row < rows;row++)
		for(col = 0 ;col <COLS;col++)
			if(flag[row][col] == 0){
				temp = 0;
				break;
			}
	if(temp)
		return 1;
	else
		return 0;
}

/*���·��ʼ�¼*/
static int sign(int flag[][COLS],point p)
{
	if(flag[p.row][p.col] == 0){
		flag[p.row][p.col] = 1;
	    return 1;
	}
	else
		return 0;
}

/*�ж��Ƿ���������*/
int if_go_right(point p, const int flag[][COLS])
{
	int row;
	int col;
	point new_p;

	row = p.row;
	col = p.col + 1;

	if(col >= COLS)
		return 0;

	new_p.row = row;
	new_p.col = col;

	if(is_traversed(flag,new_p))
		return 0;
	else
		return 1;
}

/*������*/
int go_right(point * p, const int arr[][COLS], int flag[][COLS])
{
	(*p).col++;	 //�ı䵱ǰ��
	printf("%d ",arr[(*p).row][(*p).col]);  //������ʵ�
	sign(flag,*p);  //���·��ʼ�¼
	return 1;
}

/*�ж��Ƿ���������*/
int if_go_down(point p, const int flag[][COLS], int rows)
{
	int row;
	int col;
	point new_p;

	row = p.row + 1;
	col = p.col;

	if(row >= rows)
		return 0;

	new_p.row = row;
	new_p.col = col;

	if(is_traversed(flag,new_p))
		return 0;
	else
		return 1;
}

/*������*/
int go_down(point * p, const int arr[][COLS], int flag[][COLS])
{
	(*p).row++;	 //�ı䵱ǰ��
	printf("%d ",arr[(*p).row][(*p).col]);  //������ʵ�
	sign(flag,*p);  //���·��ʼ�¼
	return 1;
}

/*�ж��Ƿ���������*/
int if_go_left(point p, const int flag[][COLS])
{
	int row;
	int col;
	point new_p;

	row = p.row ;
	col = p.col - 1;

	if(col < 0)
		return 0;

	new_p.row = row;
	new_p.col = col;

	if(is_traversed(flag,new_p))
		return 0;
	else
		return 1;
}

/*������*/
int go_left(point * p, const int arr[][COLS], int flag[][COLS])
{
	(*p).col--;	 //�ı䵱ǰ��
	printf("%d ",arr[(*p).row][(*p).col]);  //������ʵ�
	sign(flag,*p);  //���·��ʼ�¼
	return 1;
}

/*�ж��Ƿ���������*/
int if_go_up(point p, const int flag[][COLS])
{
	int row;
	int col;
	point new_p;

	row = p.row - 1;
	col = p.col;

	if(row < 0)
		return 0;

	new_p.row = row;
	new_p.col = col;

	if(is_traversed(flag,new_p))
		return 0;
	else
		return 1;
}

/*������*/
int go_up(point * p, const int arr[][COLS], int flag[][COLS])
{
	(*p).row--;	 //�ı䵱ǰ��
	printf("%d ",arr[(*p).row][(*p).col]);  //������ʵ�
	sign(flag,*p);  //���·��ʼ�¼
	return 1;
}
