/***************************************************************  
****************************************************************  
*****                 ID INFORMATION                       *****
*****Programmers			:		Daniel J. LeBlanc      *****   
*****Assignment #			:		TA#3TT  			   *****        
*****Assignment Name		:		Team Tutorial          *****        
*****Course # and Title		:		CISC 192 - C++		   *****      
*****Class Meeting Time		:		MW 9:35-12:35		   *****     
*****Instructor				:		Professor Larry Forman ***** 
*****Hours					:		16					   *****  
*****Difficulty				:		8					   *****   
*****Completion Date		:		11/28/2009			   *****
*****Project Name			:		Project3TT-Team6       *****
****************************************************************           
**************************************************************** 
*****                 PROGRAM DESCRIPTION                  *****
*****                                                      *****
*****  This program is designed to demonstrate File I/O    *****
*****  as well as the proper syntax in C++ for StreamWriter*****
*****  and StreamReader.*/
/***************************************************************
****************************************************************
***************************************************************/
/****                 CREDITS                              *****
****************************************************************
****************************************************************
I/O Stream Library Diagram courtesy:
			http://www.cplusplus.com/reference
C++ All In One, For Dummies
		John Paul Mueller	Wiley Publishing Inc.
		Jeff Cogswell		2009
MS Visual C++ 2005 Express Ed Programming
Aaron Miller		Thomson Course Technology
w/Jerry Lee Ford, Jr.     2006
****************************************************************
****************************************************************
***************************************************************/



#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

namespace Project3TTTeam6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  buttonExample1;
	private: System::Windows::Forms::Label^  label1Example1;
	private: System::Windows::Forms::Button^  buttonWriteCode;
	private: System::Windows::Forms::Label^  labelWriteCode;
	private: System::Windows::Forms::Button^  buttonReadCode;
	private: System::IO::FileSystemWatcher^  fileSystemWatcher1;








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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonExample1 = (gcnew System::Windows::Forms::Button());
			this->label1Example1 = (gcnew System::Windows::Forms::Label());
			this->buttonWriteCode = (gcnew System::Windows::Forms::Button());
			this->labelWriteCode = (gcnew System::Windows::Forms::Label());
			this->buttonReadCode = (gcnew System::Windows::Forms::Button());
			this->fileSystemWatcher1 = (gcnew System::IO::FileSystemWatcher());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fileSystemWatcher1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Silver;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(215, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(419, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"File I/O: StreamWriter and StreamReader  Team #6";
			// 
			// buttonExample1
			// 
			this->buttonExample1->Location = System::Drawing::Point(39, 95);
			this->buttonExample1->Name = L"buttonExample1";
			this->buttonExample1->Size = System::Drawing::Size(75, 23);
			this->buttonExample1->TabIndex = 1;
			this->buttonExample1->Text = L"Example #1";
			this->buttonExample1->UseVisualStyleBackColor = true;
			this->buttonExample1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1Example1
			// 
			this->label1Example1->AutoSize = true;
			this->label1Example1->BackColor = System::Drawing::Color::LightGray;
			this->label1Example1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1Example1->Location = System::Drawing::Point(131, 98);
			this->label1Example1->Name = L"label1Example1";
			this->label1Example1->Size = System::Drawing::Size(484, 20);
			this->label1Example1->TabIndex = 2;
			this->label1Example1->Text = L"Some simple C++ code that opens a file and writes to a file:";
			this->label1Example1->Visible = false;
			// 
			// buttonWriteCode
			// 
			this->buttonWriteCode->Location = System::Drawing::Point(135, 136);
			this->buttonWriteCode->Name = L"buttonWriteCode";
			this->buttonWriteCode->Size = System::Drawing::Size(110, 23);
			this->buttonWriteCode->TabIndex = 3;
			this->buttonWriteCode->Text = L"WriteCode";
			this->buttonWriteCode->UseVisualStyleBackColor = true;
			this->buttonWriteCode->Visible = false;
			this->buttonWriteCode->Click += gcnew System::EventHandler(this, &Form1::buttonWriteCode_Click);
			// 
			// labelWriteCode
			// 
			this->labelWriteCode->AutoSize = true;
			this->labelWriteCode->BackColor = System::Drawing::Color::Gainsboro;
			this->labelWriteCode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelWriteCode->Location = System::Drawing::Point(176, 177);
			this->labelWriteCode->Name = L"labelWriteCode";
			this->labelWriteCode->Size = System::Drawing::Size(478, 24);
			this->labelWriteCode->TabIndex = 4;
			this->labelWriteCode->Text = L"The word Hi has been written to the file MyFile.dat";
			this->labelWriteCode->Visible = false;
			// 
			// buttonReadCode
			// 
			this->buttonReadCode->Location = System::Drawing::Point(273, 136);
			this->buttonReadCode->Name = L"buttonReadCode";
			this->buttonReadCode->Size = System::Drawing::Size(100, 23);
			this->buttonReadCode->TabIndex = 5;
			this->buttonReadCode->Text = L"ReadCode";
			this->buttonReadCode->UseVisualStyleBackColor = true;
			this->buttonReadCode->Visible = false;
			this->buttonReadCode->Click += gcnew System::EventHandler(this, &Form1::buttonReadCode_Click);
			// 
			// fileSystemWatcher1
			// 
			this->fileSystemWatcher1->EnableRaisingEvents = true;
			this->fileSystemWatcher1->SynchronizingObject = this;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Maroon;
			this->ClientSize = System::Drawing::Size(805, 366);
			this->Controls->Add(this->buttonReadCode);
			this->Controls->Add(this->labelWriteCode);
			this->Controls->Add(this->buttonWriteCode);
			this->Controls->Add(this->label1Example1);
			this->Controls->Add(this->buttonExample1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"File StreamWriter and StreamReader";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->fileSystemWatcher1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				label1Example1->Visible=true;
				buttonWriteCode->Visible=true;
			 }
	private: System::Void buttonWriteCode_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				ofstream outfile("MyFile.dat");
				outfile <<"Hi"<< endl;
				outfile.close();
				labelWriteCode->Visible=true;
				buttonReadCode->Visible=true;
				return;
								

			 }
private: System::Void buttonReadCode_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				String^ word;
				ifstream infile("MyFile.dat");
				infile>>word;
				MessageBox::Show(word,"");
				//cout << "TESTING 1 2 3..." << endl;
				//display(word);
				
				infile.close();
				
				
				return;
			 }
};
}

