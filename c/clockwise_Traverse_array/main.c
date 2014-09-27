/************************************************************
  Copyright (C), 2014, WangMeng.
  FileName: main.c
  Author:  WangMeng      Version :  v1.0        Date:  2014-9-27
  Description:  none          
  Version:  none         
  Function List:   
    1. ....
  History:         
      <author>  <time>      <version>   <desc>
      WangMeng  2014-9-27   1.0         build the first main.c for test 
***********************************************************/
#include "clockwice.h"
int main(void)
{
	int flag[ROWS][COLS] = {0};  //标致数组元素是否被访问过，为0表示未访问，为1表示已访问

	int arr[ROWS][COLS] = {
		{0,1,2,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16},
		{17,18,19,20}
	};  //待遍历数组
	point p;  //访问点
	p.row = 0;
	p.col = 0;
	
	/*访问第一个元素*/
	printf("%d ",arr[0][0]);
	flag[0][0] = 1;

	while(!is_finished(flag,ROWS)){
		while(if_go_right(p,flag))
			go_right(&p,arr,flag);
		while(if_go_down(p,flag,ROWS))
			go_down(&p,arr,flag);
		while(if_go_left(p,flag))
			go_left(&p,arr,flag);
		while(if_go_up(p,flag))
			go_up(&p,arr,flag);
	}
	printf("\n");
	return 0;

}