namespace ShoppingApplication
{
    partial class ProductForm
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
            this.ProductInformation = new System.Windows.Forms.Label();
            this.AddProductButton = new System.Windows.Forms.Button();
            this.ModifyProductItemButton = new System.Windows.Forms.Button();
            this.DeleteProductButton = new System.Windows.Forms.Button();
            this.Products = new System.Windows.Forms.Label();
            this.Price = new System.Windows.Forms.Label();
            this.Stock = new System.Windows.Forms.Label();
            this.ProductInformationTextBox = new System.Windows.Forms.TextBox();
            this.RefreshProductInformationButton = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // ProductInformation
            // 
            this.ProductInformation.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.ProductInformation.AutoSize = true;
            this.ProductInformation.Font = new System.Drawing.Font("Microsoft YaHei", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.ProductInformation.Location = new System.Drawing.Point(254, -2);
            this.ProductInformation.Name = "ProductInformation";
            this.ProductInformation.Size = new System.Drawing.Size(166, 21);
            this.ProductInformation.TabIndex = 0;
            this.ProductInformation.Text = "Product Information";
            // 
            // AddProductButton
            // 
            this.AddProductButton.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.AddProductButton.Font = new System.Drawing.Font("SimSun", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.AddProductButton.Location = new System.Drawing.Point(539, 54);
            this.AddProductButton.Name = "AddProductButton";
            this.AddProductButton.Size = new System.Drawing.Size(180, 48);
            this.AddProductButton.TabIndex = 1;
            this.AddProductButton.Text = "Add Product";
            this.AddProductButton.UseVisualStyleBackColor = true;
            this.AddProductButton.Click += new System.EventHandler(this.AddProductButton_Click);
            // 
            // ModifyProductItemButton
            // 
            this.ModifyProductItemButton.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.ModifyProductItemButton.Font = new System.Drawing.Font("SimSun", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.ModifyProductItemButton.Location = new System.Drawing.Point(539, 136);
            this.ModifyProductItemButton.Name = "ModifyProductItemButton";
            this.ModifyProductItemButton.Size = new System.Drawing.Size(180, 51);
            this.ModifyProductItemButton.TabIndex = 2;
            this.ModifyProductItemButton.Text = "Modify Product Item";
            this.ModifyProductItemButton.UseVisualStyleBackColor = true;
            this.ModifyProductItemButton.Click += new System.EventHandler(this.ModifyProductItemButton_Click);
            // 
            // DeleteProductButton
            // 
            this.DeleteProductButton.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.DeleteProductButton.Font = new System.Drawing.Font("SimSun", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.DeleteProductButton.Location = new System.Drawing.Point(539, 223);
            this.DeleteProductButton.Name = "DeleteProductButton";
            this.DeleteProductButton.Size = new System.Drawing.Size(180, 47);
            this.DeleteProductButton.TabIndex = 3;
            this.DeleteProductButton.Text = "Delete Product";
            this.DeleteProductButton.UseVisualStyleBackColor = true;
            this.DeleteProductButton.Click += new System.EventHandler(this.DeleteProductButton_Click);
            // 
            // Products
            // 
            this.Products.AutoSize = true;
            this.Products.Font = new System.Drawing.Font("SimSun", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.Products.Location = new System.Drawing.Point(23, 73);
            this.Products.Name = "Products";
            this.Products.Size = new System.Drawing.Size(95, 14);
            this.Products.TabIndex = 4;
            this.Products.Text = "ProductName";
            // 
            // Price
            // 
            this.Price.AutoSize = true;
            this.Price.Font = new System.Drawing.Font("SimSun", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.Price.Location = new System.Drawing.Point(165, 73);
            this.Price.Name = "Price";
            this.Price.Size = new System.Drawing.Size(55, 14);
            this.Price.TabIndex = 5;
            this.Price.Text = " Price";
            // 
            // Stock
            // 
            this.Stock.AutoSize = true;
            this.Stock.Font = new System.Drawing.Font("SimSun", 10F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.Stock.Location = new System.Drawing.Point(283, 73);
            this.Stock.Name = "Stock";
            this.Stock.Size = new System.Drawing.Size(47, 14);
            this.Stock.TabIndex = 6;
            this.Stock.Text = "Stock";
            // 
            // ProductInformationTextBox
            // 
            this.ProductInformationTextBox.Location = new System.Drawing.Point(26, 109);
            this.ProductInformationTextBox.Multiline = true;
            this.ProductInformationTextBox.Name = "ProductInformationTextBox";
            this.ProductInformationTextBox.Size = new System.Drawing.Size(363, 238);
            this.ProductInformationTextBox.TabIndex = 7;
            // 
            // RefreshProductInformationButton
            // 
            this.RefreshProductInformationButton.Location = new System.Drawing.Point(26, 33);
            this.RefreshProductInformationButton.Name = "RefreshProductInformationButton";
            this.RefreshProductInformationButton.Size = new System.Drawing.Size(194, 30);
            this.RefreshProductInformationButton.TabIndex = 8;
            this.RefreshProductInformationButton.Text = "ShowProductInformation";
            this.RefreshProductInformationButton.UseVisualStyleBackColor = true;
            this.RefreshProductInformationButton.Click += new System.EventHandler(this.ShowProductInformationButton_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("SimSun", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.label1.Location = new System.Drawing.Point(395, 306);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(319, 45);
            this.label1.TabIndex = 9;
            this.label1.Text = "If you have update the product,\r\nyou can click \r\nShowProductInformation Button to" +
                " check ";
            // 
            // ProductForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(720, 442);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.RefreshProductInformationButton);
            this.Controls.Add(this.ProductInformationTextBox);
            this.Controls.Add(this.Stock);
            this.Controls.Add(this.Price);
            this.Controls.Add(this.Products);
            this.Controls.Add(this.DeleteProductButton);
            this.Controls.Add(this.ModifyProductItemButton);
            this.Controls.Add(this.AddProductButton);
            this.Controls.Add(this.ProductInformation);
            this.Name = "ProductForm";
            this.Text = "ProductForm";
            this.Load += new System.EventHandler(this.ProductForm_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label ProductInformation;
        private System.Windows.Forms.Button AddProductButton;
        private System.Windows.Forms.Button ModifyProductItemButton;
        private System.Windows.Forms.Button DeleteProductButton;
        private System.Windows.Forms.Label Products;
        private System.Windows.Forms.Label Price;
        private System.Windows.Forms.Label Stock;
        private System.Windows.Forms.TextBox ProductInformationTextBox;
        private System.Windows.Forms.Button RefreshProductInformationButton;
        private System.Windows.Forms.Label label1;
    }
}

