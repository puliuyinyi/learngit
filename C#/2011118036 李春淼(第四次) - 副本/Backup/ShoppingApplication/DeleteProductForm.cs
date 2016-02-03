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
    public partial class DeleteProductForm : Form
    {
        List<ProductClass> productList = new List<ProductClass>();

        public DeleteProductForm()
        {
            InitializeComponent();
        }
        public DeleteProductForm(List<ProductClass> productList)
        {
            InitializeComponent();
            this.productList = productList;            

            for (int counter = 0; counter < productList.Count; counter++)
            {
                String productInformation = "";
                ProductClass product = productList[counter];
                productInformation += product.getProductName();
                productInformationComboBox.Items.Add(productInformation);//初始化用户可删除的商品信息，以供用户选择
            }        
            
        }
        /*删除用户所选择的商品信息*/
        private void productInformationComboBox_SelectedIndexChanged(object sender, EventArgs e)
        {
            int index = productInformationComboBox.SelectedIndex;
            productList.RemoveAt(index); 
        }

        private void OKButton_Click(object sender, EventArgs e)
        {
            this.Close(); //关闭此窗口
        }
        
    }
}
