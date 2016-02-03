#include<stdio.h>
#include<string.h>
int main()
{
 char str1[10],str2[10],c,i,k;
  gets(str1);
  gets(str2);
  c=strcmp(str1,str2);
  if(c>0)
  {
   printf("%s>%s  \n",str1,str2);
  for(i=0;i<=10;i++)
  {
   if(str1[i]>str2[i])
   {k=str1[i]-str2[i];
  printf("%d\n",k);
   break;}
  
  }
  }
  if(c<0)
  {
   printf("%s<%s \n",str1,str2);
      for(i=0;i<=10;i++)
   {
    if(str1[i]<str2[i])
   {k=str2[i]-str1[i];
   printf("%d\n",k);
   break;
   }
  
   }
  }
  if(c==0)printf("%s==%s\n",str1,str2);
  
  return 0;
} 