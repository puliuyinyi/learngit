#include<stdio.h>
int main()
{
	int i,t=1,n,s=0,w=0,m;
	  scanf("%d",&n);
	    for(i=0;i<=n-1;i++)
		{
			if(i!=0)t=10*t;
			s=s+t;
			w=2*s+w;
		}
		printf("%d\n",w);
		return 0;
}
	    


