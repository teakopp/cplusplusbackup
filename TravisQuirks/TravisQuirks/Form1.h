#pragma once


namespace TravisQuirks {

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


			labelDate->Text ="Today's date and time:\n" +
					 DateTime::Now.ToString();
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
	private: System::Windows::Forms::Label^  labelWelcome;
	private: System::Windows::Forms::Label^  labelDate;
	private: System::Windows::Forms::Button^  buttonQuirk1;
	private: System::Windows::Forms::Button^  buttonQuirk2;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::Button^  buttonExit;
	private: System::Windows::Forms::Label^  labelExit;
	private: System::Windows::Forms::PictureBox^  pictureBoxSurf;
	private: System::Windows::Forms::PictureBox^  pictureBoxVeggie;





	protected: 


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
			this->labelWelcome = (gcnew System::Windows::Forms::Label());
			this->labelDate = (gcnew System::Windows::Forms::Label());
			this->buttonQuirk1 = (gcnew System::Windows::Forms::Button());
			this->buttonQuirk2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->labelExit = (gcnew System::Windows::Forms::Label());
			this->pictureBoxSurf = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxVeggie = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxSurf))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxVeggie))->BeginInit();
			this->SuspendLayout();
			// 
			// labelWelcome
			// 
			this->labelWelcome->AutoSize = true;
			this->labelWelcome->BackColor = System::Drawing::SystemColors::ControlText;
			this->labelWelcome->Font = (gcnew System::Drawing::Font(L"Snap ITC", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelWelcome->ForeColor = System::Drawing::Color::Red;
			this->labelWelcome->Location = System::Drawing::Point(70, 98);
			this->labelWelcome->Name = L"labelWelcome";
			this->labelWelcome->Size = System::Drawing::Size(676, 42);
			this->labelWelcome->TabIndex = 0;
			this->labelWelcome->Text = L"Welcome To Travis\' Quirky Program";
			this->labelWelcome->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// labelDate
			// 
			this->labelDate->AutoSize = true;
			this->labelDate->BackColor = System::Drawing::Color::Red;
			this->labelDate->Font = (gcnew System::Drawing::Font(L"Snap ITC", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelDate->ForeColor = System::Drawing::Color::Black;
			this->labelDate->Location = System::Drawing::Point(186, 140);
			this->labelDate->Name = L"labelDate";
			this->labelDate->Size = System::Drawing::Size(115, 37);
			this->labelDate->TabIndex = 1;
			this->labelDate->Text = L"label2";
			this->labelDate->Click += gcnew System::EventHandler(this, &Form1::labelDate_Click);
			// 
			// buttonQuirk1
			// 
			this->buttonQuirk1->BackColor = System::Drawing::Color::Red;
			this->buttonQuirk1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->buttonQuirk1->ForeColor = System::Drawing::Color::Black;
			this->buttonQuirk1->Location = System::Drawing::Point(77, 440);
			this->buttonQuirk1->Name = L"buttonQuirk1";
			this->buttonQuirk1->Size = System::Drawing::Size(96, 37);
			this->buttonQuirk1->TabIndex = 2;
			this->buttonQuirk1->Text = L"Quirk#1";
			this->buttonQuirk1->UseVisualStyleBackColor = false;
			this->buttonQuirk1->Click += gcnew System::EventHandler(this, &Form1::buttonQuirk1_Click);
			// 
			// buttonQuirk2
			// 
			this->buttonQuirk2->BackColor = System::Drawing::Color::Red;
			this->buttonQuirk2->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->buttonQuirk2->Location = System::Drawing::Point(212, 440);
			this->buttonQuirk2->Name = L"buttonQuirk2";
			this->buttonQuirk2->Size = System::Drawing::Size(89, 37);
			this->buttonQuirk2->TabIndex = 3;
			this->buttonQuirk2->Text = L"Quirk#2";
			this->buttonQuirk2->UseVisualStyleBackColor = false;
			this->buttonQuirk2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(120, 189);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"label1";
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::Color::Red;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->buttonExit->Location = System::Drawing::Point(654, 440);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(92, 36);
			this->buttonExit->TabIndex = 7;
			this->buttonExit->Text = L"Exit";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &Form1::buttonExit_Click);
			// 
			// labelExit
			// 
			this->labelExit->AutoSize = true;
			this->labelExit->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelExit->ForeColor = System::Drawing::Color::Red;
			this->labelExit->Location = System::Drawing::Point(81, 98);
			this->labelExit->Name = L"labelExit";
			this->labelExit->Size = System::Drawing::Size(0, 27);
			this->labelExit->TabIndex = 8;
			this->labelExit->Visible = false;
			// 
			// pictureBoxSurf
			// 
			this->pictureBoxSurf->ImageLocation = L"surf.jpg";
			this->pictureBoxSurf->Location = System::Drawing::Point(12, 172);
			this->pictureBoxSurf->Name = L"pictureBoxSurf";
			this->pictureBoxSurf->Size = System::Drawing::Size(168, 262);
			this->pictureBoxSurf->TabIndex = 9;
			this->pictureBoxSurf->TabStop = false;
			this->pictureBoxSurf->Visible = false;
			// 
			// pictureBoxVeggie
			// 
			this->pictureBoxVeggie->ImageLocation = L"vegetarian.jpg";
			this->pictureBoxVeggie->Location = System::Drawing::Point(12, 172);
			this->pictureBoxVeggie->Name = L"pictureBoxVeggie";
			this->pictureBoxVeggie->Size = System::Drawing::Size(168, 262);
			this->pictureBoxVeggie->TabIndex = 10;
			this->pictureBoxVeggie->TabStop = false;
			this->pictureBoxVeggie->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->ClientSize = System::Drawing::Size(797, 531);
			this->Controls->Add(this->pictureBoxVeggie);
			this->Controls->Add(this->pictureBoxSurf);
			this->Controls->Add(this->labelExit);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonQuirk2);
			this->Controls->Add(this->buttonQuirk1);
			this->Controls->Add(this->labelDate);
			this->Controls->Add(this->labelWelcome);
			this->Name = L"Form1";
			this->Text = L"Travis\' Quirky Program";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxSurf))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxVeggie))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
/**************************************************************
***************************************************************
***                                                			***
***    EVENT-DRIVEN FUNCTION DECLARATIONS AND DEFINITIONS   ***
***                                                			***
***************************************************************
**************************************************************/
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				
			 }

			 //Displays new text in labelDate
			 //makes pictureBoxSurf visible
			 //makes pictureBoxVeggie invisible
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 
				 labelDate->Text ="Travis' Quirk # 2 \nMy friends and I used to wake up \naround 5 in the morning to go \nsurfing. \nSometimes the water was so cold \nwe wouldn't be able to open \nthe car door because \nbecause we were shaking so much";
				 pictureBoxSurf->Visible = true;
				 pictureBoxVeggie->Visible = false;
				 
			 }
			 //Displays new text in labelDate
			 //makes pictureBoxSurf invisible
			 //makes pictureBoxVeggie visible
	private: System::Void buttonQuirk1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 labelDate->Text ="Travis' Quirk #1\nI am a vegitarian \nand have been one for 3 years now.\nI occasionally eat sushi \nthough because i find it delicious ";
			 pictureBoxVeggie->Visible = true;
			 pictureBoxSurf->Visible = false;
		 }
			 //Displays messageBox with ID info and Credits
			 //makes pictureBoxSurf invisible
			 //makes pictureBoxVeggie invisible
			 //makes labelDate invisible
	private: System::Void buttonExit_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
				
				 MessageBox::Show ("Thanks for stopping by and \nusing Travis' quirky GUI program");
				 MessageBox::Show ("ID Info\nTravis Kopp \nTA # 2.1Q \nGUI Quirky  \nCIS 192-C++ \nT-TH:9:00-12:00 \nProfessor Forman \nTotal Hours:3 \nDegree of Difficulty:2 \nDate Submitted:11/10/09\n\nCredits\nI'd like to thank Genesis and Leyssa \nfor helping me. I helped Genesis.\n\nhttp://dcperry.com/lisa_the_vegetarian.png \nhttp://www.20days.co.uk/2008events/lanzarote-surfing.jpg" );
				 labelWelcome->Visible = false;
				 labelDate->Visible=false;
				 pictureBoxVeggie->Visible = false;
				 pictureBoxSurf->Visible = false;

		 }
private: System::Void labelDate_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

/**************************************************************
***************************************************************
***                                                			***
***END OF EVENT-DRIVEN FUNCTION DECLARATIONS AND DEFINITIONS***
***                                                			***
***************************************************************
**************************************************************/
