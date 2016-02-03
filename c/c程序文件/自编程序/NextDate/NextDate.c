#include<stdio.h>

int isLeapYear(int year)
{
	int leap;
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
				leap=1;
			else
				leap=0;
		}
		else
			leap=1;
	}
	else
		leap=0;
	return leap;
}

void NextDate(int* year,int* month,int* day)
{
	switch(*month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10: 
	case 12:{
		     if(*day<=30) *day=*day+1;
		     else if(*month!=12){*month=*month+1;*day=1;}
			 else{*year=*year+1;*month=1;*day=1;}
			 break;
			}
	case 4:
	case 6:
	case 9:
	case 11:{
		     if(*day<=29) *day=*day+1;
			 else {*month=*month+1;*day=1;}
			 break;
			}
	case 2:{
		    if(isLeapYear(*year))
			{if(*day<=28)*day=*day+1;
			else {*month=*month+1;*day=1;}
			}
		    else
			{if(*day<=27)*day=*day+1;
			else {*month=*month+1;*day=1;}
			}
		   break;
		   }
	}
}

int main()
{
	int year;
	int month;
	int day;
	int flag=0;
	printf("请输入日期（格式为“年，月，日”，用逗号隔开）:");
	scanf("%d,%d,%d",&year,&month,&day);
	if ((year>=1812&&year<=2012)&&(month>=1&&month<=12)&&(day>=1&&day<=31)) 
	{
		switch(month)  
		{
		case  1:
		case  3:
		case  5:
		case  7:
		case  8:
		case 10:
		case 12:flag=1;

		case  4:
		case  6:
		case  9:
		case 11:{if(day<=30) flag=1;}
		case  2:
			{ 
				if(isLeapYear(year))
				{
			   
				     if(day<=29)flag=1; 
				}
			    else  
				{if(day<=28)flag=1;}
			}
		}
	    if(flag==1){
	    NextDate(&year,&month,&day);
	    printf("Nextdate:%d-%d-%d\n",year,month,day);
		}
        if(flag==0)printf("日期组合错误\n");
		
	}
			  
	 else printf("无效输入日期\n");	
	 return 0;
}



	