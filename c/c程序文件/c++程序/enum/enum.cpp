#include<iostream.h>
#include<iomanip.h>
enum color {red,yellow,blue,white,black,purple};
void print(enum color c)
{
	switch(c)
	{
	case red:cout<<setw(10)<<"red";break;
	case yellow:cout<<setw(10)<<"yellow";break;
	case blue:cout<<setw(10)<<"blue";break;
	case white:cout<<setw(10)<<"white";break;
	case black:cout<<setw(10)<<"black";break;
	case purple:cout<<setw(10)<<"purple";break;
	}
}
void main()
{
	int count=0;
	color i,j,k;
	for(i=red;i<=purple;i=color(int(i)+1))
		for(j=red;j<=purple;j=color(int(j)+1))
			if(i!=j)
			{
				for(k=red;k<=purple;k=color(int(k)+1))
					if((k!=i)&&(k!=j))
					{
						cout<<setw(10)<<++count;
						print(i);
						print(j);
						print(k);
						cout<<endl;
					}
			}
			cout<<"可能的组合数为: "<<count<<endl;
}
							