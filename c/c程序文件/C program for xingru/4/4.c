#include <stdio.h>
int main()
{ 
    float sum(float a[10]);
    float average(float a[10]);
    int i;
    float a[10],sum1,average1;
    printf("input 10 scores:\n");
    for(i=0;i<10;i++)
    scanf("%f",&a[i]);
    for(i=0;i<10;i++)
    printf("%f\n",a[i]);
    sum1=sum(a);
    average1=average(a);
    printf("sum=%f\taverage=%f\n",sum1,average1);
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
    int i;
    float average1;
    average1=sum(a)/10;
    return(average1);
   }
