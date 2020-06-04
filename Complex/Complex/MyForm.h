#pragma once
#include "MyForm.h"
#include<cmath>
#include<iostream>
namespace Complex {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
//TWMininV
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ X1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ C1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ X3;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ X2;
	private: System::Windows::Forms::TextBox^ Y1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ C2;
	private: System::Windows::Forms::Button^ PLUS;
	private: System::Windows::Forms::Button^ Minus;
	private: System::Windows::Forms::Button^ Umnoj;
	private: System::Windows::Forms::Button^ Delit;






	private: System::Windows::Forms::TextBox^ Y2;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ Y;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ n;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ mod1;
	private: System::Windows::Forms::TextBox^ F2;
	private: System::Windows::Forms::TextBox^ F1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ X;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->X1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->C1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->X3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->X2 = (gcnew System::Windows::Forms::TextBox());
			this->Y1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->C2 = (gcnew System::Windows::Forms::Button());
			this->PLUS = (gcnew System::Windows::Forms::Button());
			this->Minus = (gcnew System::Windows::Forms::Button());
			this->Umnoj = (gcnew System::Windows::Forms::Button());
			this->Delit = (gcnew System::Windows::Forms::Button());
			this->Y2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Y = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->n = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->mod1 = (gcnew System::Windows::Forms::TextBox());
			this->F2 = (gcnew System::Windows::Forms::TextBox());
			this->F1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->X = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// X1
			// 
			this->X1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->X1->Location = System::Drawing::Point(142, 32);
			this->X1->Multiline = true;
			this->X1->Name = L"X1";
			this->X1->Size = System::Drawing::Size(124, 31);
			this->X1->TabIndex = 0;
			this->X1->Text = L"0";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(285, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"+i";
			// 
			// C1
			// 
			this->C1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->C1->ForeColor = System::Drawing::Color::Black;
			this->C1->Location = System::Drawing::Point(474, 31);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(124, 31);
			this->C1->TabIndex = 2;
			this->C1->Text = L"C";
			this->C1->UseVisualStyleBackColor = true;
			this->C1->Click += gcnew System::EventHandler(this, &MyForm::C1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(285, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"+i";
			// 
			// X3
			// 
			this->X3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->X3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->X3->Location = System::Drawing::Point(142, 155);
			this->X3->Multiline = true;
			this->X3->Name = L"X3";
			this->X3->Size = System::Drawing::Size(130, 0);
			this->X3->TabIndex = 4;
			this->X3->Text = L"0";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(8, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Первое число";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(9, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Второе число";
			// 
			// X2
			// 
			this->X2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->X2->Location = System::Drawing::Point(142, 96);
			this->X2->Multiline = true;
			this->X2->Name = L"X2";
			this->X2->Size = System::Drawing::Size(124, 31);
			this->X2->TabIndex = 7;
			this->X2->Text = L"0";
			// 
			// Y1
			// 
			this->Y1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Y1->Location = System::Drawing::Point(320, 32);
			this->Y1->Multiline = true;
			this->Y1->Name = L"Y1";
			this->Y1->Size = System::Drawing::Size(125, 31);
			this->Y1->TabIndex = 8;
			this->Y1->Text = L"0";
			// 
			// label5
			// 
			this->label5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(107, 4);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(205, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Действительная часть";
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(315, 4);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(129, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Мнимая часть";
			// 
			// C2
			// 
			this->C2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->C2->Location = System::Drawing::Point(474, 96);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(124, 31);
			this->C2->TabIndex = 11;
			this->C2->Text = L"C";
			this->C2->UseVisualStyleBackColor = true;
			this->C2->Click += gcnew System::EventHandler(this, &MyForm::C2_Click);
			// 
			// PLUS
			// 
			this->PLUS->BackColor = System::Drawing::Color::Transparent;
			this->PLUS->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->PLUS->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PLUS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PLUS->ForeColor = System::Drawing::Color::Brown;
			this->PLUS->Location = System::Drawing::Point(724, 50);
			this->PLUS->Name = L"PLUS";
			this->PLUS->Size = System::Drawing::Size(102, 36);
			this->PLUS->TabIndex = 12;
			this->PLUS->Text = L"+";
			this->PLUS->UseVisualStyleBackColor = false;
			this->PLUS->Click += gcnew System::EventHandler(this, &MyForm::PLUS_Click);
			// 
			// Minus
			// 
			this->Minus->BackColor = System::Drawing::Color::Transparent;
			this->Minus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Minus->ForeColor = System::Drawing::Color::Brown;
			this->Minus->Location = System::Drawing::Point(875, 50);
			this->Minus->Name = L"Minus";
			this->Minus->Size = System::Drawing::Size(103, 36);
			this->Minus->TabIndex = 13;
			this->Minus->Text = L"-";
			this->Minus->UseVisualStyleBackColor = false;
			this->Minus->Click += gcnew System::EventHandler(this, &MyForm::Minus_Click);
			// 
			// Umnoj
			// 
			this->Umnoj->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Umnoj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Umnoj->ForeColor = System::Drawing::Color::Brown;
			this->Umnoj->Location = System::Drawing::Point(723, 99);
			this->Umnoj->Name = L"Umnoj";
			this->Umnoj->Size = System::Drawing::Size(103, 36);
			this->Umnoj->TabIndex = 14;
			this->Umnoj->Text = L"*";
			this->Umnoj->UseVisualStyleBackColor = true;
			this->Umnoj->Click += gcnew System::EventHandler(this, &MyForm::Umnoj_Click);
			// 
			// Delit
			// 
			this->Delit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Delit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Delit->ForeColor = System::Drawing::Color::Brown;
			this->Delit->Location = System::Drawing::Point(875, 99);
			this->Delit->Name = L"Delit";
			this->Delit->Size = System::Drawing::Size(103, 36);
			this->Delit->TabIndex = 15;
			this->Delit->Text = L"/";
			this->Delit->UseVisualStyleBackColor = true;
			this->Delit->Click += gcnew System::EventHandler(this, &MyForm::Delit_Click);
			// 
			// Y2
			// 
			this->Y2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Y2->Location = System::Drawing::Point(320, 96);
			this->Y2->Multiline = true;
			this->Y2->Name = L"Y2";
			this->Y2->Size = System::Drawing::Size(124, 31);
			this->Y2->TabIndex = 16;
			this->Y2->Text = L"0";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(285, 158);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 20);
			this->label7->TabIndex = 18;
			this->label7->Text = L"+i";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(9, 161);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(62, 20);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Ответ";
			// 
			// Y
			// 
			this->Y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Y->Location = System::Drawing::Point(320, 155);
			this->Y->Multiline = true;
			this->Y->Name = L"Y";
			this->Y->Size = System::Drawing::Size(124, 31);
			this->Y->TabIndex = 20;
			this->Y->Text = L"0";
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Brown;
			this->button1->Location = System::Drawing::Point(724, 155);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 36);
			this->button1->TabIndex = 21;
			this->button1->Text = L"x^(n)";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// n
			// 
			this->n->ForeColor = System::Drawing::Color::Black;
			this->n->Location = System::Drawing::Point(805, 162);
			this->n->Name = L"n";
			this->n->Size = System::Drawing::Size(21, 20);
			this->n->TabIndex = 22;
			this->n->Text = L"n=";
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Brown;
			this->button2->Location = System::Drawing::Point(875, 155);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 37);
			this->button2->TabIndex = 23;
			this->button2->Text = L"√";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Brown;
			this->button3->Location = System::Drawing::Point(723, 306);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 36);
			this->button3->TabIndex = 24;
			this->button3->Text = L"А->Т";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(338, 373);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(47, 20);
			this->label9->TabIndex = 26;
			this->label9->Text = L") ( sin";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(216, 373);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(43, 20);
			this->label10->TabIndex = 27;
			this->label10->Text = L"( cos";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(115, 373);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(21, 20);
			this->label11->TabIndex = 28;
			this->label11->Text = L"+i";
			// 
			// mod1
			// 
			this->mod1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mod1->Location = System::Drawing::Point(142, 368);
			this->mod1->Multiline = true;
			this->mod1->Name = L"mod1";
			this->mod1->Size = System::Drawing::Size(72, 31);
			this->mod1->TabIndex = 29;
			this->mod1->Text = L"0";
			// 
			// F2
			// 
			this->F2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->F2->Location = System::Drawing::Point(384, 368);
			this->F2->Multiline = true;
			this->F2->Name = L"F2";
			this->F2->Size = System::Drawing::Size(72, 31);
			this->F2->TabIndex = 30;
			this->F2->Text = L"0";
			// 
			// F1
			// 
			this->F1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->F1->Location = System::Drawing::Point(260, 368);
			this->F1->Multiline = true;
			this->F1->Name = L"F1";
			this->F1->Size = System::Drawing::Size(72, 31);
			this->F1->TabIndex = 31;
			this->F1->Text = L"0";
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(474, 368);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(124, 31);
			this->button4->TabIndex = 32;
			this->button4->Text = L"C";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(460, 373);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(14, 20);
			this->label12->TabIndex = 33;
			this->label12->Text = L")";
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(6, 353);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(116, 63);
			this->label13->TabIndex = 34;
			this->label13->Text = L"Тригонометрическая форма";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(302, 300);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(72, 31);
			this->textBox1->TabIndex = 35;
			this->textBox1->Text = L"0";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(142, 300);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(72, 31);
			this->textBox2->TabIndex = 36;
			this->textBox2->Text = L"0";
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(6, 297);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(130, 38);
			this->label14->TabIndex = 37;
			this->label14->Text = L"Показательная форма";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(250, 303);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(46, 20);
			this->label15->TabIndex = 38;
			this->label15->Text = L"^ ( i  *";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(220, 304);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(24, 20);
			this->label16->TabIndex = 39;
			this->label16->Text = L"*e";
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::Brown;
			this->button5->Location = System::Drawing::Point(869, 306);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(103, 36);
			this->button5->TabIndex = 40;
			this->button5->Text = L"А->П";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(380, 303);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(14, 20);
			this->label17->TabIndex = 41;
			this->label17->Text = L")";
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::Brown;
			this->button6->Location = System::Drawing::Point(869, 375);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(103, 36);
			this->button6->TabIndex = 42;
			this->button6->Text = L"П->А";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::Brown;
			this->button7->Location = System::Drawing::Point(723, 375);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(103, 36);
			this->button7->TabIndex = 43;
			this->button7->Text = L"Т->А";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(474, 299);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(124, 31);
			this->button8->TabIndex = 44;
			this->button8->Text = L"C";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(474, 155);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(124, 31);
			this->button9->TabIndex = 45;
			this->button9->Text = L"C";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(6, 428);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(143, 51);
			this->label18->TabIndex = 46;
			this->label18->Text = L"Алгебраическая форма";
			// 
			// X
			// 
			this->X->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->X->Location = System::Drawing::Point(142, 155);
			this->X->Multiline = true;
			this->X->Name = L"X";
			this->X->Size = System::Drawing::Size(124, 31);
			this->X->TabIndex = 47;
			this->X->Text = L"0";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(142, 433);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(124, 31);
			this->textBox3->TabIndex = 48;
			this->textBox3->Text = L"0";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(319, 433);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(124, 31);
			this->textBox4->TabIndex = 49;
			this->textBox4->Text = L"0";
			// 
			// button10
			// 
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(474, 433);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(124, 31);
			this->button10->TabIndex = 50;
			this->button10->Text = L"C";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(285, 436);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(29, 20);
			this->label19->TabIndex = 51;
			this->label19->Text = L"+i";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(789, 4);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(141, 29);
			this->label20->TabIndex = 52;
			this->label20->Text = L"Операции";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(789, 260);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(120, 29);
			this->label21->TabIndex = 53;
			this->label21->Text = L"Перевод";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(142, 221);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(34, 31);
			this->textBox5->TabIndex = 54;
			this->textBox5->Text = L"0";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(182, 224);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(92, 20);
			this->label22->TabIndex = 55;
			this->label22->Text = L"^(1/4) * cos(";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(280, 221);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(68, 31);
			this->textBox6->TabIndex = 56;
			this->textBox6->Text = L"0";
			// 
			// label23
			// 
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(349, 224);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(35, 20);
			this->label23->TabIndex = 57;
			this->label23->Text = L") +i";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(377, 221);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(36, 31);
			this->textBox7->TabIndex = 58;
			this->textBox7->Text = L"0";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(419, 224);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(87, 20);
			this->label24->TabIndex = 59;
			this->label24->Text = L"^(1/4) * sin(";
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(512, 221);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(68, 31);
			this->textBox8->TabIndex = 60;
			this->textBox8->Text = L"0";
			// 
			// label25
			// 
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(582, 224);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(35, 20);
			this->label25->TabIndex = 61;
			this->label25->Text = L")";
			// 
			// label26
			// 
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(9, 216);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(125, 41);
			this->label26->TabIndex = 62;
			this->label26->Text = L"Квадратный корень";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(990, 516);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->X);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->F1);
			this->Controls->Add(this->F2);
			this->Controls->Add(this->mod1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->n);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Y);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Y2);
			this->Controls->Add(this->Delit);
			this->Controls->Add(this->Umnoj);
			this->Controls->Add(this->Minus);
			this->Controls->Add(this->PLUS);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Y1);
			this->Controls->Add(this->X2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->X3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->X1);
			this->Name = L"MyForm";
			this->Text = L"Комплексные числа";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		double x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0,N=0;
		double r, phi, R, Phi, mod,F;
#pragma endregion

private: System::Void C1_Click(System::Object^ sender, System::EventArgs^ e) {
	x1 = 0; y1 = 0;
	X1->Text = Convert::ToString("0");
	Y1->Text = Convert::ToString("0");
}
private: System::Void C2_Click(System::Object^ sender, System::EventArgs^ e) {
	x2 = 0; y2 = 0;
	X2->Text = Convert::ToString("0");
	Y2->Text = Convert::ToString("0");
}
private: System::Void PLUS_Click(System::Object^ sender, System::EventArgs^ e) {
	x1 = Convert::ToDouble(X1->Text);
	y1 = Convert::ToDouble(Y1->Text);
	x2 = Convert::ToDouble(X2->Text);
	y2 = Convert::ToDouble(Y2->Text);
	x3 = x1 + x2;
	y3 = y1 + y2;
	X->Text = Convert::ToString(x3);
	Y->Text = Convert::ToString(y3);
}
private: System::Void Minus_Click(System::Object^ sender, System::EventArgs^ e) {
	x1 = Convert::ToDouble(X1->Text);
	y1 = Convert::ToDouble(Y1->Text);
	x2 = Convert::ToDouble(X2->Text);
	y2 = Convert::ToDouble(Y2->Text);
	x3 = x1 - x2;
	y3 = y1 - y2;
	X->Text = Convert::ToString(x3);
	Y->Text = Convert::ToString(y3);
}
private: System::Void Umnoj_Click(System::Object^ sender, System::EventArgs^ e) {
	x1 = Convert::ToDouble(X1->Text);
	y1 = Convert::ToDouble(Y1->Text);
	x2 = Convert::ToDouble(X2->Text);
	y2 = Convert::ToDouble(Y2->Text);
	x3 = x1 * x2 - y1 * y2;
	y3 = x1 * y2 + y1 * x2;
	X->Text = Convert::ToString(x3);
	Y->Text = Convert::ToString(y3);
}
private: System::Void Delit_Click(System::Object^ sender, System::EventArgs^ e) {
	x1 = Convert::ToDouble(X1->Text);
	y1 = Convert::ToDouble(Y1->Text);
	x2 = Convert::ToDouble(X2->Text);
	y2 = Convert::ToDouble(Y2->Text);
	x3 = (x1 * x2 + y1 * y2) / (x2 * x2 + y2 * y2);
	y3 = (y1 * x2 - x1 * y2) / (x2 * x2 + y2 * y2);
	X->Text = Convert::ToString(x3);
	Y->Text = Convert::ToString(y3);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	x1 = Convert::ToDouble(X1->Text);
	y1 = Convert::ToDouble(Y1->Text);
	N = Convert::ToDouble(n->Text);
	phi = atan2(y1, x1);
	r = sqrt(x1 * x1 + y1 * y1);
	R = pow(r, N);
	Phi = N * phi;
	x3 = R * cos(Phi);
	y3 = R * sin(Phi);
	X->Text = Convert::ToString(x3);
	Y->Text = Convert::ToString(y3);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	x1 = Convert::ToDouble(X1->Text);
	y1 = Convert::ToDouble(Y1->Text);
	mod = x1 * x1 + y1 * y1;
	F = (atan(y1 / x1))/2;
	textBox5->Text = Convert::ToString(mod);
	textBox7->Text = Convert::ToString(mod);
	textBox6->Text = Convert::ToString(F);
	textBox8->Text = Convert::ToString(F);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	x1 = Convert::ToDouble(textBox3->Text);
	y1 = Convert::ToDouble(textBox4->Text);
	mod = sqrt(x1 * x1 + y1 * y1);
	F = atan(y1 / x1);
	x3 = mod*(cos(F)) + sin(F);
	mod1->Text = Convert::ToString(mod);
	F1->Text = Convert::ToString(F);
	F2->Text = Convert::ToString(F);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	x2 = 0; y2 = 0;
	mod = 0; F = 0;
	mod1->Text = Convert::ToString("0");
	F1->Text = Convert::ToString("0");
	F2->Text = Convert::ToString("0");
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	x1 = Convert::ToDouble(textBox3->Text);
	y1 = Convert::ToDouble(textBox4->Text);
	mod = sqrt(x1 * x1 + y1 * y1);
	F = atan(y1 / x1);
	textBox2->Text = Convert::ToString(mod);
	textBox1->Text = Convert::ToString(F);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = Convert::ToString(mod);
	textBox1->Text = Convert::ToString(F);
	x1 = mod * cos(F);
	x2 = mod * sin(F);
	textBox3->Text = Convert::ToString(x1);
	textBox4->Text = Convert::ToString(x2);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	x2 = 0; y2 = 0;
	mod = 0; F = 0;
	mod1->Text = Convert::ToString("0");
	textBox2->Text = Convert::ToString("0");
	textBox1->Text = Convert::ToString("0");
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	mod1->Text = Convert::ToString(mod);
	F1->Text = Convert::ToString(F);
	F2->Text = Convert::ToString(F);
	x1 = mod * cos(F);
	x2 = mod * sin(F);
	textBox3->Text = Convert::ToString(x1);
	textBox4->Text = Convert::ToString(x2);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	x3 = 0; y3 = 0;
	X->Text = Convert::ToString("0");
	Y->Text = Convert::ToString("0");

}

private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	x1 = 0; x2 = 0;
	textBox3->Text = Convert::ToString("0");
	textBox4->Text = Convert::ToString("0");
}
};
}
