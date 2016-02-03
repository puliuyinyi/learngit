#include<stdio.h>
int main()
{
	 int day=0;
	 int flag;
	 char string1[]={"\t1   3   5   7\n\t9   11  13  15\n\t17  19  21  23\n\t25  27  29  31\n"};
	 char string2[]={"\t2   3   6   7\n\t10  11  14  15\n\t18  19  22  23\n\t26  27  30  31\n"};
	 char string3[]={"\t4   5   6   7\n\t12  13  14  15\n\t20  21  22  23\n\t28  29  30  31\n"};
	 char string4[]={"\t8   9   10  11\n\t12  13  14  15\n\t24  25  26  27\n\t28  29  30  31\n"};
	 char string5[]={"\t16  17  18  19\n\t20  21  22  23\n\t24  25  26  27\n\t28  29  30  31\n"};
	 
	 printf("Is your birthday in these number?If in pelase input '1',otherwise input '0'\n");
	 printf("%s",string1);
	 scanf("%d",&flag);
	 if(flag==1)day+=1;
	 
	 printf("Is your birthday in these number?If in pelase input '1',otherwise input '0'\n");
	 printf("%s",string2);
	 scanf("%d",&flag);
	 if(flag==1)day+=2;
	 
	 printf("Is your birthday in these number?If in pelase input '1',otherwise input '0'\n");
	 printf("%s",string3);
	 scanf("%d",&flag);
	 if(flag==1)day+=4;
	 
	 printf("Is your birthday in these number?If in pelase input '1',otherwise input '0'\n");
	 printf("%s",string4);
	 scanf("%d",&flag);
	 if(flag==1)day+=8;
	 
	 printf("Is your birthday in these number?If in pelase input '1',otherwise input '0'\n");
	 printf("%s",string5);
	 scanf("%d",&flag);
	 if(flag==1)day+=16;
	
	 printf("Your birthday is %d\n",day);
	 return 0;
}
	