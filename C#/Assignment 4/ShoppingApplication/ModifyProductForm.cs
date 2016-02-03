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
    public partial class ModifyProductForm : Form
    {
        List<Product> productList = new List<Product>();

        public ModifyProductForm()
        {
            InitializeComponent();
        }
        public ModifyProductForm(List<Product> productList)
        {
            InitializeComponent();
            this.productList = productList;            

            for (int counter = 0; counter < productList.Count; counter++)
            {
                String productInformation = "";
                Product product = productList[counter];
                productInformation += product.getName();
                ProductItemsComboBox.Items.Add(productInformation); //初始化用户可修改的商品信息，以供用户选择
            }        
            
        }
        private void ModifyProductForm_Load(object sender, EventArgs e)
        {

        }

        int index;
        private void ProductItemsComboBox_SelectedIndexChanged(object sender, EventArgs e)
        {
            index = ProductItemsComboBox.SelectedIndex;  //定位用户所要修改的商品
        }
        /*在用户点击OK按钮后，根据用户的定制对商品部分信息进行修改*/
        private void Okbutton1_Click(object sender, EventArgs e)
        {
            if(newNameTextBox.Text != "")
            {
                productList[index].setName(newNameTextBox.Text) ;
            }
            if(newPriceTextBox.Text != "")
            {
                if (isPositiveNumber(newPriceTextBox.Text) == true)  //对用户输入的产品价格数据的合法性进行验证
                {
                    float productPrice = (float)Convert.ToDouble(newPriceTextBox.Text);
                    productList[index].setPrice(productPrice);                   
                }
                else
                    MessageBox.Show("The productPrice is invalid!\r\tThe price can't be negative number or letters!The price should only have one point!!\r\tPlease input again!");
            }
            if(newStockTextBox.Text != "")
            {
                if (isPositiveInteger(newStockTextBox.Text) == true) //对用户输入的产品库存量数据的合法性进行验证
                {
                    int productStock = Convert.ToInt32(newStockTextBox.Text);
                    productList[index].setStock(productStock);                    
                }
                else
                    MessageBox.Show("The stock is invalid !\r\t The stock must be positive interger!\r\t Please input again!");    
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
