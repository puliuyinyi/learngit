#include<iostream>   
#include<string>   
#include<vector>

using namespace std;
int const N=6; //the number of goods



class Goods 
{
private :string name;
private: float price;

public: Goods(string _name,float _price)
	{
		name=_name;
		price=_price;
	};

public: void setName(string _name)
	{
		name=_name;
	};

public: string getName()
	{
		return name;
	};

public: void setPrice(float _price)
	{
		price=_price;
	};

public: float getPrice()
	{
		return price;
	};
};

class Basket
{
private: vector<Goods> goodsList; 
	
public: void addGoods(Goods goods)
	{
		goodsList.push_back(goods);
	};

public: vector<Goods> getAllGoods()
	{
		return goodsList;
	};

public: bool isEmpty()
	{
		if(goodsList.size()==0)
			return true;
		else
			return false;
	};

public: void clear()
	{
		goodsList.clear();
	};

public: float getTotalPrice()
	{
		float totalPrice=0;
		for(int i=0;i<goodsList.size();i++)
			totalPrice+=goodsList[i].getPrice();
		return totalPrice;
	};
};

class Store
{
public:
	static const Goods GOODS[N]; //all goods
	Basket basket;
	static const string MESSAGE_HEADER;
	static const string MESSAGE_FOOTER;
 
	void exit()
	{
		basket.clear();
		cout<<"THANK!"<<endl;

	};

	void checkOut()
	{
		cout<<"========CHECK OUT==========="<<endl;
		for(int i=0;i<basket.getAllGoods().size();i++)
			cout<<"   "<<basket.getAllGoods()[i].getName()<<"   "<<basket.getAllGoods()[i].getPrice()<<endl;
		cout<<"============================="<<endl;   
        cout<<"TOTAL:"<<"   "<<basket.getTotalPrice()<<endl;
	};

	void invalidInput()
	{
		cout<<"INVALIDINPUT,PLEASE TRY AGAIN"<<endl;
	};

	void addGoods(int choice)
	{
		this->basket.addGoods(GOODS[choice-1]);
	};

	void printMenu() const
	{
		cout<<"******************************************\n";   
        cout<<"    Welcome to XiaoFang Convinence Store\n";   
        cout<<"******************************************\n";   
        cout<<"    "<<"(1)"<<"     "<<"Bread"<<"       "<<"1.0"<<endl;   
        cout<<"    "<<"(2)"<<"     "<<"Cocacoal"<<"    "<<"1.0"<<endl;   
        cout<<"    "<<"(3)"<<"     "<<"Beer"<<"        "<<"1.0"<<endl;   
        cout<<"    "<<"(4)"<<"     "<<"Chocolate"<<"   "<<"1.0"<<endl;   
        cout<<"    "<<"(5)"<<"     "<<"Pencial"<<"     "<<"0.5"<<endl;   
        cout<<"    "<<"(6)"<<"     "<<"Notebook"<<"    "<<"3.0"<<endl;   
        cout<<"    "<<"(9)"<<"     "<<"CHECK OUT"<<endl;   
        cout<<"    "<<"(0)"<<"     "<<"EXIT"<<endl;   
        cout<<"------------------------------------------"<<endl;  
	};
};

static Goods GOODS[N]={Goods("Bread",1.0),Goods("Cocacola",1.0),Goods("Bear",1.0),Goods("Chocalate",1.0),Goods("Pencial",0.5),Goods("Notebook",3.0)};   
static const string MESSAGE_HEADER="**********\nWelcome to XiaoFang Convinence Store\n*********";   
static const string MESSAGE_FOOTER="-------------------";   


void main()
{
	Store store;
	int n=1;
	bool flag=true;
	store.printMenu();
	
	while(n!=0)
	{
	   cout<<"PLEASE SELECT A NUMBER:";
	   cin>>n;
	   
	   if(flag)
	   {
		   switch(n)
		   {
		   case 1:
			   cout<<"YOU HAVE SELECTED    ["<<GOODS[0].getName()<<"], $"<<GOODS[0].getPrice()<<endl;
			   store.basket.addGoods(GOODS[0]);break;
		   case 2:
			   cout<<"YOU HAVE SELECTED    ["<<GOODS[1].getName()<<"], $"<<GOODS[1].getPrice()<<endl;
			   store.basket.addGoods(GOODS[1]);break;
		   case 3:
			   cout<<"YOU HAVE SELECTED    ["<<GOODS[2].getName()<<"], $"<<GOODS[2].getPrice()<<endl;
			   store.basket.addGoods(GOODS[2]);break;
		   case 4:
			   cout<<"YOU HAVE SELECTED    ["<<GOODS[3].getName()<<"], $"<<GOODS[3].getPrice()<<endl;
			   store.basket.addGoods(GOODS[3]);break;
		   case 5:
			   cout<<"YOU HAVE SELECTED    ["<<GOODS[4].getName()<<"], $"<<GOODS[4].getPrice()<<endl;
			   store.basket.addGoods(GOODS[4]);break;
		   case 6:
			   cout<<"YOU HAVE SELECTED    ["<<GOODS[5].getName()<<"], $"<<GOODS[5].getPrice()<<endl;
			   store.basket.addGoods(GOODS[5]);break;
		   case 9:
			   store.checkOut();
			   cout<<"THANKS!"<<endl;
			   store.printMenu();
			   break;
		   case 0:
			   store.exit();
			   flag=false;break;
		   default:
			   store.invalidInput();

		   }
	   }

	}

}
