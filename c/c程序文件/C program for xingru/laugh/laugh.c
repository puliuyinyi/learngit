
#include<stdio.h>
#include<windows.h>
int main()
{

void gotoxy(int x,int y);
struct move_point
{
	int x,y;
	int xv,yv;
}man;
long p;
man.x=man.y=20;
man.xv=man.yv=1;
system("cls");
p=100000000;
while(p--)
{
	if(p%50000) continue;
	gotoxy(man.x,man.y);
	printf(" ");
	man.x+=man.xv;
	if(man.x<10)
	{
		man.x=10;man.xv*=-1;
	}
	else if(man.x>70)
	{
		man.x=70;man.xv*=-1;
	}
	man.y+=man.yv;
	if(man.y<10)  {man.y=10;man.yv*=-1;}
	else if(man.y>70) {man.y=70;man.yv*=-1;}
	gotoxy(man.x,man.y);
	printf("%c\b",2);
}
getch();
return 0;
}

void gotoxy(int x,int y)
{
	int xx=0x0b;
	HANDLE hOutput;
	COORD loc;
	loc.X=x;
	loc.Y=y;
	hOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOutput,loc);
	return;
}
