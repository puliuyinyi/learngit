#include "clockwice.h"


static int is_traversed(const int flag[][COLS], point p);
static int sign(int flag[][COLS],point p);

/*判断点是否被遍历过*/
static int is_traversed(const int flag[][COLS], point p)
{
	if(flag[p.row][p.col])
		return 1;
	else
		return 0;
}

/*判断是否遍历结束*/
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

/*标致访问记录*/
static int sign(int flag[][COLS],point p)
{
	if(flag[p.row][p.col] == 0){
		flag[p.row][p.col] = 1;
	    return 1;
	}
	else
		return 0;
}

/*判断是否能向右走*/
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

/*往右走*/
int go_right(point * p, const int arr[][COLS], int flag[][COLS])
{
	(*p).col++;	 //改变当前点
	printf("%d ",arr[(*p).row][(*p).col]);  //输出访问点
	sign(flag,*p);  //标致访问记录
	return 1;
}

/*判断是否能向下走*/
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

/*往下走*/
int go_down(point * p, const int arr[][COLS], int flag[][COLS])
{
	(*p).row++;	 //改变当前点
	printf("%d ",arr[(*p).row][(*p).col]);  //输出访问点
	sign(flag,*p);  //标致访问记录
	return 1;
}

/*判断是否能向左走*/
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

/*往左走*/
int go_left(point * p, const int arr[][COLS], int flag[][COLS])
{
	(*p).col--;	 //改变当前点
	printf("%d ",arr[(*p).row][(*p).col]);  //输出访问点
	sign(flag,*p);  //标致访问记录
	return 1;
}

/*判断是否能向上走*/
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

/*往上走*/
int go_up(point * p, const int arr[][COLS], int flag[][COLS])
{
	(*p).row--;	 //改变当前点
	printf("%d ",arr[(*p).row][(*p).col]);  //输出访问点
	sign(flag,*p);  //标致访问记录
	return 1;
}
