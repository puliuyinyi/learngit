


#include <stdio.h>
int main()
{ 
    float sum(float a[10]);
    float average(float a[10]);
    float max(float a[10]);
	float min(float a[10]);
	void print(float a[10]);
    int i;
    float a[10],sum1,average1;
    printf("input 10 scores:\n");
    for(i=0;i<10;i++)
    scanf("%f",&a[i]);
	printf("Scores:");
    for(i=0;i<10;i++)
    printf("%7.2f",a[i]);
	printf("\n");
    sum1=sum(a);
    average1=average(a);
    printf("Sum:%7.2fAverage:%7.2f\n",sum1,average1);
	printf("Max:%7.2f\tMin:%7.2f\n",max(a),min(a));
	print(a);
    return 0;
}    
float sum(float a[10])
{
      int i;
      float sum1=0;
      for(i=0;i<10;i++)
      sum1=sum1+a[i];
      return (sum1);
}
   
float average(float a[10])
{
      float average1;
      average1=sum(a)/10;
      return(average1);
}
float max(float a[10])
{
	float max1;
	int i;
	max1=a[0];
	for(i=1;i<10;i++)
	{
		if(a[i]>max1)max1=a[i];
	}
	return(max1);
}
float min(float a[10])
{
	float min1;
	int i;
	min1=a[0];
	for(i=1;i<10;i++)
	{
		if(a[i]<min1)min1=a[i];
	}
	return(min1);
}
void print(float a[10])
{
	int i;
	for(i=0;i<10;i++)
	{
		if(a[i]>=90)printf("分数:%7.2f---优   ",a[i]);
		else if(a[i]>=80)printf("分数:%7.2f---良   ",a[i]);
		else if(a[i]>=60)printf("分数:%7.2f---中   ",a[i]);
		else printf("分数:%7.2f---差   ",a[i]);
	}
	printf("\n");
}


