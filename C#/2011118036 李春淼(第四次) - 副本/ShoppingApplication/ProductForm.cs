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
    public partial class ProductForm : Form
    {
        List<ProductClass> productList = new List<ProductClass>();       
        
        public ProductForm(List<ProductClass> productList)
        {
            InitializeComponent();

            this.productList = productList;

            String productInformation = "";

            for (int counter = 0; counter < productList.Count; counter++)
            {
                ProductClass product = productList[counter];
                productInformation += String.Format("{0,-13}       {1,13:C}             {2}", product.getProductName(),
                                         product.getProductPrice(), product.getProductStock());

                productInformation += "\r\n";

            }
            ProductInformationTextBox.Text = productInformation;

        }

        /*点击ShowProductInformation按钮后，显示当前所有产品信息*/
        private void ShowProductInformationButton_Click(object sender, EventArgs e)
        {
            String productInformation = "";

            for (int counter = 0; counter < productList.Count; counter++)
            {
                ProductClass product = productList[counter];
                productInformation += String.Format("{0,-13}       {1,13:C}             {2}", product.getProductName(),
                                         product.getProductPrice(), product.getProductStock());

                productInformation += "\r\n";

            }
            ProductInformationTextBox.Text = productInformation;

        }

        private void AddProductButton_Click(object sender, EventArgs e)
        {
            /*点击AddProduct按钮后，进入添加商品信息的用户界面*/
            AddProductForm addProduct = new AddProductForm(productList);
            addProduct.Show();
        }

        private void DeleteProductButton_Click(object sender, EventArgs e)
        {
            /*点击DeleteProduct按钮后，进入删除商品信息的用户界面*/
            DeleteProductForm deleteProduct = new DeleteProductForm(productList);
            deleteProduct.Show();
        }
        private void ModifyProductItemButton_Click(object sender, EventArgs e)
        {
            /*点击ModifyProduct按钮后，进入修改商品信息的用户界面*/
            ModifyProductForm modifyProduct = new ModifyProductForm(productList);
            modifyProduct.Show();

        }

        private void ProductForm_Load(object sender, EventArgs e)
        {

            String productInformation = "";

            for (int counter = 0; counter < productList.Count; counter++)
            {
                ProductClass product = productList[counter];
                productInformation += String.Format("{0,-13}       {1,13:C}             {2}", product.getProductName(),
                                         product.getProductPrice(), product.getProductStock());

                productInformation += "\r\n";

            }
            ProductInformationTextBox.Text = productInformation;
        }       
    }
}
