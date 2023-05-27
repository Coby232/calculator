#pragma once

namespace calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
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
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Calculator::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::DimGray;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(8, 93);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->MaximumSize = System::Drawing::Size(400, 57);
			this->textBox1->MaxLength = 0;
			this->textBox1->MinimumSize = System::Drawing::Size(400, 57);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(400, 57);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Calculator::textBox1_TextChanged_1);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DimGray;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button1->Location = System::Drawing::Point(108, 443);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 75);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DimGray;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button2->Location = System::Drawing::Point(8, 443);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 75);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DimGray;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button3->Location = System::Drawing::Point(208, 443);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 75);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DimGray;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button4->Location = System::Drawing::Point(8, 368);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 75);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DimGray;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button5->Location = System::Drawing::Point(108, 368);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 75);
			this->button5->TabIndex = 8;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::DimGray;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button6->Location = System::Drawing::Point(208, 368);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 75);
			this->button6->TabIndex = 7;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::DimGray;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button7->Location = System::Drawing::Point(8, 293);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 75);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::DimGray;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button8->Location = System::Drawing::Point(208, 293);
			this->button8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 75);
			this->button8->TabIndex = 5;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::DimGray;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button9->Location = System::Drawing::Point(108, 293);
			this->button9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 75);
			this->button9->TabIndex = 12;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::DimGray;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button10->Location = System::Drawing::Point(208, 518);
			this->button10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(100, 75);
			this->button10->TabIndex = 11;
			this->button10->Text = L"=";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Calculator::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::DimGray;
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button11->Location = System::Drawing::Point(8, 518);
			this->button11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(100, 75);
			this->button11->TabIndex = 10;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Calculator::EnterNumber);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::DimGray;
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button12->Location = System::Drawing::Point(108, 518);
			this->button12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(100, 75);
			this->button12->TabIndex = 9;
			this->button12->Text = L".";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Calculator::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::DimGray;
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button13->Location = System::Drawing::Point(308, 518);
			this->button13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(100, 75);
			this->button13->TabIndex = 16;
			this->button13->Text = L"÷";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::DimGray;
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button14->Location = System::Drawing::Point(308, 443);
			this->button14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(100, 75);
			this->button14->TabIndex = 15;
			this->button14->Text = L"+";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::DimGray;
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button15->Location = System::Drawing::Point(308, 368);
			this->button15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(100, 75);
			this->button15->TabIndex = 14;
			this->button15->Text = L"-";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::DimGray;
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button16->Location = System::Drawing::Point(308, 293);
			this->button16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(100, 75);
			this->button16->TabIndex = 13;
			this->button16->Text = L"×";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Calculator::EnterOperator);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(308, 218);
			this->button17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(100, 75);
			this->button17->TabIndex = 20;
			this->button17->Text = L"+/-";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Calculator::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::DimGray;
			this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button18->Location = System::Drawing::Point(208, 218);
			this->button18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(100, 75);
			this->button18->TabIndex = 19;
			this->button18->Text = L"CE";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Calculator::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::DimGray;
			this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button19->Location = System::Drawing::Point(108, 218);
			this->button19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(100, 75);
			this->button19->TabIndex = 18;
			this->button19->Text = L"C";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Calculator::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::DimGray;
			this->button20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button20->Font = (gcnew System::Drawing::Font(L"Wingdings", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->button20->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button20->Location = System::Drawing::Point(8, 218);
			this->button20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(100, 75);
			this->button20->TabIndex = 17;
			this->button20->Text = L"";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &Calculator::button20_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Gray;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox2->Location = System::Drawing::Point(9, 181);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(45, 25);
			this->textBox2->TabIndex = 21;
			this->textBox2->Text = L"MC";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Gray;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Enabled = false;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox3->Location = System::Drawing::Point(77, 181);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(45, 25);
			this->textBox3->TabIndex = 22;
			this->textBox3->Text = L"MR";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Gray;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Enabled = false;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox4->Location = System::Drawing::Point(223, 181);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(45, 25);
			this->textBox4->TabIndex = 24;
			this->textBox4->Text = L"M-";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Gray;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Enabled = false;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox5->Location = System::Drawing::Point(145, 181);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(45, 25);
			this->textBox5->TabIndex = 23;
			this->textBox5->Text = L"M+";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->AllowDrop = true;
			this->textBox6->BackColor = System::Drawing::Color::Gray;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Enabled = false;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox6->Location = System::Drawing::Point(364, 181);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(45, 25);
			this->textBox6->TabIndex = 26;
			this->textBox6->Text = L"Mv";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::Gray;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Enabled = false;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox7->Location = System::Drawing::Point(293, 181);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(45, 25);
			this->textBox7->TabIndex = 25;
			this->textBox7->Text = L"MS";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::Gray;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->textBox8->Location = System::Drawing::Point(104, 6);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(195, 34);
			this->textBox8->TabIndex = 27;
			this->textBox8->Text = L"Standard";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Calculator::textBox8_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::DimGray;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(8, 69);
			this->textBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox9->MaximumSize = System::Drawing::Size(400, 100);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(400, 29);
			this->textBox9->TabIndex = 28;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &Calculator::textBox9_TextChanged);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(416, 603);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Calculator::Calculator_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Calculator_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);

	if (textBox1->Text == "0") {
		textBox1->Text = Numbers->Text;
	}
	else {
		textBox1->Text = textBox1->Text + Numbers->Text;
	}
}

private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	Button^ NumbersOp = safe_cast<Button^>(sender);
	firstDigit = Double::Parse(textBox1->Text);
	textBox1->Text = "";
	operators = NumbersOp->Text;
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox9->Text = "";
	firstDigit = 0;
	secondDigit = 0;
	result = 0;
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "0";
	textBox9->Text = "0";
	firstDigit = 0;
	secondDigit = 0;
	result = 0;
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->TextLength>0) {
		textBox1->Text = textBox1->Text->Remove(textBox1->TextLength-1, 1);
	}
	if (textBox1->Text == "") {
		textBox1->Text = "0";
	}
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!textBox1->Text->Contains(".")) {
		textBox1->Text = textBox1->Text + ".";
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	secondDigit = Double::Parse(textBox1->Text);
	try {
		if (operators == "+") {
			result = firstDigit + secondDigit;
			textBox1->Text = System::Convert::ToString(result);
		}
		if (operators == "-") {
			result = firstDigit - secondDigit;
			textBox1->Text = System::Convert::ToString(result);
		}
		if (operators == "÷") {
			result = firstDigit / secondDigit;
			textBox1->Text = System::Convert::ToString(result);
		}
		if (operators == "×") {
			result = firstDigit * secondDigit;
			textBox1->Text = System::Convert::ToString(result);
		}
		textBox9->Text = System::Convert::ToString(firstDigit + operators + secondDigit);
	}
	catch (...) {
		textBox1->Text = "0";
		textBox9->Text = "0";
	}
}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Contains("-")) {
		textBox1->Text = textBox1->Text->Remove(0, 1);
	}
	else {
		textBox1->Text = "-" + textBox1->Text;
	}
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	try {

	}
	catch (...) {
		textBox1->Text = "0";
	}
}
};
}
