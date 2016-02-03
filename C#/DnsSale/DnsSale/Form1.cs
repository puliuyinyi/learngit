using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace DnsSale
{
    public partial class DnsSaleForm : Form
    {
        public DnsSaleForm()
        {
            InitializeComponent();
            this.goodsNumberBox.SelectedIndex = 0;
            this.numberBox.SelectedIndex = 2;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double price;
            int goodsNumber;
            int number;
            double buyPrice;
            string print;

            price = Convert.ToDouble(priceBox.Text);
            goodsNumber = Convert.ToInt32(goodsNumberBox.Text);
            number = Convert.ToInt32(numberBox.Text);

            buyPrice = price * (number - 1) / number * goodsNumber;

            print = buyPrice.ToString("F2");
            output.Text = print;

        }
    }
}
