using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ShoppingApplication
{
    public class ProductClass
    {   
        /*单一的商品有三个属性：产品名，产品单价，产品库存*/
        private String productName;
        private float productPrice;
        private int productStock;

        public ProductClass()
        {

        }
        /*构造方法（初始化产品信息）*/
        public ProductClass(String productName, float productPrice, int productStock)
        {
            this.productName = productName;
            this.productPrice = productPrice;
            this.productStock = productStock;
        }


        public String getProductName()
        {
            return productName;
        }
        public void setProductName(String newProductName)
        {
            productName = newProductName;
        }
        public float getProductPrice()
        {
            return productPrice;
        }
        public void setProductPrice(float newProductPrice)
        {
            productPrice = newProductPrice;
        }
        public int getProductStock()
        {
            return productStock;
        }
        public void setProductStock(int newProductStock)
        {
            productStock = newProductStock;
        }
    }
}
