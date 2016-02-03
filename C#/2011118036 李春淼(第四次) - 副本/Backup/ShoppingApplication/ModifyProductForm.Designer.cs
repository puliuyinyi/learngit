namespace ShoppingApplication
{
    partial class ModifyProductForm
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
            this.ChooseToModify = new System.Windows.Forms.Label();
            this.ProductItemsComboBox = new System.Windows.Forms.ComboBox();
            this.NewName = new System.Windows.Forms.Label();
            this.NewPrice = new System.Windows.Forms.Label();
            this.NewStock = new System.Windows.Forms.Label();
            this.newNameTextBox = new System.Windows.Forms.TextBox();
            this.newPriceTextBox = new System.Windows.Forms.TextBox();
            this.newStockTextBox = new System.Windows.Forms.TextBox();
            this.Okbutton1 = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // ChooseToModify
            // 
            this.ChooseToModify.AutoSize = true;
            this.ChooseToModify.Font = new System.Drawing.Font("SimSun", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.ChooseToModify.Location = new System.Drawing.Point(0, 9);
            this.ChooseToModify.Name = "ChooseToModify";
            this.ChooseToModify.Size = new System.Drawing.Size(332, 16);
            this.ChooseToModify.TabIndex = 0;
            this.ChooseToModify.Text = "Please choose one product to modify:";
            // 
            // ProductItemsComboBox
            // 
            this.ProductItemsComboBox.FormattingEnabled = true;
            this.ProductItemsComboBox.Location = new System.Drawing.Point(113, 45);
            this.ProductItemsComboBox.Name = "ProductItemsComboBox";
            this.ProductItemsComboBox.Size = new System.Drawing.Size(128, 20);
            this.ProductItemsComboBox.TabIndex = 1;
            this.ProductItemsComboBox.SelectedIndexChanged += new System.EventHandler(this.ProductItemsComboBox_SelectedIndexChanged);
            // 
            // NewName
            // 
            this.NewName.AutoSize = true;
            this.NewName.Font = new System.Drawing.Font("SimSun", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.NewName.Location = new System.Drawing.Point(27, 124);
            this.NewName.Name = "NewName";
            this.NewName.Size = new System.Drawing.Size(63, 15);
            this.NewName.TabIndex = 2;
            this.NewName.Text = "newName";
            // 
            // NewPrice
            // 
            this.NewPrice.AutoSize = true;
            this.NewPrice.Font = new System.Drawing.Font("SimSun", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.NewPrice.Location = new System.Drawing.Point(144, 124);
            this.NewPrice.Name = "NewPrice";
            this.NewPrice.Size = new System.Drawing.Size(71, 15);
            this.NewPrice.TabIndex = 3;
            this.NewPrice.Text = "newPrice";
            // 
            // NewStock
            // 
            this.NewStock.AutoSize = true;
            this.NewStock.Font = new System.Drawing.Font("SimSun", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.NewStock.Location = new System.Drawing.Point(261, 124);
            this.NewStock.Name = "NewStock";
            this.NewStock.Size = new System.Drawing.Size(71, 15);
            this.NewStock.TabIndex = 4;
            this.NewStock.Text = "newStock";
            // 
            // newNameTextBox
            // 
            this.newNameTextBox.Location = new System.Drawing.Point(12, 158);
            this.newNameTextBox.Multiline = true;
            this.newNameTextBox.Name = "newNameTextBox";
            this.newNameTextBox.Size = new System.Drawing.Size(105, 27);
            this.newNameTextBox.TabIndex = 5;
            // 
            // newPriceTextBox
            // 
            this.newPriceTextBox.Location = new System.Drawing.Point(136, 158);
            this.newPriceTextBox.Multiline = true;
            this.newPriceTextBox.Name = "newPriceTextBox";
            this.newPriceTextBox.Size = new System.Drawing.Size(105, 27);
            this.newPriceTextBox.TabIndex = 6;
            // 
            // newStockTextBox
            // 
            this.newStockTextBox.Location = new System.Drawing.Point(261, 158);
            this.newStockTextBox.Multiline = true;
            this.newStockTextBox.Name = "newStockTextBox";
            this.newStockTextBox.Size = new System.Drawing.Size(105, 27);
            this.newStockTextBox.TabIndex = 7;
            // 
            // Okbutton1
            // 
            this.Okbutton1.Font = new System.Drawing.Font("SimSun", 9F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.Okbutton1.Location = new System.Drawing.Point(135, 208);
            this.Okbutton1.Name = "Okbutton1";
            this.Okbutton1.Size = new System.Drawing.Size(106, 29);
            this.Okbutton1.TabIndex = 8;
            this.Okbutton1.Text = "OK";
            this.Okbutton1.UseVisualStyleBackColor = true;
            this.Okbutton1.Click += new System.EventHandler(this.Okbutton1_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("SimSun", 11F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.label1.Location = new System.Drawing.Point(0, 83);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(415, 15);
            this.label1.TabIndex = 9;
            this.label1.Text = "Tip:you can only input the items you want to modify";
            // 
            // ModifyProductForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(431, 303);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.Okbutton1);
            this.Controls.Add(this.newStockTextBox);
            this.Controls.Add(this.newPriceTextBox);
            this.Controls.Add(this.newNameTextBox);
            this.Controls.Add(this.NewStock);
            this.Controls.Add(this.NewPrice);
            this.Controls.Add(this.NewName);
            this.Controls.Add(this.ProductItemsComboBox);
            this.Controls.Add(this.ChooseToModify);
            this.Name = "ModifyProductForm";
            this.Text = "ModifyProductForm";
            this.Load += new System.EventHandler(this.ModifyProductForm_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label ChooseToModify;
        private System.Windows.Forms.ComboBox ProductItemsComboBox;
        private System.Windows.Forms.Label NewName;
        private System.Windows.Forms.Label NewPrice;
        private System.Windows.Forms.Label NewStock;
        private System.Windows.Forms.TextBox newNameTextBox;
        private System.Windows.Forms.TextBox newPriceTextBox;
        private System.Windows.Forms.TextBox newStockTextBox;
        private System.Windows.Forms.Button Okbutton1;
        private System.Windows.Forms.Label label1;
    }
}