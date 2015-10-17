
import java.util.Scanner;
public class Store
{
	private static Goods[] GOODS=new Goods[6];
	private static Basket basket=new Basket();

	private static void exit()
	{
		basket.clear();
		System.out.println("THANKS!");
	}

	private static void checkOut()
	{
		System.out.println("=========  CHEKOUT  =========");
		for(int i=0;i<basket.getAllGoods().size();i++)
		{
			System.out.println(basket.getAllGoods().get(i).getName()+"     "+basket.getAllGoods().get(i).getPrice());
		}
		System.out.println("=============================");
		System.out.println("TOTAL:   $"+basket.getTotalPrice());
	}

	private static void invalidInput()
	{
		System.out.println("INVALID INPUT,PLEASE TRY AGAIN!");
	}

	/*private static void addGoods(int choice)
	{
		basket.addGoods(GOODS[choice-1]);
	}*/

	private static void printMenu()
	{
		System.out.println();
		System.out.println("*******************************************");
		System.out.println("   WELCOME TO XIAOFANG CONVENIENCE STORE   ");
		System.out.println("*******************************************");
		System.out.println("<1> Bread              1.0");
		System.out.println("<2> Cocacola           1.0");
		System.out.println("<3> Beer               1.0");
		System.out.println("<4> Chocalate          1.0");
		System.out.println("<5> Pencil             1.0");
		System.out.println("<6> Notebook           1.0");
		System.out.println();
		System.out.println("<9> CHECK OUT");
		System.out.println("<0> EXIT");
		System.out.println("--------------------------------------------");
	}

	public static void main(String args[])
	{
		int n=1;
		Scanner in=new Scanner(System.in);
		boolean flag=true;
	
		GOODS[0]=new Goods("Bread",1.0f);
		GOODS[1]=new Goods("Cocacola",1.0f);
		GOODS[2]=new Goods("Beer",1.0f);
		GOODS[3]=new Goods("Chocalate",1.0f);
		GOODS[4]=new Goods("Pencil",0.5f);
		GOODS[5]=new Goods("Notebook",3.0f);	
	
		printMenu();
	
		while(n!=0)
		{
	   		System.out.print("PLEASE SELECT A NUMBER:");
	   		n=in.nextInt();
	   
	   		if(flag)
	   		{
		   		switch(n)
		   		{
		   		case 1:
			   		System.out.println("YOU HAVE SELECTED    ["+GOODS[0].getName()+"], $"+GOODS[0].getPrice());
			   		basket.addGoods(GOODS[0]);break;
			   	case 2:
			   		System.out.println("YOU HAVE SELECTED    ["+GOODS[1].getName()+"], $"+GOODS[1].getPrice());
			   		basket.addGoods(GOODS[1]);break;
			   	case 3:
			   		System.out.println("YOU HAVE SELECTED    ["+GOODS[2].getName()+"], $"+GOODS[2].getPrice());
			   		basket.addGoods(GOODS[2]);break;
			   	case 4:
			   		System.out.println("YOU HAVE SELECTED    ["+GOODS[3].getName()+"], $"+GOODS[3].getPrice());
			   		basket.addGoods(GOODS[3]);break;
			   	case 5:
			   		System.out.println("YOU HAVE SELECTED    ["+GOODS[4].getName()+"], $"+GOODS[4].getPrice());
			   		basket.addGoods(GOODS[4]);break;
			   	case 6:
			   		System.out.println("YOU HAVE SELECTED    ["+GOODS[5].getName()+"], $"+GOODS[5].getPrice());
			   		basket.addGoods(GOODS[5]);break;

		   		
		   		case 9:
			   		checkOut();
			   		System.out.println("THANKS");
			   		printMenu();
			   		break;
		   		case 0:
			   		exit();
			   		flag=false;break;
		   		default:
				   	invalidInput();
				}

		   }
	   }
		in.close();

	}

}