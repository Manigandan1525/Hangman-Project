#pragma once
#include <msclr\marshal_cppstd.h>
//#using <mscorlib.dll>
#include"UserDesign.h"
#include<string>
#include<iostream>

using namespace std;


//UserRequest data;
namespace Hangman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace System::Threading;

	/// <summary>
	/// Summary for FormDesign
	/// </summary>
	public ref class FormDesign : public System::Windows::Forms::Form
	{
	public:

		delegate void StringArgReturningVoidDelegate(vector<GameData> GameInfo);
		//private: UserRequest userReq;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::ListBox^  listBox1;

	private:

		Thread^ RunThread;
	private: System::Windows::Forms::Button^  Button9;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Button^  Button3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	public: System::Windows::Forms::PictureBox^  pictureBox3;
	public: System::Windows::Forms::PictureBox^  pictureBox4;
	public: System::Windows::Forms::PictureBox^  pictureBox2;
	public: System::Windows::Forms::PictureBox^  pictureBox5;
	public: System::Windows::Forms::PictureBox^  pictureBox6;
	public: System::Windows::Forms::PictureBox^  pictureBox7;

	public:

	public:

	public:
	private: System::Windows::Forms::TextBox^  textBox6;



	public:

	public:
		FormDesign(void)
		{
			this->MaximizeBox = false;
			this->MinimizeBox = false;


			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormDesign()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  Button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::RadioButton^  radioButton9;
	private: System::Windows::Forms::RadioButton^  radioButton10;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::ComboBox^  comboBox1;


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
	public:
		void InitializeComponent()
		{
			UserRequest::server_connection();
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(140, 450);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 37);
			this->button1->TabIndex = 3;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormDesign::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(280, 450);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 37);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormDesign::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox1->Location = System::Drawing::Point(163, 138);
			this->textBox1->MaxLength = 49;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(205, 49);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::Window;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(62, 140);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Window;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Location = System::Drawing::Point(284, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(363, 42);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Welcome to Hangman\r\n";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = Image::FromFile(String::Concat("Images\\stage1.png"));
			this->pictureBox1->Location = System::Drawing::Point(539, 138);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(264, 378);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// FormDesign
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(984, 562);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"FormDesign";
			this->Text = L"Hangman";
			this->Load += gcnew System::EventHandler(this, &FormDesign::FormDesign_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}



	public:

		void categories(vector<GameData> Categories)
		{

			vector<string>Category;
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->Button9 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// Button4

			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;

			this->comboBox1->FormattingEnabled = true;
			int Size = 0;
			int iterate = 0;
			Category = Categories[0].get_gameoption();
			for (iterate = 0; iterate < Category.size(); iterate++)
			{
				System::String^ Words = gcnew String(Category[iterate].c_str());
				this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { Words });

			}
			this->comboBox1->Location = System::Drawing::Point(150, 250);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(205, 39);
			this->comboBox1->TabIndex = 32;

			// 
			// button5
			// 
			
			this->Button9->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->Button9->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->Button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->Button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->Button9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button9->ForeColor = System::Drawing::Color::White;
			this->Button9->Location = System::Drawing::Point(300, 450);
			this->Button9->Name = L"Button4";
			this->Button9->Size = System::Drawing::Size(105, 37);
			this->Button9->TabIndex = 6;
			this->Button9->Text = L"Back";
			this->Button9->UseVisualStyleBackColor = false;
			this->Button9->Click += gcnew System::EventHandler(this, &FormDesign::Button9_Click);
			this->button5->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(150, 450);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(103, 36);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Ok";
			this->button5->Click += gcnew System::EventHandler(this, &FormDesign::button5_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(150, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(314, 32);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Select Categories";

			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(150, 200);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(146, 30);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Categories";
			image();
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1000, 600);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->Button9);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->Name = L"FormDesign";
			this->Text = L"Hangman";
			this->Load += gcnew System::EventHandler(this, &FormDesign::FormDesign_Load);
			this->ResumeLayout(false);
			this->PerformLayout();


		}
	public:
		void levels()
		{
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->button6 = (gcnew System::Windows::Forms::Button());
		
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(150, 100);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(117, 37);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Levels";
			image();

			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioButton4->Location = System::Drawing::Point(150, 150);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(87, 35);
			this->radioButton4->TabIndex = 12;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = "Easy";


			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioButton5->Location = System::Drawing::Point(150, 200);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(126, 35);
			this->radioButton5->TabIndex = 13;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = "Medium";
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioButton6->Location = System::Drawing::Point(150, 250);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(129, 35);
			this->radioButton6->TabIndex = 14;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = "Hard";
			// 
			// Button9
			// 
		
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(140, 450);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(98, 38);
			this->button6->TabIndex = 15;
			this->button6->Text = L"OK";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &FormDesign::button6_Click);
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1000, 600);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button6);
		
			this->Controls->Add(this->radioButton6);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->Name = L"FormDesign";
			this->Text = L"Hangman";
			this->Load += gcnew System::EventHandler(this, &FormDesign::FormDesign_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}


	public:
		void instructions()
		{

			this->Button4 = (gcnew System::Windows::Forms::Button());
			// 
			// listBox1
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 43;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"", L"The hangman game instructions", L"a.The player can either create new game or join with existing game.",
					L"b.Total chances given to the players are 6.", L"c.The player can enter only one letter at a time.", L"d for every wrong guesses the hangman inage will be loaded", L"e.If chances are over the player will lose the game", L"f.For correct guesses the chances will not be reduced.", L"g.By Guessing the word correctly player win the game "
			});
			this->listBox1->Location = System::Drawing::Point(10, 10);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(990, 500);
			this->listBox1->TabIndex = 33;
			this->Button4->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->Button4->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->Button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->Button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->Button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button4->ForeColor = System::Drawing::Color::White;
			this->Button4->Location = System::Drawing::Point(450, 450);
			this->Button4->Name = L"Button4";
			this->Button4->Size = System::Drawing::Size(105, 37);
			this->Button4->TabIndex = 6;
			this->Button4->Text = L"Back";
			this->Button4->UseVisualStyleBackColor = false;
			this->Button4->Click += gcnew System::EventHandler(this, &FormDesign::Button4_Click);
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1000, 600);
			this->Controls->Add(this->Button4);
			this->Controls->Add(this->listBox1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->Name = L"FormDesign";
			this->Text = L"Hangman";
			this->Load += gcnew System::EventHandler(this, &FormDesign::FormDesign_Load);
			this->ResumeLayout(false);
			this->PerformLayout();


		}
	public:
		void game(vector<GameData> GameInfo)
		{
			vector<string>word;
			string Id = GameInfo[0].get_user_gameid();
			string Word = GameInfo[0].get_words();
			string Chance = GameInfo[0].get_remaining_guess();
			string Guess = GameInfo[0].get_wrong_guess();
			string Result = GameInfo[0].get_result();
			string Turn = GameInfo[0].get_chance();
			System::String^ Words = gcnew String(Word.c_str());
			System::String^ GameId = gcnew String(Id.c_str());
			System::String^ WrongGuess = gcnew String(Guess.c_str());
			System::String^ Chances = gcnew String(Chance.c_str());
			System::String^ Value = gcnew String(Result.c_str());
			string UserGuess;
			string Category = GameInfo[0].get_category();

			String^ UserCategory = gcnew String(Category.c_str());
			int LeftChances = atoi(Chance.c_str());
			if (Result == PLAYING)
			{
				this->textBox6 = (gcnew System::Windows::Forms::TextBox());

				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
				this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
				System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormDesign::typeid));
				this->label7 = (gcnew System::Windows::Forms::Label());
				this->textBox2 = (gcnew System::Windows::Forms::TextBox());
				this->textBox3 = (gcnew System::Windows::Forms::TextBox());
				this->label8 = (gcnew System::Windows::Forms::Label());
				this->label6 = (gcnew System::Windows::Forms::Label());
				this->textBox4 = (gcnew System::Windows::Forms::TextBox());
				this->label9 = (gcnew System::Windows::Forms::Label());
				this->label5 = (gcnew System::Windows::Forms::Label());
				this->label4 = (gcnew System::Windows::Forms::Label());

				this->textBox5 = (gcnew System::Windows::Forms::TextBox());


				this->label6->AutoSize = true;
				this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label6->Location = System::Drawing::Point(100, 200);
				this->label6->Name = L"label6";
				this->label6->Size = System::Drawing::Size(204, 36);
				this->label6->TabIndex = 22;
				this->label6->Text = L"Guess word";		// 
				// label7
				// 
				this->label7->AutoSize = true;
				this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->label7->Location = System::Drawing::Point(100, 300);
				this->label7->Name = L"label7";
				this->label7->Size = System::Drawing::Size(164, 31);
				this->label7->TabIndex = 23;
				this->label7->Text = L"Left Chances";
				// 
				// label9
				// 
				this->label1->AutoSize = true;
				this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label1->Location = System::Drawing::Point(100, 500);
				this->label1->Name = L"label6";
				this->label1->Size = System::Drawing::Size(204, 36);
				this->label1->TabIndex = 22;
				this->label1->Text = L"Wrong Guess";
				// 
				this->label9->AutoSize = true;
				this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label9->Location = System::Drawing::Point(100, 110);
				this->label9->Name = L"label9";
				this->label9->Size = System::Drawing::Size(130, 30);
				this->label9->TabIndex = 38;
				this->label9->Text = L"GameId";
				// 
				// textBox2
				// 
				this->label5->AutoSize = true;                                                       
				this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label5->Location = System::Drawing::Point(100, 50);
				this->label5->Name = L"label5";
				this->label5->Size = System::Drawing::Size(117, 37);
				this->label5->TabIndex = 11;
				this->label5->Text =  "category is:" ;
				this->label5->AutoSize = true;
				this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 17.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label4->Location = System::Drawing::Point(300, 50);
				this->label4->Name = L"label5";
				this->label4->Size = System::Drawing::Size(120, 37);
				this->label4->TabIndex = 11;
				this->label4->Text = UserCategory;

				this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->textBox2->Location = System::Drawing::Point(300, 300);
				this->textBox2->Multiline = true;
				this->textBox2->ReadOnly = true;
				this->textBox2->Name = L"textBox2";
				this->textBox2->Size = System::Drawing::Size(84, 58);
				this->textBox2->TabIndex = 24;
				this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
				this->textBox2->Text = Chances;
				// 
				// textBox3
				// 
				this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->textBox3->Location = System::Drawing::Point(300, 200);
				this->textBox3->Multiline = true;
				this->textBox3->Name = L"textBox3";
				this->textBox3->ReadOnly = true;
				this->textBox3->Text = Words;
				this->textBox3->Size = System::Drawing::Size(400, 52);
				this->textBox3->TabIndex = 25;
				// 
				// label8
				// 
				this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label8->Location = System::Drawing::Point(100, 400);
				this->label8->Name = L"label8";
				this->label8->Size = System::Drawing::Size(130, 35);
				this->label8->TabIndex = 26;
				this->label8->Text = L"Type here";
				// 
				// textBox4
				// 
				if (Turn == "1")
				{
					int number = 1;
					this->textBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->textBox4->Location = System::Drawing::Point(300, 400);
					this->textBox4->Multiline = true;
					this->textBox4->Name = L"textBox4";
					this->textBox4->MaxLength = number;
					this->textBox4->Size = System::Drawing::Size(232, 50);
					this->textBox4->TabIndex = 27;
					this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormDesign::textBox4_KeyPress);
				}
				else if (Turn == "0")
				{
					this->textBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					this->textBox4->Location = System::Drawing::Point(300, 400);
					this->textBox4->Multiline = true;
					this->textBox4->Name = L"textBox4";
					this->textBox4->ReadOnly = true;
					this->textBox4->Text = "Not your turn";
					this->textBox4->Size = System::Drawing::Size(232, 50);
					this->textBox4->TabIndex = 27;
					this->textBox4->Enter += gcnew System::EventHandler(this, &FormDesign::textBox4_Entered);
					//	this->textBox4->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FormDesign::textBox4_MouseMove);

					//	Sleep(2000);
				}


				// 
				// textBox5
				// 
				this->textBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->textBox5->Location = System::Drawing::Point(300, 110);
				this->textBox5->Name = L"textBox5";
				this->textBox5->ReadOnly = true;
				this->textBox5->Text = GameId;
				this->textBox5->Size = System::Drawing::Size(120, 90);
				this->textBox5->TabIndex = 39;

				// 	// textBox6
				// 
				this->textBox6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->textBox6->Location = System::Drawing::Point(300, 500);
				this->textBox6->Multiline = true;
				this->textBox6->Name = L"textBox6";
				this->textBox6->ReadOnly = true;

				this->textBox6->Size = System::Drawing::Size(175, 42);
				this->textBox6->TabIndex = 8;
				this->textBox6->Text = WrongGuess;
				//
				// pictureBox3
				// 
				if (LeftChances == 6)
				{
					image();
				}
				//			

				else if (LeftChances == 5)
				{
					// pictureBox3
					// 
					this->pictureBox2->Image = Image::FromFile(String::Concat("Images\\stage2.png"));
					this->pictureBox2->Location = System::Drawing::Point(750, 170);
					this->pictureBox2->Name = L"pictureBox2";
					this->pictureBox2->Size = System::Drawing::Size(270, 370);
					this->pictureBox2->TabIndex = 10;
					this->pictureBox2->TabStop = false;

				}
				else if (LeftChances == 4)
				{

					// 
					// pictureBox4
					this->pictureBox4->Image = Image::FromFile(String::Concat("Images\\stage3.png"));

					this->pictureBox4->Location = System::Drawing::Point(750, 170);
					this->pictureBox4->Name = L"pictureBox3";
					this->pictureBox4->Size = System::Drawing::Size(270, 370);
					this->pictureBox4->TabIndex = 9;
					this->pictureBox4->TabStop = false;
				}
				else if (LeftChances == 3)
				{
					// 
					// pictureBox2
					// 

					this->pictureBox3->Image = Image::FromFile(String::Concat("Images\\stage4.png"));
					this->pictureBox3->Location = System::Drawing::Point(750, 170);
					this->pictureBox3->Name = L"pictureBox4";
					this->pictureBox3->Size = System::Drawing::Size(270, 370);
					this->pictureBox3->TabIndex = 8;
					this->pictureBox3->TabStop = false;

				}
				else if (LeftChances == 2)
				{

					// 
					// pictureBox5
					// 
					this->pictureBox5->Image = Image::FromFile(String::Concat("Images\\stage5.png"));
					this->pictureBox5->Location = System::Drawing::Point(750, 170);
					this->pictureBox5->Name = L"pictureBox5";
					this->pictureBox5->Size = System::Drawing::Size(270, 370);
					this->pictureBox5->TabIndex = 11;
					this->pictureBox5->TabStop = false;

				}
				else if (LeftChances == 1)
				{

					// 
					// pictureBox6
					// 
					this->pictureBox6->Image = Image::FromFile(String::Concat("Images\\stage6.png"));
					this->pictureBox6->Location = System::Drawing::Point(750, 170);
					this->pictureBox6->Name = L"pictureBox6";
					this->pictureBox6->Size = System::Drawing::Size(270, 370);
					this->pictureBox6->TabIndex = 12;
					this->pictureBox6->TabStop = false;

				}
				else  if (LeftChances == 0)
				{

					// 
					// pictureBox7
					// 
					this->pictureBox7->Image = Image::FromFile(String::Concat("Images\\stage7.png"));
					this->pictureBox7->Location = System::Drawing::Point(750, 170);
					this->pictureBox7->Name = L"pictureBox7";
					this->pictureBox7->Size = System::Drawing::Size(270, 370);
					this->pictureBox7->TabIndex = 13;
					this->pictureBox7->TabStop = false;


				}

				this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
				this->BackColor = System::Drawing::SystemColors::Window;
				this->ClientSize = System::Drawing::Size(1000, 600);
				this->Controls->Add(this->textBox4);
				this->Controls->Add(this->label8);
				this->Controls->Add(this->textBox3);
				this->Controls->Add(this->label6);
				this->KeyPreview = true;
				this->Controls->Add(this->textBox2);
				this->Controls->Add(this->label7);
				this->Controls->Add(this->textBox5);
				this->Controls->Add(this->label9);
				this->Controls->Add(this->label4);
				this->Controls->Add(this->label5);
				this->Controls->Add(this->textBox6);
				this->Controls->Add(this->label1);
				this->Controls->Add(this->pictureBox7);
				this->Controls->Add(this->pictureBox6);
				this->Controls->Add(this->pictureBox5);
				this->Controls->Add(this->pictureBox2);
				this->Controls->Add(this->pictureBox4);
				this->Controls->Add(this->pictureBox3);
				this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->ForeColor = System::Drawing::Color::Black;
				this->Name = L"FormDesign";
				this->Text = L"Hangman";
				this->Load += gcnew System::EventHandler(this, &FormDesign::FormDesign_Load);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();
			}
			else if (Result == WIN || Result == LOSE)
			{
				Sleep(500);
				this->Controls->Clear();
				result(Value, Words);
			}
		}

		void image()
		{

			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormDesign::typeid));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			this->pictureBox1->Image = Image::FromFile(String::Concat("Images\\stage1.png"));
			this->pictureBox1->Location = System::Drawing::Point(580, 170);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(264, 378);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1000, 600);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->Name = L"FormDesign";
			this->Text = L"Hangman";
			this->Load += gcnew System::EventHandler(this, &FormDesign::FormDesign_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
	public:
		void display()
		{
		
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioButton7->Location = System::Drawing::Point(150, 150);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(83, 35);
			this->radioButton7->TabIndex = 17;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Play";
			this->radioButton7->UseVisualStyleBackColor = false;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioButton8->Location = System::Drawing::Point(150, 200);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(170, 35);
			this->radioButton8->TabIndex = 18;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Instructions";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->button7->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(140, 450);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(95, 38);
			this->button7->TabIndex = 16;
			this->button7->Text = L"Next";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &FormDesign::button7_Click);
			this->button2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(280, 450);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 37);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormDesign::button2_Click);
			image();
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1000, 600);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->radioButton7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->radioButton8);

			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->Name = L"FormDesign";
			this->Text = L"Hangman";
			this->Load += gcnew System::EventHandler(this, &FormDesign::FormDesign_Load);

			this->ResumeLayout(false);
			this->PerformLayout();
		}
	public:
		void choice()
		{
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->Button4 = (gcnew System::Windows::Forms::Button());
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioButton9->Location = System::Drawing::Point(150, 150);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(110, 35);
			this->radioButton9->TabIndex = 19;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"Create";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radioButton10->Location = System::Drawing::Point(150, 200);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(110, 35);
			this->radioButton10->TabIndex = 20;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"Join";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(140, 450);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(90, 38);
			this->button8->TabIndex = 21;
			this->button8->Text = L"OK";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &FormDesign::button8_Click);

			this->Button4->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->Button4->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->Button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->Button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->Button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button4->ForeColor = System::Drawing::Color::White;
			this->Button4->Location = System::Drawing::Point(280, 450);
			this->Button4->Name = L"Button4";
			this->Button4->Size = System::Drawing::Size(105, 37);
			this->Button4->TabIndex = 6;
			this->Button4->Text = L"Back";
			this->Button4->UseVisualStyleBackColor = false;
			this->Button4->Click += gcnew System::EventHandler(this, &FormDesign::Button4_Click);
			image();
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1000, 600);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->Button4);
			this->Controls->Add(this->radioButton9);
			this->Controls->Add(this->radioButton10);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->Name = L"FormDesign";
			this->Text = L"Hangman";
			this->Load += gcnew System::EventHandler(this, &FormDesign::FormDesign_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
		void result(String^ Result, String^Words)
		{
			this->Controls->Clear();
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());

			//			String^ Result = "win";
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Button4 = (gcnew System::Windows::Forms::Button());
			if (Result == WIN)
			{
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->label1->AutoSize = true;
				this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 72, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->label1->Location = System::Drawing::Point(300, 200);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(390, 110);
				this->label1->TabIndex = 32;
				this->label1->Text = L"You Win";
			}
			else if (Result == LOSE)
			{
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->label1->AutoSize = true;
				this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 72, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->label1->Location = System::Drawing::Point(300, 200);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(390, 110);
				this->label1->TabIndex = 32;
				this->label1->Text = L"You Loss";
			}
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 30, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(150, 100);
			this->label5->Name = L"label1";
			this->label5->Size = System::Drawing::Size(390, 110);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Word is : ";
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 30, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(350, 100);
			this->label6->Name = L"label1";
			this->label6->Size = System::Drawing::Size(390, 110);
			this->label6->TabIndex = 32;
			this->label6->Text = Words;
		
		
			// 
			// Button
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(280, 450);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 37);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FormDesign::button2_Click);
			this->Button4->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->Button4->ForeColor = System::Drawing::Color::White;
			this->Button4->Location = System::Drawing::Point(140, 450);
			this->Button4->Name = L"button6";
			this->Button4->Size = System::Drawing::Size(98, 38);
			this->Button4->TabIndex = 15;
			this->Button4->Text = L"New Game";
			this->Button4->UseVisualStyleBackColor = false;
			this->Button4->Click += gcnew System::EventHandler(this, &FormDesign::Button4_Click);
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1000, 600);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Button4);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->Name = L"FormDesign";
			this->Text = L"Hangman";
			this->Load += gcnew System::EventHandler(this, &FormDesign::FormDesign_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void game_id(vector<GameData> GameId)
		{
			int numb = 9;
			int Size = 0;
			int Iterate = 0;
			vector<string> Word;
			Word = GameId[0].get_gameid();
			System::String^ Words = gcnew String(Word[Iterate].c_str());
			if (Words == "0")
			{
				String^ message = " No gameid to join";
				String^ caption = "Join";
				MessageBoxButtons buttons = MessageBoxButtons::OK;
				System::Windows::Forms::DialogResult result;

				// Displays the MessageBox.
				result = MessageBox::Show(this, message, caption, buttons, MessageBoxIcon::Question, MessageBoxDefaultButton::Button1, MessageBoxOptions::RightAlign);
				if (result == System::Windows::Forms::DialogResult::OK)
				{
					this->Controls->Clear();
					choice();

				}
			}
			else
			{

				this->Button3 = (gcnew System::Windows::Forms::Button());
				this->Button9 = (gcnew System::Windows::Forms::Button());

				this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
				this->label1->AutoSize = true;
				this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->label1->Location = System::Drawing::Point(200, 100);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(390, 110);
				this->label1->TabIndex = 32;
				this->label1->Text = L"Game id";
				image();

				this->comboBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
				this->comboBox2->FormattingEnabled = true;
				Word = GameId[0].get_gameid();
				for (Iterate = 0; Iterate < Word.size(); Iterate++)
				{
					System::String^ Words = gcnew String(Word[Iterate].c_str());

					this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(1) { Words });
				}

				this->comboBox2->Location = System::Drawing::Point(200, 200);
				this->comboBox2->Name = L"comboBox2";
				this->comboBox2->Size = System::Drawing::Size(170, 30);
				this->comboBox2->TabIndex = 33;

				// 
				// Button3
				//
				this->Button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->Button3->BackColor = System::Drawing::SystemColors::ButtonShadow;
				this->Button3->ForeColor = System::Drawing::Color::White;
				this->Button3->Location = System::Drawing::Point(280, 450);
				this->Button3->Name = L"Button3";
				this->Button3->Size = System::Drawing::Size(105, 36);
				this->Button3->TabIndex = 33;
				this->Button3->Text = L"Ok";
				this->Button3->UseVisualStyleBackColor = false;
				this->Button3->Click += gcnew System::EventHandler(this, &FormDesign::Button3_Click);

				this->Button9->BackColor = System::Drawing::SystemColors::ButtonShadow;
				this->Button9->FlatAppearance->BorderColor = System::Drawing::Color::White;
				this->Button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
				this->Button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
				this->Button9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->Button9->ForeColor = System::Drawing::Color::White;
				this->Button9->Location = System::Drawing::Point(450, 450);
				this->Button9->Name = L"Button4";
				this->Button9->Size = System::Drawing::Size(105, 37);
				this->Button9->TabIndex = 6;
				this->Button9->Text = L"Back";
				this->Button9->UseVisualStyleBackColor = false;
				this->Button9->Click += gcnew System::EventHandler(this, &FormDesign::Button9_Click);
				this->Controls->Add(this->comboBox2);
				this->Controls->Add(this->label1);
				this->Controls->Add(this->Button3);
				this->Controls->Add(this->Button9);
				this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->ForeColor = System::Drawing::Color::Black;
				this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
				this->MaximizeBox = false;
				this->MinimizeBox = false;
				this->Name = L"FormDesign";
				this->Text = L"Hangman";
				this->Load += gcnew System::EventHandler(this, &FormDesign::FormDesign_Load);
				this->ResumeLayout(false);
				this->PerformLayout();
			}
		}

#pragma endregion


	private: System::Void FormDesign_Load(System::Object^  sender, System::EventArgs^  e)
	{
	}


	public: System::Void button1_Click(System::Object^ sender, System::EventArgs^  e)
	{
		if (this->textBox1->Text == "")
		{
			MessageBox::Show("Enter the name");
		}
		else
		{
			this->Controls->Clear();
			this->display();
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		String^ message = " Do you want to exit ?";
		String^ caption = "Exit hangman";
		MessageBoxButtons buttons = MessageBoxButtons::YesNo;
		System::Windows::Forms::DialogResult result;

		// Displays the MessageBox.
		result = MessageBox::Show(this, message, caption, buttons, MessageBoxIcon::Question, MessageBoxDefaultButton::Button1, MessageBoxOptions::RightAlign);
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			this->Close();

		}
		else if (result == System::Windows::Forms::DialogResult::No)
		{
			Sleep(2000);
		}
	}

	private: System::Void Button9_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->Controls->Clear();
		choice();
	}



	private: System::Void Button4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->Controls->Clear();
		display();
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->comboBox1->Text == "")
		{
			MessageBox::Show("Choose the category");

		}
		else
		{
			this->Controls->Clear();
			levels();

		}


	}



	public: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->radioButton7->Checked == false && this->radioButton8->Checked == false)
		{
			MessageBox::Show("Choose the choice");
		}
		else
		{
			if (this->radioButton7->Checked == true)
			{

				this->Controls->Clear();
				choice();

			}
			else if (this->radioButton8->Checked == true)
			{

				this->Controls->Clear();
				instructions();

			}
		}
	}
	public: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e)
	{
		System::String^ Name;
		std::string UserName;
		std::string Display;
		if (this->radioButton9->Checked == false && this->radioButton10->Checked == false)
		{
			MessageBox::Show("Choose the choice");
		}
		else
		{
			if (this->radioButton9->Checked == true)
			{
				Name = textBox1->Text;
				UserName = msclr::interop::marshal_as<std::string>(Name);
				cout << UserName;

				UserRequest::sendrequest_creategame(UserName);
				chance();
				return;
			}
			else if (this->radioButton10->Checked == true)
			{
				Name = textBox1->Text;
				UserName = msclr::interop::marshal_as<std::string>(Name);
				cout << UserName;

				UserRequest::sendrequest_joingame(UserName);
				chance();
				return;
			}
		}
	}
	public: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e)
	{
		System::String^ Category;
		std::string UserCategory;
		System::String^ Level;
		std::string UserLevel;


			if (this->radioButton4->Checked == false && this->radioButton5->Checked == false && this->radioButton6->Checked == false)
			{
			MessageBox::Show("Choose the choice");
			}
		else
			{
		if (this->radioButton4->Checked == true)
		{
			Level = radioButton4->Text;
			UserLevel = msclr::interop::marshal_as<std::string>(Level);
			Category = comboBox1->Text;
			UserCategory = msclr::interop::marshal_as<std::string>(Category);
			UserRequest::user_option(UserCategory, UserLevel);
			chance();
			//char* Levels = (char*)Marshal::StringToHGlobalAnsi(Choice).ToPointer();
		}
		else if (this->radioButton5->Checked == true)
		{

			Level = radioButton5->Text;
			UserLevel = msclr::interop::marshal_as<std::string>(Level);
			Category = comboBox1->Text;
			UserCategory = msclr::interop::marshal_as<std::string>(Category);
			UserRequest::user_option(UserCategory, UserLevel);
			chance();
		}
		else if (this->radioButton6->Checked == true)
		{


			Level = radioButton6->Text;
			UserLevel = msclr::interop::marshal_as<std::string>(Level);
			Category = comboBox1->Text;
			UserCategory = msclr::interop::marshal_as<std::string>(Category);
			UserRequest::user_option(UserCategory, UserLevel);
			chance();

		}
		}


		return;
	}

	private: System::Void textBox4_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e)
	{
		if (textBox4->Text->Length == textBox4->MaxLength)
		{
			string UserGuess;
			String^ Letter = textBox4->Text;
			UserGuess = msclr::interop::marshal_as<std::string>(Letter);
			UserRequest::user_input(UserGuess);
			chance();
		}
		else if (textBox4->Text->Length >= textBox4->MaxLength)
		{
			MessageBox::Show("Input is greater than the length");
		}

	}

	public: System::Void Button3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		System::String ^ Choice;
		std::string UserChoice;
		if (this->comboBox2->Text == "")
		{
			MessageBox::Show("Choose the Gameid");
		}
		else
		{
			vector<string> gameid;
			Choice = comboBox2->Text;
			UserChoice = msclr::interop::marshal_as<std::string>(Choice);
			UserRequest::user_gameid(UserChoice);
			chance();
			return;
		}
	}
			void join_game(vector<GameData> GameId)
			{
				System::String ^ Choice;
				std::string UserChoice;
				this->Controls->Clear();
				game_id(GameId);

			}
			void creategame(vector<GameData> Categories)
			{
				System::String^ Category;
				std::string UserCategory;
				this->Controls->Clear();
				categories(Categories);
				Category = comboBox1->Text;
				UserCategory = msclr::interop::marshal_as<std::string>(Category);
				cout << UserCategory;

			}

			void game_info(vector<GameData> gameinfo)
			{
				this->Controls->Clear();
				game(gameinfo);
			}
			void chance()
			{
				string Information;
				char option[1024];
				vector<GameData> details;
				string value;
				Information = UserRequest::receive();
				strcpy_s(option, Information.c_str());
				value = UserRequest::receive_data(Information);
				if (value != ENDGAME)
				{
					details = UserRequest::request_parse(Information);
				}
				if (value == JOIN)
				{
					join_game(details);
				}
				else if (value == CATEGORYLIST)
				{
					creategame(details);
				}
				else if (value == GAMEINFO)
				{
					game_info(details);
				}
				else if (value == ENDGAME)
				{
					MessageBox::Show("The Game ended");
					this->Controls->Clear();
					choice();
				}

			}
	private: System::Void textBox4_Entered(System::Object^  sender, System::EventArgs^  e)
	{
		chance();


	}
	private: System::Void textBox4_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		chance();

	}
	};
}
