using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Assignment_1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            //declare variables to get user input
            double principal;
            double rate;
            int year;
            double simpleAmount;
            double compoundAmount;
            string output;

            principal = Convert.ToDouble(textBox1.Text);
            rate = Convert.ToDouble(textBox2.Text);
            year = Convert.ToInt32(textBox3.Text);

            simpleAmount = principal * ((double)(1 + (rate / 100) * year));
            compoundAmount = principal * Math.Pow(1 + (rate / 100), year);

            if (simple.Checked == true)
            {
                output = string.Format("{0:C}", simpleAmount);
                textBox4.Text = output;
            }
            if (compound.Checked == true)
            {
                output = string.Format("{0:C}", compoundAmount);
                textBox4.Text = output;
            }
                
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Clear();
            textBox2.Clear();
            textBox3.Clear();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void groupBox1_Enter(object sender, EventArgs e)
        {

        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void compound_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void simple_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void textBox4_TextChanged(object sender, EventArgs e)
        {
        
        }

    }
}
