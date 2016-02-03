/*************************************************
  Copyright (C), 2014, WangMeng.
  File name:  clockwice.h
  Author:  WangMeng     Version:  v1.0     Date:  2014-9-27
  Description:    none
  Others:         none
  Function List:  
    1. ....
  History:        
    1. Date:
       Author:
       Modification:
 
    2. ...
*************************************************/
#include <stdio.h>
#define ROWS 5
#define COLS 4

typedef struct point{
	int row;
	int col;
}point;

int is_finished(const int flag[][COLS], int rows);
int if_go_right(point p, const int flag[][COLS]);
int go_right(point * p, const int arr[][COLS], int flag[][COLS]);
int if_go_down(point p, const int flag[][COLS], int rows);
int go_down(point * p, const int arr[][COLS], int flag[][COLS]);
int if_go_left(point p, const int flag[][COLS]);
int go_left(point * p, const int arr[][COLS], int flag[][COLS]);
int if_go_up(point p, const int flag[][COLS]);
int go_up(point * p, const int arr[][COLS], int flag[][COLS]);