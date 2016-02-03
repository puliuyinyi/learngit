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
    public partial class IdentifyUserForm : Form
    {
        List<ProductClass> productList = new List<ProductClass>();

        public IdentifyUserForm()
        {
            InitializeComponent();

            ProductClass newProduct1 = new ProductClass("Computer", 6199, 20);
            ProductClass newProduct2 = new ProductClass("Phone", 4688, 30);

            productList.Add(newProduct1);
            productList.Add(newProduct2);
        }

        private void IdentifyUserForm_Load(object sender, EventArgs e)
        {

        }

        private void Okbutton1_Click(object sender, EventArgs e)
        {   
            /*若点击Customer按钮，则进入购物界面*/
            if(CustomerRadioButton.Checked == true)
            {
                ShoppingForm shopping = new ShoppingForm(productList);
                 shopping.Show();

            }
            /*若点击Shopkeeper按钮，则进入管理商品界面*/
            if (ShopKeeperRadioButton.Checked == true)
            {
                ProductForm product = new ProductForm(productList);
                 product.Show();            
            }
        }


    }
}
