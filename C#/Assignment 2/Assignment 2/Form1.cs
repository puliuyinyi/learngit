using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Assignment_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {

            int startNum;
            int endNum;
            int t=1;
            int k = 0;
            textBox3.Clear();
            try
            {
                startNum = Convert.ToInt32(textBox1.Text);
            }
            catch (Exception)
            {
                MessageBox.Show("Input invalid!");
                textBox1.Clear();
                textBox2.Clear();
                return;
            }
            try
            {
                endNum = Convert.ToInt32(textBox2.Text);
            }
            catch (Exception)
            {
                MessageBox.Show("Input invalid!");
                textBox1.Clear();
                textBox2.Clear();
                return;
            }
            if (startNum > endNum)
            {
                int temp;
                temp = startNum;
                startNum = endNum;
                endNum = temp;
            }
            if (startNum <= 0) startNum = 1;
            if (radioButton1.Checked == true)
            {
                for (int i = startNum; i <= endNum; i++)
                {
                    for (int j = 2; j < i; j++)
                    {
                        if (i % j == 0) { t = 0; break; }
                    }
                    if (t == 1 && i != 1) { string prime = Convert.ToString(i); k++; textBox3.Text += prime + ','; }
                    t = 1;
                }
            }
            if (radioButton2.Checked == true)
            {
                    for (int i = endNum-1; i >= startNum; i--)
                    {
                        for (int j = 2; j < i; j++)
                        {
                            if (i % j == 0) { t = 0; break; }
                        }
                        if (t == 1 && i != 1) { string prime = Convert.ToString(i); k++; textBox3.Text += prime + ','; }
                        t = 1;
                    }
            }
            if (k == 0) textBox3.Text = "No prime numbers in this interval!";


        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Clear();
            textBox2.Clear();
            textBox3.Clear();
        }
    }
}
