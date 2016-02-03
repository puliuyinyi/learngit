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
        List<Product> productList = new List<Product>();
        float totalMoney = 0;

        public ShoppingForm(List<Product> productList)
        {
            InitializeComponent();

            this.productList = productList;
            int i = 1;
            
            /*为1个查询商品框和5个购买商品可选框添加已有商品，以备用户选择购买*/
            for (int counter = 0; counter < productList.Count; counter++)
            {
                String productInformation ="";
                Product product = productList[counter];
                productInformation += String.Format("{0}:{1}  ",i++,product.getName());

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
            int errorTag=1;//记录有无错误出现
            int[] quantity;
            quantity = new int[5]; //记录每项的购买数量
            int[] tag = new int[] { 0, 0, 0, 0, 0 }; //记录每项是否有商品选择，此项所放位置与该注释稍有不适，但不影响功能
            if (productComboBox1.SelectedIndex != -1)
            {
                if (QuantityTextBox1.Text == "")
                {
                    errorTag = 0;
                    MessageBox.Show("You have chosen a product bot not filling the quantity,please input the quantity");
                }
                else
                {
                    String quantityString = QuantityTextBox1.Text;
                    if (isPositiveInteger(quantityString) == true) //对用户输入的购买商品数量的数据的合法性检验
                    {
                        quantity[0] = Convert.ToInt32(quantityString);

                        if (quantity[0] > productList[productComboBox1.SelectedIndex].getStock()) //判断用户输入购买数量是否已经超过购买商品的库存量
                        {
                            errorTag = 0;
                            MessageBox.Show("the quantity of  " + productComboBox1.Text + " has over the products's stock! please input again!");
                        }
                        else
                        {
                            float unitPrice = productList[productComboBox1.SelectedIndex].getPrice();
                            totalMoney += unitPrice * quantity[0];
                            tag[0]=1;
                        }
                    }
                    else
                        MessageBox.Show("the data is invalid!\r\tthe quantity(in the textBox1) must be positive integer!\r\tplease input again!");

                }

            }
            if (productComboBox2.SelectedIndex != -1)
            {
                if (QuantityTextBox2.Text == "")
                {
                    errorTag = 0;
                    MessageBox.Show("You have chosen a product bot not filling the quantity,please input the quantity");
                }
                else
                {
                    String quantityString = QuantityTextBox2.Text;
                    if (isPositiveInteger(quantityString) == true) //对用户输入的购买商品数量的数据的合法性检验
                    {
                        quantity[1] = Convert.ToInt32(quantityString);

                        if (quantity[1] > productList[productComboBox2.SelectedIndex].getStock()) //判断用户输入购买数量是否已经超过购买商品的库存量
                        {
                            errorTag = 0;
                            MessageBox.Show("the quantity of  " + productComboBox2.Text + " has over the products's stock! please input again!");
                        }
                        else
                        {
                            float unitPrice = productList[productComboBox2.SelectedIndex].getPrice();
                            totalMoney += unitPrice * quantity[1];
                            tag[1] = 1;
                        }
                    }
                    else
                        MessageBox.Show("the data is invalid!\r\tthe quantity(in the textBox2) must be positive integer!\r\tplease input again!");

                }

            }
             if (productComboBox3.SelectedIndex != -1)
            {
                if (QuantityTextBox3.Text == "")
                {
                    errorTag = 0;
                    MessageBox.Show("You have chosen a product bot not filling the quantity,please input the quantity");
                }
                else
                {
                    String quantityString = QuantityTextBox3.Text;
                    if (isPositiveInteger(quantityString) == true) //对用户输入的购买商品数量的数据的合法性检验
                    {
                        quantity[2] = Convert.ToInt32(quantityString);

                        if (quantity[2] > productList[productComboBox3.SelectedIndex].getStock()) //判断用户输入购买数量是否已经超过购买商品的库存量
                        {
                            errorTag = 0;
                            MessageBox.Show("the quantity of  " + productComboBox3.Text + " has over the products's stock! please input again!");
                        }
                        else
                        {
                            float unitPrice = productList[productComboBox3.SelectedIndex].getPrice();
                            totalMoney += unitPrice * quantity[2];
                            tag[2]=1;
                        }
                    }
                    else
                        MessageBox.Show("the data is invalid!\r\tthe quantity(in the textBox3) must be positive integer!\r\tplease input again!");

                }

            }
             if (productComboBox4.SelectedIndex != -1)
            {
                if (QuantityTextBox4.Text == "")
                {
                    errorTag = 0;
                    MessageBox.Show("You have chosen a product bot not filling the quantity,please input the quantity");
                }
                else
                {
                    String quantityString = QuantityTextBox4.Text;
                    if (isPositiveInteger(quantityString) == true) //对用户输入的购买商品数量的数据的合法性检验
                    {
                        quantity[3] = Convert.ToInt32(quantityString);

                        if (quantity[3] > productList[productComboBox4.SelectedIndex].getStock()) //判断用户输入购买数量是否已经超过购买商品的库存量
                        {
                            errorTag = 0;
                            MessageBox.Show("the quantity of  " + productComboBox4.Text + " has over the products's stock! please input again!");
                        }
                        else
                        {
                            float unitPrice = productList[productComboBox4.SelectedIndex].getPrice();
                            totalMoney += unitPrice * quantity[3];
                            tag[3]=1;
                        }
                    }
                    else
                        MessageBox.Show("the data is invalid!\r\tthe quantity(in the textBox4) must be positive integer!\r\tplease input again!");

                }

            }
             if (productComboBox5.SelectedIndex != -1)
            {
                if (QuantityTextBox5.Text == "")
                {
                    errorTag = 0;
                    MessageBox.Show("You have chosen a product bot not filling the quantity,please input the quantity");
                }
                else
                {
                    String quantityString = QuantityTextBox5.Text;
                    if (isPositiveInteger(quantityString) == true) //对用户输入的购买商品数量的数据的合法性检验
                    {
                        quantity[4] = Convert.ToInt32(quantityString);

                        if (quantity[4] > productList[productComboBox5.SelectedIndex].getStock()) //判断用户输入购买数量是否已经超过购买商品的库存量
                        {
                            errorTag = 0;
                            MessageBox.Show("the quantity of  " + productComboBox5.Text + " has over the products's stock! please input again!");
                        }
                        else
                        {
                            float unitPrice = productList[productComboBox5.SelectedIndex].getPrice();
                            totalMoney += unitPrice * quantity[4];
                            tag[4]=1;
                        }
                    }
                    else
                        MessageBox.Show("the data is invalid!\r\tthe quantity(in the textBox5) must be positive integer!\r\tplease input again!");

                }

            }
             if (errorTag == 1)
             {
                  if(tag [0]==1)productList[productComboBox1.SelectedIndex].setStock(productList[productComboBox1.SelectedIndex].getStock() - quantity[0]);
                  if(tag [1]==1)productList[productComboBox2.SelectedIndex].setStock(productList[productComboBox2.SelectedIndex].getStock() - quantity[1]);
                  if (tag[2] == 1) productList[productComboBox3.SelectedIndex].setStock(productList[productComboBox3.SelectedIndex].getStock() - quantity[1]);
                  if (tag[3] == 1) productList[productComboBox4.SelectedIndex].setStock(productList[productComboBox4.SelectedIndex].getStock() - quantity[1]);
                  if (tag[4] == 1) productList[productComboBox5.SelectedIndex].setStock(productList[productComboBox5.SelectedIndex].getStock() - quantity[1]);

                 CheckOutTextBox.Text = String.Format("the total money is :\r\n     {0,35:C}", totalMoney);
             }
             else
             {
                 totalMoney = 0;
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

        private void QueryProductsInformationComboBox_SelectedIndexChanged(object sender, EventArgs e) //商品展示
        {
            int index;
            index = QueryProductsInformationComboBox.SelectedIndex;

            ShowPriceTextBox.Text = String.Format("{0,-13:C}",productList[index].getPrice());;
            ShowStockTextBox.Text = Convert.ToString(productList[index].getStock());
        }       

        private void productComboBox1_SelectedIndexChanged(object sender, EventArgs e) //此项选择的商品将不会在其他项中出现
        {
            
            
        }
        private void productComboBox2_SelectedIndexChanged(object sender, EventArgs e)
        {
            
            

        }

        private void productComboBox3_SelectedIndexChanged(object sender, EventArgs e)
        {
            
           
           
        }

        private void productComboBox4_SelectedIndexChanged(object sender, EventArgs e)
        {
          
          

        }

        private void productComboBox5_SelectedIndexChanged(object sender, EventArgs e)
        {
           
            
        }
        
        
    }
}
