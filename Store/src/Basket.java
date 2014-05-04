import java.util.ArrayList;
public class Basket
{
	private ArrayList<Goods> goodsList=new ArrayList<Goods>();

	public void addGoods(Goods goods)
	{
		goodsList.add(goods);
	}

	public ArrayList<Goods> getAllGoods()
	{
		return goodsList;
	}

	public boolean isEmpty()
	{
		return (goodsList.isEmpty());
	}

	public void clear()
	{
		goodsList.clear();
	}

	public float getTotalPrice()
	{
		float total=0;
		for(int i=0;i<goodsList.size();i++)
		{
			total+=goodsList.get(i).getPrice();
		}
		return total;
	}
}