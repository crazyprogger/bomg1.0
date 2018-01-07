procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.button1 := new System.Windows.Forms.Button();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.label1 := new System.Windows.Forms.Label();
        self.SuspendLayout();
        // 
        // button1
        // 
        self.button1.Anchor := System.Windows.Forms.AnchorStyles.None;
        self.button1.AutoSize := true;
        self.button1.BackColor := System.Drawing.Color.Brown;
        self.button1.Cursor := System.Windows.Forms.Cursors.Hand;
        self.button1.Font := new System.Drawing.Font('Impact', 20.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.button1.ForeColor := System.Drawing.Color.Yellow;
        self.button1.Location := new System.Drawing.Point(325, 326);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(127, 44);
        self.button1.TabIndex := 0;
        self.button1.Text := 'П*ЗДЕЦ!!!';
        self.button1.UseVisualStyleBackColor := false;
        // 
        // textBox2
        // 
        self.textBox2.Anchor := System.Windows.Forms.AnchorStyles.None;
        self.textBox2.Font := new System.Drawing.Font('Impact', 15.75, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.textBox2.Location := new System.Drawing.Point(279, 300);
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(175, 33);
        self.textBox2.TabIndex := 2;
        self.textBox2.UseSystemPasswordChar := true;
        // 
        // label1
        // 
        self.label1.Anchor := System.Windows.Forms.AnchorStyles.None;
        self.label1.AutoSize := true;
        self.label1.BackColor := System.Drawing.Color.Transparent;
        self.label1.Cursor := System.Windows.Forms.Cursors.AppStarting;
        self.label1.Font := new System.Drawing.Font('Impact', 18, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.ForeColor := System.Drawing.Color.Yellow;
        self.label1.Location := new System.Drawing.Point(2, -4);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(403, 261);
        self.label1.TabIndex := 3;
        self.label1.Text := resources.GetString('label1.Text');
        self.label1.TextAlign := System.Drawing.ContentAlignment.TopCenter;
        // 
        // Form1
        // 
        self.BackgroundImage := (System.Drawing.Image(resources.GetObject('$this.BackgroundImage')));
        self.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.ClientSize := new System.Drawing.Size(559, 577);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.textBox2);
        self.Controls.Add(self.button1);
        self.Cursor := System.Windows.Forms.Cursors.Arrow;
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.None;
        self.Name := 'Form1';
        self.Text := 'Form1';
        self.WindowState := System.Windows.Forms.FormWindowState.Maximized;
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
