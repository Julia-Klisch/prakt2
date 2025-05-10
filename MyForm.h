#pragma once
#include<cmath>

namespace Prakt2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(753, 437);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(745, 408);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 3";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(394, 329);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 50);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Очистити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(204, 329);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 50);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(587, 60);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"label5";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Площа прямокутника,", L"Площа трикутника,", L"Площа трапеції, ",
					L"Площа кола"
			});
			this->comboBox1->Location = System::Drawing::Point(324, 54);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(208, 24);
			this->comboBox1->TabIndex = 9;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(394, 156);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(224, 128);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(137, 262);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(137, 194);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(137, 117);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(137, 54);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(67, 268);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"r=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(67, 194);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"h=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(67, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"b=";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(67, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(28, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"a=";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->comboBox2);
			this->tabPage2->Controls->Add(this->richTextBox2);
			this->tabPage2->Controls->Add(this->textBox7);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(745, 408);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання 4";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(343, 323);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(113, 41);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Очистити";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(191, 323);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 41);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Обчислити";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Медіана", L"Бісектриса", L"Висота" });
			this->comboBox2->Location = System::Drawing::Point(374, 65);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 24);
			this->comboBox2->TabIndex = 8;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(374, 146);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(175, 115);
			this->richTextBox2->TabIndex = 7;
			this->richTextBox2->Text = L"";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(167, 231);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 6;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(167, 146);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(167, 64);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 4;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(580, 68);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 16);
			this->label9->TabIndex = 3;
			this->label9->Text = L"label9";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(82, 238);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 20);
			this->label8->TabIndex = 2;
			this->label8->Text = L"с=";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(79, 146);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(28, 20);
			this->label7->TabIndex = 1;
			this->label7->Text = L"b=";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(76, 65);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 20);
			this->label6->TabIndex = 0;
			this->label6->Text = L"a=";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(753, 437);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Практична робота_2_Кліщ";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		float a, b, h, r, s;
		const double PI = 3.14;
		int n = comboBox1->SelectedIndex;
		switch (n)
		{
		case 0:
			a = System::Convert::ToDouble(textBox1->Text);
			b = System::Convert::ToDouble(textBox2->Text);
			s = a * b;
			break;
		case 1:
			a = System::Convert::ToDouble(textBox1->Text);
			h = System::Convert::ToDouble(textBox3->Text);
			s = (a * h) / 2;
			break;
		case 2:
			a = System::Convert::ToDouble(textBox1->Text);
			b = System::Convert::ToDouble(textBox2->Text);
			h = System::Convert::ToDouble(textBox3->Text);
			s = ((a + b) / 2) * h;
			break;
		case 3:
			r = System::Convert::ToDouble(textBox4->Text);
			s = PI * pow(r, 2);
			break;
		};

		richTextBox1->AppendText(comboBox1->Text + "S= " + Convert::ToString(s) + "\r\n");
	}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int n = comboBox1->SelectedIndex;

	// Очищення вмісту label
	label5->Text = "";

	// Відключення всіх textBox
	textBox1->Enabled = false;
	textBox2->Enabled = false;
	textBox3->Enabled = false;
	textBox4->Enabled = false;

	// Відповідно до вибраного значення в comboBox, встановлення вмісту label та включення відповідних textBox
	switch (n) {
	case 0:
		label5->Text = "Введіть a, b";
		label5->Visible = true;
		textBox1->Enabled = true;
		textBox2->Enabled = true;
		break;
	case 1:
		label5->Text = "Введіть a, h";
		textBox1->Enabled = true;
		textBox3->Enabled = true;
		break;
	case 2:
		label5->Text = "Введіть a, b, h";
		textBox1->Enabled = true;
		textBox2->Enabled = true;
		textBox3->Enabled = true;
		break;
	case 3:
		label5->Text = "Введіть r";
		textBox4->Enabled = true;
		break;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear(); textBox2->Clear();
	textBox3->Clear(); textBox4->Clear();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	float a, b, c, m_a, b_a, p, h_a;
	int n = comboBox2->SelectedIndex;
	switch (n)
	{
	case 0:
		a = System::Convert::ToDouble(textBox5->Text);
		b = System::Convert::ToDouble(textBox6->Text);
		c = System::Convert::ToDouble(textBox7->Text);
		m_a = 0.5 * sqrt(2 * (b * b + c * c) - a * a);
		richTextBox2->AppendText("m_a = " + Convert::ToString(m_a) + "\r\n");
		break;
	case 1:
		a = System::Convert::ToDouble(textBox5->Text);
		b = System::Convert::ToDouble(textBox6->Text);
		c = System::Convert::ToDouble(textBox7->Text);
		b_a = sqrt((b * c * ((b + c) * (b + c) - a * a)) / (b + c));
		richTextBox2->AppendText("b_a = " + Convert::ToString(b_a) + "\r\n");
		break;
	case 2:
		a = System::Convert::ToDouble(textBox5->Text);
		b = System::Convert::ToDouble(textBox6->Text);
		c = System::Convert::ToDouble(textBox7->Text);
		p = (a + b + c) / 2;
		h_a = (2 / c) * sqrt(p * (p - a) * (p - b) * (p - c));
		richTextBox2->AppendText("h_a = " + Convert::ToString(h_a) + "\r\n");
		break;
	};
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox5->Clear();
	textBox6->Clear();
	textBox7->Clear();
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int n = comboBox2->SelectedIndex;

	// Очищення вмісту label
	label9->Text = "";

	// Відключення всіх textBox
	textBox5->Enabled = false;
	textBox6->Enabled = false;
	textBox7->Enabled = false;

	// Відповідно до вибраного значення в comboBox, встановлення вмісту label та включення відповідних textBox
	switch (n) {
	case 0:
		label9->Text = "Введіть a, b, c";
		label9->Visible = true;
		textBox5->Enabled = true;
		textBox6->Enabled = true;
		textBox7->Enabled = true;
		break;
	case 1:
		label9->Text = "Введіть a, b, c";
		textBox5->Enabled = true;
		textBox6->Enabled = true;
		textBox7->Enabled = true;
		break;
	case 2:
		label9->Text = "Введіть a, b, c";
		textBox5->Enabled = true;
		textBox6->Enabled = true;
		textBox7->Enabled = true;
		break;
	}
}
};
}
