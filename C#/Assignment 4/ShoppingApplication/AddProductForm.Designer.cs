namespace ShoppingApplication
{
    partial class AddProductForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.newProductPriceTextBox = new System.Windows.Forms.TextBox();
            this.newProductStockTextBox = new System.Windows.Forms.TextBox();
            this.newProductNameTextBox = new System.Windows.Forms.TextBox();
            this.Stock = new System.Windows.Forms.Label();
            this.Price = new System.Windows.Forms.Label();
            this.Products = new System.Windows.Forms.Label();
            this.inputNewProductInforamtion = new System.Windows.Forms.Label();
            this.addCompletedButton = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // newProductPriceTextBox
            // 
            this.newProductPriceTextBox.Location = new System.Drawing.Point(236, 136);
            this.newProductPriceTextBox.Multiline = true;
            this.newProductPriceTextBox.Name = "newProductPriceTextBox";
            this.newProductPriceTextBox.Size = new System.Drawing.Size(143, 30);
            this.newProductPriceTextBox.TabIndex = 15;
            // 
            // newProductStockTextBox
            // 
            this.newProductStockTextBox.Location = new System.Drawing.Point(236, 201);
            this.newProductStockTextBox.Multiline = true;
            this.newProductStockTextBox.Name = "newProductStockTextBox";
            this.newProductStockTextBox.Size = new System.Drawing.Size(143, 31);
            this.newProductStockTextBox.TabIndex = 14;
            // 
            // newProductNameTextBox
            // 
            this.newProductNameTextBox.Location = new System.Drawing.Point(236, 67);
            this.newProductNameTextBox.Multiline = true;
            this.newProductNameTextBox.Name = "newProductNameTextBox";
            this.newProductNameTextBox.Size = new System.Drawing.Size(143, 31);
            this.newProductNameTextBox.TabIndex = 13;            
            // 
            // Stock
            // 
            this.Stock.AutoSize = true;
            this.Stock.Font = new System.Drawing.Font("SimSun", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.Stock.Location = new System.Drawing.Point(65, 203);
            this.Stock.Name = "Stock";
            this.Stock.Size = new System.Drawing.Size(47, 14);
            this.Stock.TabIndex = 12;
            this.Stock.Text = "Stock";
            // 
            // Price
            // 
            this.Price.AutoSize = true;
            this.Price.Font = new System.Drawing.Font("SimSun", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.Price.Location = new System.Drawing.Point(47, 138);
            this.Price.Name = "Price";
            this.Price.Size = new System.Drawing.Size(55, 14);
            this.Price.TabIndex = 11;
            this.Price.Text = " Price";
            // 
            // Products
            // 
            this.Products.AutoSize = true;
            this.Products.Font = new System.Drawing.Font("SimSun", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.Products.Location = new System.Drawing.Point(47, 69);
            this.Products.Name = "Products";
            this.Products.Size = new System.Drawing.Size(95, 14);
            this.Products.TabIndex = 10;
            this.Products.Text = "ProductName";
            // 
            // inputNewProductInforamtion
            // 
            this.inputNewProductInforamtion.AutoSize = true;
            this.inputNewProductInforamtion.Font = new System.Drawing.Font("SimSun", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.inputNewProductInforamtion.Location = new System.Drawing.Point(56, 9);
            this.inputNewProductInforamtion.Name = "inputNewProductInforamtion";
            this.inputNewProductInforamtion.Size = new System.Drawing.Size(344, 16);
            this.inputNewProductInforamtion.TabIndex = 16;
            this.inputNewProductInforamtion.Text = "Please input the new product\'s information";
            // 
            // addCompletedButton
            // 
            this.addCompletedButton.Font = new System.Drawing.Font("SimSun", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.addCompletedButton.Location = new System.Drawing.Point(174, 278);
            this.addCompletedButton.Name = "addCompletedButton";
            this.addCompletedButton.Size = new System.Drawing.Size(153, 45);
            this.addCompletedButton.TabIndex = 17;
            this.addCompletedButton.Text = "AddCompleted";
            this.addCompletedButton.UseVisualStyleBackColor = true;
            this.addCompletedButton.Click += new System.EventHandler(this.addCompletedButton_Click);
            // 
            // AddProductForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(491, 366);
            this.Controls.Add(this.addCompletedButton);
            this.Controls.Add(this.inputNewProductInforamtion);
            this.Controls.Add(this.newProductPriceTextBox);
            this.Controls.Add(this.newProductStockTextBox);
            this.Controls.Add(this.newProductNameTextBox);
            this.Controls.Add(this.Stock);
            this.Controls.Add(this.Price);
            this.Controls.Add(this.Products);
            this.Name = "AddProductForm";
            this.Text = "addProductForm";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox newProductPriceTextBox;
        private System.Windows.Forms.TextBox newProductStockTextBox;
        private System.Windows.Forms.TextBox newProductNameTextBox;
        private System.Windows.Forms.Label Stock;
        private System.Windows.Forms.Label Price;
        private System.Windows.Forms.Label Products;
        private System.Windows.Forms.Label inputNewProductInforamtion;
        private System.Windows.Forms.Button addCompletedButton;

    }
}