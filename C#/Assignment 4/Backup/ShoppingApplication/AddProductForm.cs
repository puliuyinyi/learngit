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
    public partial class AddProductForm : Form
    {
        List<ProductClass> productList = new List<ProductClass>();

        public AddProductForm()
        {
            InitializeComponent();

        }
        public AddProductForm(List<ProductClass> productList)
        {
            InitializeComponent();
            this.productList = productList;
        }      

        private void addCompletedButton_Click(object sender, EventArgs e)
        {
            ProductClass product;

            String productName;  
            float productPrice;
            int productStock;

            if (newProductNameTextBox.Text == "" || newProductPriceTextBox.Text == "" || newProductStockTextBox.Text == "")
                MessageBox.Show("You should input complete product information!");
            else
            {
                productName = newProductNameTextBox.Text;
                if (isPositiveNumber(newProductPriceTextBox.Text) == true)  //对用户输入的产品价格数据的合法性进行验证
                {
                    productPrice = Convert.ToSingle(newProductPriceTextBox.Text);

                    if (isPositiveInteger(newProductStockTextBox.Text) == true) //对用户输入的产品库存数据的合法性进行验证
                    {
                        productStock = Convert.ToInt32(newProductStockTextBox.Text);
                        product = new ProductClass(productName, productPrice, productStock);
                        productList.Add(product);
                    }
                    else
                        MessageBox.Show("The stock is invalid !\r\t The stock must be positive interger!\r\t Please input again!");
                }
                else
                    MessageBox.Show("The productPrice is invalid!\r\tThe price can't be negative number or letters!The price should only have one point!!\r\tPlease input again!");

            }           
            this.Close();
        }

        /*此函数用来检测某一字符串表示的是否为正整数*/
        public bool isPositiveInteger(String numberString)
        {
            int counter;
            for (counter = 0; counter < numberString.Length; counter++)
            {
                if (counter == 0)
                {
                    if (numberString[counter] == '-')
                        return false;
                    if (numberString[counter] == '+')
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
        /*此函数用来检测某一字符串表示的是否为正的浮点数*/
        public bool isPositiveNumber(String numberString)
        {
            int counter;
            int indicator = 0; //用来表示小数点的个数，只允许出现一位小数点
            for (counter = 0; counter < numberString.Length; counter++)
            {
                if (counter == 0)
                {
                    if (numberString[counter] == '-')
                        return false;
                    if (numberString[counter] == '+')
                        continue;
                    else
                        if (numberString[counter] >= '0' && numberString[counter] <= '9')
                            continue;
                        else
                            return false;
                }
                else
                    if ((numberString[counter] >= '0' && numberString[counter] <= '9'))
                        continue;
                    else
                        if (numberString[counter] == '.')
                            if (indicator == 0)
                            {
                                indicator = 1;
                                continue;
                            }
                            else  //已经出现了小数点，不可重复出现小数点
                                return false;
                        else
                            return false;
            }
            if (counter == numberString.Length)
                return true;
            else
                return false;

        }

       


       
        
     
    }
}
