#include<stdio.h>
int main() 
{
	int max(int x,int y, int z);
	int a,b,c,d; 
scanf("%d,%d,%d",&a,&b,&c); 
d=max(a,b,c); 
printf("max=%d\n",d); 

} 
int max(int x,int y,int z)
{	int u; 
if(x>y&&x>z) 
u=x; 
else if(y>x&&y>z) 
u=y; 
else 
u=z; 
return(u); 
}