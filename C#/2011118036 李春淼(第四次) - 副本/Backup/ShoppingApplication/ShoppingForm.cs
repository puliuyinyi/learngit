using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace ShoppingApplication
{
    public partial class ShoppingForm : Form
    {
        List<ProductClass> productList = new List<ProductClass>();
        float totalMoney = 0;

        public ShoppingForm(List<ProductClass> productList)
        {
            InitializeComponent();

            this.productList = productList;
            
            /*为1个查询商品框和5个购买商品可选框添加已有商品，以备用户选择购买*/
            for (int counter = 0; counter < productList.Count; counter++)
            {
                String productInformation ="";
                ProductClass product = productList[counter];
                productInformation +=  String.Format("name:{0,-10}", product.getProductName());

                productListTextBox.Text += productInformation;

                QueryProductsInformationComboBox.Items.Add(productInformation);

                productComboBox1.Items.Add(productInformation);
                productComboBox2.Items.Add(productInformation);
                productComboBox3.Items.Add(productInformation);
                productComboBox4.Items.Add(productInformation);
                productComboBox5.Items.Add(productInformation);                
            }  
         

        }
        private void ShoppingForm_Load(object sender, EventArgs e)
        {

        }

        private void CheckOutButton_Click(object sender, EventArgs e)
        {
            if (productComboBox1.SelectedIndex != -1)
            {
                if (QuantityTextBox1.Text == "")
                    MessageBox.Show("You have chosen a product bot not filling the quantity,please input the quantity");
                else
                {
                    int quantity;
                    String quantityString = QuantityTextBox1.Text;
                    if (isPositiveInteger(quantityString) == true) //对用户输入的购买商品数量的数据的合法性检验
                    {
                        quantity = Convert.ToInt32(quantityString);
                        if (quantity > productList[productComboBox1.SelectedIndex].getProductStock()) //判断用户输入购买数量是否已经超过购买商品的库存量
                            MessageBox.Show("the quantity(in the QuantityTextBox1) has over the products's stock! please input again!");
                        else
                        {
                            /*更新库存*/
                            productList[productComboBox1.SelectedIndex].setProductStock(productList[productComboBox1.SelectedIndex].getProductStock() - quantity);
                            float unitPrice = productList[productComboBox1.SelectedIndex].getProductPrice();
                            totalMoney += unitPrice * quantity;      //计算当前用户购买商品的总价                 
                        }
                    }
                    else
                        MessageBox.Show("the data is invalid!\r\tthe quantity(in the textBox1) must be positive integer!\r\tplease input again!");

                }

            }
            if (productComboBox2.SelectedIndex != -1)
            {
                if (QuantityTextBox2.Text == "")
                    MessageBox.Show("You have chosen a product bot not filling the quantity,please input the quantity");
                else
                {
                    int quantity;
                    String quantityString = QuantityTextBox2.Text;
                    if (isPositiveInteger(quantityString) == true)//对用户输入的购买商品数量的数据的合法性检验
                    {
                        quantity = Convert.ToInt32(quantityString);
                        if (quantity > productList[productComboBox2.SelectedIndex].getProductStock())//判断用户输入购买数量是否已经超过购买商品的库存量
                            MessageBox.Show("the quantity(in the QuantityTextBox2) has over the products's stock! please input again!");
                        else
                        {    /*更新库存*/
                            productList[productComboBox2.SelectedIndex].setProductStock(productList[productComboBox2.SelectedIndex].getProductStock() - quantity);
                            float unitPrice = productList[productComboBox2.SelectedIndex].getProductPrice();
                            totalMoney += unitPrice * quantity;//计算当前用户购买商品的总价        

                        }

                    }
                    else
                        MessageBox.Show("the data is invalid!\r\tthe quantity(in the textBox2) must be positive integer!\r\tplease input again!");
                }

            }
             if (productComboBox3.SelectedIndex != -1)
            {
                if (QuantityTextBox3.Text == "")
                    MessageBox.Show("You have chosen a product bot not filling the quantity,please input the quantity");
                else
                {
                    int quantity;
                    String quantityString = QuantityTextBox3.Text;
                    if (isPositiveInteger(quantityString) == true)//对用户输入的购买商品数量的数据的合法性检验
                    {
                        quantity = Convert.ToInt32(quantityString);
                        if (quantity > productList[productComboBox3.SelectedIndex].getProductStock())//判断用户输入购买数量是否已经超过购买商品的库存量
                            MessageBox.Show("the quantity(in the QuantityTextBox3) has over the products's stock! please input again!");
                        else
                        {    /*更新库存*/
                            productList[productComboBox3.SelectedIndex].setProductStock(productList[productComboBox3.SelectedIndex].getProductStock() - quantity);
                            float unitPrice = productList[productComboBox3.SelectedIndex].getProductPrice();
                            totalMoney += unitPrice * quantity;//计算当前用户购买商品的总价                                
                        }
                    }
                    else
                        MessageBox.Show("the data is invalid!\r\tthe quantity(in the textBox3) must be positive integer!\r\tplease input again!");
                }

            }
             if (productComboBox4.SelectedIndex != -1)
            {
                if (QuantityTextBox4.Text == "")
                    MessageBox.Show("You have chosen a product bot not filling the quantity,please input the quantity");
                else
                {
                    int quantity;
                    String quantityString = QuantityTextBox4.Text;
                    if (isPositiveInteger(quantityString) == true)//对用户输入的购买商品数量的数据的合法性检验
                    {
                        quantity = Convert.ToInt32(quantityString);
                        if (quantity > productList[productComboBox4.SelectedIndex].getProductStock())//判断用户输入购买数量是否已经超过购买商品的库存量
                            MessageBox.Show("the quantity(in the QuantityTextBox4) has over the products's stock! please input again!");
                        else
                        {    /*更新库存*/
                            productList[productComboBox4.SelectedIndex].setProductStock(productList[productComboBox4.SelectedIndex].getProductStock() - quantity);
                            float unitPrice = productList[productComboBox4.SelectedIndex].getProductPrice();
                            totalMoney += unitPrice * quantity;//计算当前用户购买商品的总价                                
                        }
                    }
                    else
                        MessageBox.Show("the data is invalid!\r\tthe quantity(in the textBox4) must be positive integer!\r\tplease input again!");
                }
            }
             if (productComboBox5.SelectedIndex != -1)
             {
                 if (QuantityTextBox5.Text == "")
                     MessageBox.Show("You have chosen a product bot not filling the quantity,please input the quantity");
                 else
                 {
                     int quantity;
                     String quantityString = QuantityTextBox5.Text;
                     if (isPositiveInteger(quantityString) == true)//对用户输入的购买商品数量的数据的合法性检验
                     {
                         quantity = Convert.ToInt32(quantityString);
                         if (quantity > productList[productComboBox5.SelectedIndex].getProductStock())//判断用户输入购买数量是否已经超过购买商品的库存量
                             MessageBox.Show("the quantity(in the QuantityTextBox5) has over the products's stock! please input again!");
                         else
                         {    /*更新库存*/
                             productList[productComboBox5.SelectedIndex].setProductStock(productList[productComboBox5.SelectedIndex].getProductStock() - quantity);
                             float unitPrice = productList[productComboBox5.SelectedIndex].getProductPrice();
                             totalMoney += unitPrice * quantity;//计算当前用户购买商品的总价        
                         }

                     }
                     else
                         MessageBox.Show("the data is invalid!\r\tthe quantity(in the textBox5) must be positive integer!\r\tplease input again!");

                 }
             }          
           
            CheckOutTextBox.Text = String.Format("the total money is :\r\n     {0,35:C}", totalMoney); //显示当前用户购买商品的总价 
            /*初始化更新相关商品库存后的商品信息，用户可以在newProductInformationComboBox中选择查看商品信息*/
            newProductInformationComboBox.Items.Clear();
            for (int counter = 0; counter < productList.Count; counter++)
            {
                String productInformation = "";
                ProductClass product = productList[counter];
                productInformation += String.Format("name:{0,-10}price:{1,6:C} stock:{2}  ", product.getProductName(),
                                         product.getProductPrice(), product.getProductStock());
                newProductInformationComboBox.Items.Add(productInformation);              
            }           
        }
        /*此函数用来检测某一字符串表示的是否为正整数*/
        public bool isPositiveInteger(String numberString)
        {
            int counter;
            for (counter = 0; counter < numberString.Length; counter++ )
            {
                if(counter == 0)
                {
                    if(numberString[counter] == '-')
                        return false;
                    if(numberString[counter] == '+')
                        continue;
                    else
                        if (numberString[counter] >= '0' && numberString[counter] <= '9')
                            continue;
                        else
                            return false;
                }
                else
                   if (numberString[counter] >= '0' && numberString[counter] <= '9')
                        continue;
                   else
                        return false;
            }
            if (counter == numberString.Length)
                return true;
            else
                return false;
        }

        private void QueryProductsInformationComboBox_SelectedIndexChanged(object sender, EventArgs e)
        {
            int index;
            index = QueryProductsInformationComboBox.SelectedIndex;

            ShowPriceTextBox.Text = String.Format("{0,-13:C}",productList[index].getProductPrice());;
            ShowStockTextBox.Text = Convert.ToString(productList[index].getProductStock());
        }       

        int[] indicatorInCaseOfRepeat = {0,0,0,0,0}; //因为至多5种商品，所以设置此数组用来表示某一种商品用户是否已经购买

        private void productComboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (productComboBox1.SelectedIndex != -1)
            {
                if (indicatorInCaseOfRepeat[productComboBox1.SelectedIndex] == 0)
                    indicatorInCaseOfRepeat[productComboBox1.SelectedIndex] = 1; //用来标记此种商品已经购买
                else
                {
                    MessageBox.Show("You have bought this product,please choose another product to buy!");
                    productComboBox1.SelectedIndex = -1;
                }

            }
            
        }
        private void productComboBox2_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (productComboBox2.SelectedIndex != -1)
            {
                if (indicatorInCaseOfRepeat[productComboBox2.SelectedIndex] == 0)
                    indicatorInCaseOfRepeat[productComboBox2.SelectedIndex] = 1; //用来标记此种商品已经购买
                else
                {
                    MessageBox.Show("You have bought this product,please choose another product to buy!");
                    productComboBox2.SelectedIndex = -1;
                }

            }

        }

        private void productComboBox3_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (productComboBox3.SelectedIndex != -1)
            {
                if (indicatorInCaseOfRepeat[productComboBox3.SelectedIndex] == 0)
                    indicatorInCaseOfRepeat[productComboBox3.SelectedIndex] = 1; //用来标记此种商品已经购买
                else
                {
                    MessageBox.Show("You have bought this product,please choose another product to buy!");
                    productComboBox3.SelectedIndex = -1;
                }

            }
        }

        private void productComboBox4_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (productComboBox4.SelectedIndex != -1)
            {
                if (indicatorInCaseOfRepeat[productComboBox4.SelectedIndex] == 0)
                    indicatorInCaseOfRepeat[productComboBox4.SelectedIndex] = 1; //用来标记此种商品已经购买
                else
                {
                    MessageBox.Show("You have bought this product,please choose another product to buy!");
                    productComboBox4.SelectedIndex = -1;
                }

            }

        }

        private void productComboBox5_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (productComboBox5.SelectedIndex != -1)
            {
                if (indicatorInCaseOfRepeat[productComboBox5.SelectedIndex] == 0)
                    indicatorInCaseOfRepeat[productComboBox5.SelectedIndex] = 1; //用来标记此种商品已经购买
                else
                {
                    MessageBox.Show("You have bought this product,please choose another product to buy!");
                    productComboBox5.SelectedIndex = -1;
                }

            }
        }
        
    
       

        
    }
}
