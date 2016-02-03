namespace ShoppingApplication
{
    partial class DeleteProductForm
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
            this.deleteProductLabel = new System.Windows.Forms.Label();
            this.productInformationComboBox = new System.Windows.Forms.ComboBox();
            this.OKButton = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // deleteProductLabel
            // 
            this.deleteProductLabel.AutoSize = true;
            this.deleteProductLabel.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.deleteProductLabel.Location = new System.Drawing.Point(14, 53);
            this.deleteProductLabel.Name = "deleteProductLabel";
            this.deleteProductLabel.Size = new System.Drawing.Size(256, 16);
            this.deleteProductLabel.TabIndex = 0;
            this.deleteProductLabel.Text = "Please select the product name:";
            // 
            // productInformationComboBox
            // 
            this.productInformationComboBox.FormattingEnabled = true;
            this.productInformationComboBox.Location = new System.Drawing.Point(74, 104);
            this.productInformationComboBox.Name = "productInformationComboBox";
            this.productInformationComboBox.Size = new System.Drawing.Size(136, 20);
            this.productInformationComboBox.TabIndex = 1;
            this.productInformationComboBox.SelectedIndexChanged += new System.EventHandler(this.productInformationComboBox_SelectedIndexChanged);
            // 
            // OKButton
            // 
            this.OKButton.Location = new System.Drawing.Point(105, 167);
            this.OKButton.Name = "OKButton";
            this.OKButton.Size = new System.Drawing.Size(75, 23);
            this.OKButton.TabIndex = 2;
            this.OKButton.Text = "OK";
            this.OKButton.UseVisualStyleBackColor = true;
            this.OKButton.Click += new System.EventHandler(this.OKButton_Click);
            // 
            // DeleteProductForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(284, 262);
            this.Controls.Add(this.OKButton);
            this.Controls.Add(this.productInformationComboBox);
            this.Controls.Add(this.deleteProductLabel);
            this.Name = "DeleteProductForm";
            this.Text = "DeleteProductForm";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label deleteProductLabel;
        private System.Windows.Forms.ComboBox productInformationComboBox;
        private System.Windows.Forms.Button OKButton;
    }
}