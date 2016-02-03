using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ShoppingApplication
{
    public class Product
    {   
        /*单一的商品有三个属性：产品名，产品单价，产品库存*/
        private String name;
        private float price;
        private int stock;

        public Product()
        {

        }
        /*构造方法（初始化产品信息）*/
        public Product(String _name, float _price, int _stock)
        {
            this.name = _name;
            this.price = _price;
            this.stock = _stock;
        }


        public String getName()
        {
            return name;
        }
        public void setName(String _name)
        {
           name = _name;
        }
        public float getPrice()
        {
            return price;
        }
        public void setPrice(float _price)
        {
            price = _price;
        }
        public int getStock()
        {
            return stock;
        }
        public void setStock(int _stock)
        {
            stock = _stock;
        }
    }
}
