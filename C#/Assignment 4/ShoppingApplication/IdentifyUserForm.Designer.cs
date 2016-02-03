namespace ShoppingApplication
{
    partial class IdentifyUserForm
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
            this.ChooseIdentityLabel = new System.Windows.Forms.Label();
            this.CustomerRadioButton = new System.Windows.Forms.RadioButton();
            this.ShopKeeperRadioButton = new System.Windows.Forms.RadioButton();
            this.Okbutton1 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // ChooseIdentityLabel
            // 
            this.ChooseIdentityLabel.AutoSize = true;
            this.ChooseIdentityLabel.Font = new System.Drawing.Font("宋体", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.ChooseIdentityLabel.Location = new System.Drawing.Point(203, 61);
            this.ChooseIdentityLabel.Name = "ChooseIdentityLabel";
            this.ChooseIdentityLabel.Size = new System.Drawing.Size(154, 24);
            this.ChooseIdentityLabel.TabIndex = 0;
            this.ChooseIdentityLabel.Text = "Who are you:";
            // 
            // CustomerRadioButton
            // 
            this.CustomerRadioButton.AutoSize = true;
            this.CustomerRadioButton.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.CustomerRadioButton.Location = new System.Drawing.Point(231, 124);
            this.CustomerRadioButton.Name = "CustomerRadioButton";
            this.CustomerRadioButton.Size = new System.Drawing.Size(98, 20);
            this.CustomerRadioButton.TabIndex = 1;
            this.CustomerRadioButton.TabStop = true;
            this.CustomerRadioButton.Text = "Customer";
            this.CustomerRadioButton.UseVisualStyleBackColor = true;
            // 
            // ShopKeeperRadioButton
            // 
            this.ShopKeeperRadioButton.AutoSize = true;
            this.ShopKeeperRadioButton.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.ShopKeeperRadioButton.Location = new System.Drawing.Point(231, 166);
            this.ShopKeeperRadioButton.Name = "ShopKeeperRadioButton";
            this.ShopKeeperRadioButton.Size = new System.Drawing.Size(116, 20);
            this.ShopKeeperRadioButton.TabIndex = 2;
            this.ShopKeeperRadioButton.TabStop = true;
            this.ShopKeeperRadioButton.Text = "ShopKeeper";
            this.ShopKeeperRadioButton.UseVisualStyleBackColor = true;
            // 
            // Okbutton1
            // 
            this.Okbutton1.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.Okbutton1.Location = new System.Drawing.Point(177, 224);
            this.Okbutton1.Name = "Okbutton1";
            this.Okbutton1.Size = new System.Drawing.Size(207, 30);
            this.Okbutton1.TabIndex = 3;
            this.Okbutton1.Text = "Next";
            this.Okbutton1.UseVisualStyleBackColor = true;
            this.Okbutton1.Click += new System.EventHandler(this.Okbutton1_Click);
            // 
            // IdentifyUserForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(561, 323);
            this.Controls.Add(this.Okbutton1);
            this.Controls.Add(this.ShopKeeperRadioButton);
            this.Controls.Add(this.CustomerRadioButton);
            this.Controls.Add(this.ChooseIdentityLabel);
            this.Name = "IdentifyUserForm";
            this.Text = "IdentifyUserForm";
            this.Load += new System.EventHandler(this.IdentifyUserForm_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label ChooseIdentityLabel;
        private System.Windows.Forms.RadioButton CustomerRadioButton;
        private System.Windows.Forms.RadioButton ShopKeeperRadioButton;
        private System.Windows.Forms.Button Okbutton1;
    }
}