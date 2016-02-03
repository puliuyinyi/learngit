#include<stdio.h>
int main()
{
 int i,j,k,x,y,max,min,s=0,a[3][3];
  for(i=0;i<=2;i++)
   for(j=0;j<=2;j++)
    scanf("%d",&a[i][j]);
  for(i=0;i<=2;i++)
  {
   max=a[i][0];
      for(j=0;j<=2;j++)
   {
    if(a[i][j]>max)
    {max=a[i][j];x=i;y=j;}
   }
    min=a[x][y];
   for(k=0;k<=2;k++)
   {
    if(a[k][y]<min)
     min=a[k][y];
   }
    if(max==min)
    {
     printf("(%d,%d)=%d is andian.\n",x,y,max);
     s=1;
    }
  }
  if(s==0)printf("no andian\n");
  return 0;
} 