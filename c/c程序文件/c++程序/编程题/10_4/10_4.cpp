#include<iostream.h>
class Date{
	int year,month,day;
private:
	int isleap(void)
	{
		if((year%4==0&&year%100!=0)||year%400==0)
			return 1;
		else 
			return 0;
	}
	int check(void)
	{
	  if(month>=1&&month<=12)
	  {
        switch(month)
		{
        case 1:if(day>=1&&day<=31) return 1;else return 0;
        case 2:{
			   if(isleap())
		          if(day>=1&&day<=29)return 1;else return 0;
	          else
		          if(day>=1&&day<=28)return 1;else return 0;
			   }
      case 3:if(day>=1&&day<=31) return 1 ;else return 0;
      case 4:if(day>=1&&day<=30) return 1;else return 0;
      case 5:if(day>=1&&day<=31) return 1;else return 0;
      case 6:if(day>=1&&day<=30) return 1;else return 0;
      case 7:if(day>=1&&day<=31) return 1;else return 0;
      case 8:if(day>=1&&day<=31) return 1;else return 0;
      case 9:if(day>=1&&day<=30) return 1;else return 0;
      case 10:if(day>=1&&day<=31) return 1;else return 0;
      case 11:if(day>=1&&day<=30) return 1;else return 0;
      case 12:if(day>=1&&day<=31) return 1;else return 0;
      default:return 0;
		}
	  }
	  else return 0;
	}
public:
	int set(int y,int m,int d)
	{
		year=y;month=m;day=d;
		if(check())return 1;
		else return 0;
	}
	void print(void)
	{
		if(check())
		{
		cout<<"Date:  "<<year<<'/'<<month<<'/'<<day<<endl;
		if(isleap())
			cout<<"The year is leap year."<<endl;
		}
		else
			cout<<"input illegal."<<endl;
	}
};
void main()
{
	Date d;
	int x,y,z;
	cout<<"Please input Year,Month,Date: ";
	cin>>x>>y>>z;
	d.set(x,y,z);
	d.print();
}






		
