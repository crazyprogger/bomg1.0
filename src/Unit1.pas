﻿Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
  {$region FormDesigner}
  private
    {$resource Unit1.Form1.resources}
    button1: Button;
    label1: &Label;
    textBox2: TextBox;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

end.
