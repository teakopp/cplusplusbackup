/**************************************************************************************************************************
***************************************************************************************************************************
***************************************************************************************************************************
***																														***
***										ID INFORMATION																	***
***																														***
*** Programmers							:												Travis Kopp						***
*** Assignment #						:											    TA #2.2							***
*** Assignment Name						:												Black Jack Preliminaries		***
*** Course # and Title					:												CIS 192 - C++					***
*** Class Meeting Time					:												MW 9:35 - 12:35					***
*** Instructor							:												Professor Forman				***
*** Hours								:												3							    ***
*** Difficulty							:												4								***
*** Completion Date						:											    11/16/09					    ***
*** Project								:												Black Jack Preliminariesk 		***
***************************************************************************************************************************
***************************************************************************************************************************
																														
																		
***************************************************************************************************************************
***************************************************************************************************************************
***																														***
***										Credits																			***
***																														***
***						I'd like to thank Leyssa and Genisis for all of their help										***
***																														***
***																														***
***************************************************************************************************************************
***************************************************************************************************************************
**************************************************************************************************************************/










#pragma once


namespace TravisBlackJackPreliminaries {

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
	protected: 

	private: System::Windows::Forms::Label^  labelDate;
	private: System::Windows::Forms::Button^  buttonDate;
	private: System::Windows::Forms::Label^  labelInstructions;
	private: System::Windows::Forms::PictureBox^  pictureBoxJack;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBoxAce;



	private: System::Windows::Forms::Label^  labelFirstCardName;
	private: System::Windows::Forms::Label^  labelNextCardName;
	private: System::Windows::Forms::Label^  labelNextCardValue;
	private: System::Windows::Forms::Label^  labelFirstCardValue;
	private: System::Windows::Forms::Label^  labelValue;
	private: System::Windows::Forms::Label^  labelHitOrStay;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  pictureAce2;
	private: System::Windows::Forms::PictureBox^  pictureBox62;
	private: System::Windows::Forms::PictureBox^  pictureBoxJack2;
	private: System::Windows::Forms::Label^  labelTotal;
	private: System::Windows::Forms::Button^  buttonReset;
	private: System::Windows::Forms::Button^  buttonExit;
	private: System::Windows::Forms::PictureBox^  pictureBoxGraphic;
	private: System::Windows::Forms::ToolTip^  toolTipDate;





	private: System::ComponentModel::IContainer^  components;





	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

	static bool firstCardSelected = false;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->labelWelcome = (gcnew System::Windows::Forms::Label());
			this->labelDate = (gcnew System::Windows::Forms::Label());
			this->buttonDate = (gcnew System::Windows::Forms::Button());
			this->labelInstructions = (gcnew System::Windows::Forms::Label());
			this->pictureBoxJack = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxAce = (gcnew System::Windows::Forms::PictureBox());
			this->labelFirstCardName = (gcnew System::Windows::Forms::Label());
			this->labelNextCardName = (gcnew System::Windows::Forms::Label());
			this->labelNextCardValue = (gcnew System::Windows::Forms::Label());
			this->labelFirstCardValue = (gcnew System::Windows::Forms::Label());
			this->labelValue = (gcnew System::Windows::Forms::Label());
			this->labelHitOrStay = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureAce2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxJack2 = (gcnew System::Windows::Forms::PictureBox());
			this->labelTotal = (gcnew System::Windows::Forms::Label());
			this->buttonReset = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->pictureBoxGraphic = (gcnew System::Windows::Forms::PictureBox());
			this->toolTipDate = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxJack))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxAce))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureAce2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxJack2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxGraphic))->BeginInit();
			this->SuspendLayout();
			// 
			// labelWelcome
			// 
			this->labelWelcome->AutoSize = true;
			this->labelWelcome->BackColor = System::Drawing::Color::Black;
			this->labelWelcome->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelWelcome->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelWelcome->ForeColor = System::Drawing::Color::Red;
			this->labelWelcome->Location = System::Drawing::Point(122, 25);
			this->labelWelcome->Name = L"labelWelcome";
			this->labelWelcome->Size = System::Drawing::Size(513, 32);
			this->labelWelcome->TabIndex = 0;
			this->labelWelcome->Text = L"Welcome to Travis\' Black Jack Room!!!";
			this->labelWelcome->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// labelDate
			// 
			this->labelDate->AutoSize = true;
			this->labelDate->BackColor = System::Drawing::Color::Black;
			this->labelDate->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelDate->ForeColor = System::Drawing::Color::Red;
			this->labelDate->Location = System::Drawing::Point(641, 9);
			this->labelDate->Name = L"labelDate";
			this->labelDate->Size = System::Drawing::Size(42, 17);
			this->labelDate->TabIndex = 1;
			this->labelDate->Text = L"Date";
			this->labelDate->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// buttonDate
			// 
			this->buttonDate->BackColor = System::Drawing::SystemColors::ControlText;
			this->buttonDate->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->buttonDate->ForeColor = System::Drawing::Color::Red;
			this->buttonDate->Location = System::Drawing::Point(644, 58);
			this->buttonDate->Name = L"buttonDate";
			this->buttonDate->Size = System::Drawing::Size(156, 53);
			this->buttonDate->TabIndex = 2;
			this->buttonDate->Text = L"Update Time And Date";
			this->toolTipDate->SetToolTip(this->buttonDate, L"Click To Update Date and Time");
			this->buttonDate->UseVisualStyleBackColor = false;
			this->buttonDate->Click += gcnew System::EventHandler(this, &Form1::buttonDate_Click);
			// 
			// labelInstructions
			// 
			this->labelInstructions->AutoSize = true;
			this->labelInstructions->BackColor = System::Drawing::Color::Black;
			this->labelInstructions->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelInstructions->ForeColor = System::Drawing::Color::Red;
			this->labelInstructions->Location = System::Drawing::Point(184, 73);
			this->labelInstructions->Name = L"labelInstructions";
			this->labelInstructions->Size = System::Drawing::Size(332, 20);
			this->labelInstructions->TabIndex = 3;
			this->labelInstructions->Text = L"Click On One Card From Each Column  ";
			this->labelInstructions->Click += gcnew System::EventHandler(this, &Form1::labelInstructions_Click);
			// 
			// pictureBoxJack
			// 
			this->pictureBoxJack->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBoxJack->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxJack.Image")));
			this->pictureBoxJack->Location = System::Drawing::Point(95, 331);
			this->pictureBoxJack->Name = L"pictureBoxJack";
			this->pictureBoxJack->Size = System::Drawing::Size(68, 100);
			this->pictureBoxJack->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxJack->TabIndex = 4;
			this->pictureBoxJack->TabStop = false;
			this->toolTipDate->SetToolTip(this->pictureBoxJack, L"Click Me!");
			this->pictureBoxJack->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(198, 331);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(74, 100);
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			this->toolTipDate->SetToolTip(this->pictureBox6, L"Click Me!");
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Form1::pictureBox2_Click);
			// 
			// pictureBoxAce
			// 
			this->pictureBoxAce->BackColor = System::Drawing::Color::White;
			this->pictureBoxAce->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBoxAce->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxAce.Image")));
			this->pictureBoxAce->Location = System::Drawing::Point(295, 331);
			this->pictureBoxAce->Name = L"pictureBoxAce";
			this->pictureBoxAce->Size = System::Drawing::Size(74, 100);
			this->pictureBoxAce->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxAce->TabIndex = 6;
			this->pictureBoxAce->TabStop = false;
			this->toolTipDate->SetToolTip(this->pictureBoxAce, L"Click Me!");
			this->pictureBoxAce->Click += gcnew System::EventHandler(this, &Form1::pictureBox3_Click);
			// 
			// labelFirstCardName
			// 
			this->labelFirstCardName->AutoSize = true;
			this->labelFirstCardName->BackColor = System::Drawing::Color::Black;
			this->labelFirstCardName->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelFirstCardName->ForeColor = System::Drawing::Color::Red;
			this->labelFirstCardName->Location = System::Drawing::Point(420, 220);
			this->labelFirstCardName->Name = L"labelFirstCardName";
			this->labelFirstCardName->Size = System::Drawing::Size(148, 20);
			this->labelFirstCardName->TabIndex = 7;
			this->labelFirstCardName->Text = L"First Card Name";
			// 
			// labelNextCardName
			// 
			this->labelNextCardName->AutoSize = true;
			this->labelNextCardName->BackColor = System::Drawing::Color::Black;
			this->labelNextCardName->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelNextCardName->ForeColor = System::Drawing::Color::Red;
			this->labelNextCardName->Location = System::Drawing::Point(420, 280);
			this->labelNextCardName->Name = L"labelNextCardName";
			this->labelNextCardName->Size = System::Drawing::Size(145, 20);
			this->labelNextCardName->TabIndex = 8;
			this->labelNextCardName->Text = L"Next Card Name";
			// 
			// labelNextCardValue
			// 
			this->labelNextCardValue->AutoSize = true;
			this->labelNextCardValue->BackColor = System::Drawing::Color::Red;
			this->labelNextCardValue->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelNextCardValue->ForeColor = System::Drawing::Color::Black;
			this->labelNextCardValue->Location = System::Drawing::Point(628, 280);
			this->labelNextCardValue->Name = L"labelNextCardValue";
			this->labelNextCardValue->Size = System::Drawing::Size(161, 20);
			this->labelNextCardValue->TabIndex = 9;
			this->labelNextCardValue->Text = L"Click On a Card!!!";
			this->labelNextCardValue->Click += gcnew System::EventHandler(this, &Form1::labelNextCardValue_Click);
			// 
			// labelFirstCardValue
			// 
			this->labelFirstCardValue->AutoSize = true;
			this->labelFirstCardValue->BackColor = System::Drawing::Color::Red;
			this->labelFirstCardValue->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelFirstCardValue->ForeColor = System::Drawing::Color::Black;
			this->labelFirstCardValue->Location = System::Drawing::Point(628, 220);
			this->labelFirstCardValue->Name = L"labelFirstCardValue";
			this->labelFirstCardValue->Size = System::Drawing::Size(161, 20);
			this->labelFirstCardValue->TabIndex = 10;
			this->labelFirstCardValue->Text = L"Click On a Card!!!";
			// 
			// labelValue
			// 
			this->labelValue->AutoSize = true;
			this->labelValue->BackColor = System::Drawing::Color::Black;
			this->labelValue->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelValue->ForeColor = System::Drawing::Color::Red;
			this->labelValue->Location = System::Drawing::Point(615, 190);
			this->labelValue->Name = L"labelValue";
			this->labelValue->Size = System::Drawing::Size(68, 23);
			this->labelValue->TabIndex = 11;
			this->labelValue->Text = L"Value";
			// 
			// labelHitOrStay
			// 
			this->labelHitOrStay->AutoSize = true;
			this->labelHitOrStay->BackColor = System::Drawing::Color::Black;
			this->labelHitOrStay->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelHitOrStay->ForeColor = System::Drawing::Color::Red;
			this->labelHitOrStay->Location = System::Drawing::Point(420, 367);
			this->labelHitOrStay->Name = L"labelHitOrStay";
			this->labelHitOrStay->Size = System::Drawing::Size(107, 20);
			this->labelHitOrStay->TabIndex = 12;
			this->labelHitOrStay->Text = L"Hit Or Stay";
			this->labelHitOrStay->Click += gcnew System::EventHandler(this, &Form1::labelHitOrStay_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// pictureAce2
			// 
			this->pictureAce2->BackColor = System::Drawing::Color::White;
			this->pictureAce2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureAce2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureAce2.Image")));
			this->pictureAce2->Location = System::Drawing::Point(95, 190);
			this->pictureAce2->Name = L"pictureAce2";
			this->pictureAce2->Size = System::Drawing::Size(68, 104);
			this->pictureAce2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureAce2->TabIndex = 13;
			this->pictureAce2->TabStop = false;
			this->toolTipDate->SetToolTip(this->pictureAce2, L"Click Me!");
			this->pictureAce2->Click += gcnew System::EventHandler(this, &Form1::pictureBox4_Click);
			// 
			// pictureBox62
			// 
			this->pictureBox62->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox62->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox62.Image")));
			this->pictureBox62->Location = System::Drawing::Point(198, 190);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(74, 104);
			this->pictureBox62->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox62->TabIndex = 14;
			this->pictureBox62->TabStop = false;
			this->toolTipDate->SetToolTip(this->pictureBox62, L"Click Me!");
			this->pictureBox62->Click += gcnew System::EventHandler(this, &Form1::pictureBox62_Click);
			// 
			// pictureBoxJack2
			// 
			this->pictureBoxJack2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBoxJack2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxJack2.Image")));
			this->pictureBoxJack2->Location = System::Drawing::Point(295, 190);
			this->pictureBoxJack2->Name = L"pictureBoxJack2";
			this->pictureBoxJack2->Size = System::Drawing::Size(74, 104);
			this->pictureBoxJack2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxJack2->TabIndex = 15;
			this->pictureBoxJack2->TabStop = false;
			this->toolTipDate->SetToolTip(this->pictureBoxJack2, L"Click Me!");
			this->pictureBoxJack2->Click += gcnew System::EventHandler(this, &Form1::pictureBox2_Click_1);
			// 
			// labelTotal
			// 
			this->labelTotal->AutoSize = true;
			this->labelTotal->BackColor = System::Drawing::Color::Red;
			this->labelTotal->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelTotal->ForeColor = System::Drawing::Color::Black;
			this->labelTotal->Location = System::Drawing::Point(629, 370);
			this->labelTotal->Name = L"labelTotal";
			this->labelTotal->Size = System::Drawing::Size(59, 20);
			this->labelTotal->TabIndex = 16;
			this->labelTotal->Text = L"Total";
			this->labelTotal->Click += gcnew System::EventHandler(this, &Form1::labelTotal_Click);
			// 
			// buttonReset
			// 
			this->buttonReset->BackColor = System::Drawing::Color::Black;
			this->buttonReset->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonReset->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->buttonReset->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->buttonReset->ForeColor = System::Drawing::Color::Red;
			this->buttonReset->Location = System::Drawing::Point(423, 472);
			this->buttonReset->Name = L"buttonReset";
			this->buttonReset->Size = System::Drawing::Size(75, 47);
			this->buttonReset->TabIndex = 17;
			this->buttonReset->Text = L"Play On!!!";
			this->toolTipDate->SetToolTip(this->buttonReset, L"Click To Play Again");
			this->buttonReset->UseVisualStyleBackColor = false;
			this->buttonReset->Click += gcnew System::EventHandler(this, &Form1::buttonReset_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::Color::Black;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->buttonExit->ForeColor = System::Drawing::Color::Red;
			this->buttonExit->Location = System::Drawing::Point(619, 472);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(75, 48);
			this->buttonExit->TabIndex = 18;
			this->buttonExit->Text = L"Exit";
			this->toolTipDate->SetToolTip(this->buttonExit, L"Click To Exit");
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &Form1::buttonExit_Click);
			// 
			// pictureBoxGraphic
			// 
			this->pictureBoxGraphic->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxGraphic.Image")));
			this->pictureBoxGraphic->Location = System::Drawing::Point(12, 25);
			this->pictureBoxGraphic->Name = L"pictureBoxGraphic";
			this->pictureBoxGraphic->Size = System::Drawing::Size(68, 104);
			this->pictureBoxGraphic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxGraphic->TabIndex = 19;
			this->pictureBoxGraphic->TabStop = false;
			this->pictureBoxGraphic->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click_1);
			// 
			// toolTipDate
			// 
			this->toolTipDate->BackColor = System::Drawing::Color::Red;
			this->toolTipDate->ForeColor = System::Drawing::Color::Black;
			this->toolTipDate->IsBalloon = true;
			this->toolTipDate->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			this->toolTipDate->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &Form1::toolTipDate_Popup);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(814, 597);
			this->Controls->Add(this->pictureBoxGraphic);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->buttonReset);
			this->Controls->Add(this->labelTotal);
			this->Controls->Add(this->pictureBoxJack2);
			this->Controls->Add(this->pictureBox62);
			this->Controls->Add(this->pictureAce2);
			this->Controls->Add(this->labelHitOrStay);
			this->Controls->Add(this->labelValue);
			this->Controls->Add(this->labelFirstCardValue);
			this->Controls->Add(this->labelNextCardValue);
			this->Controls->Add(this->labelNextCardName);
			this->Controls->Add(this->labelFirstCardName);
			this->Controls->Add(this->pictureBoxAce);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBoxJack);
			this->Controls->Add(this->labelInstructions);
			this->Controls->Add(this->buttonDate);
			this->Controls->Add(this->labelDate);
			this->Controls->Add(this->labelWelcome);
			this->Name = L"Form1";
			this->Text = L"Travis\' Black Jack Preliminaries";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxJack))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxAce))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureAce2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxJack2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxGraphic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


	static int  counter			  = 0;
#pragma endregion

void cardSelection(String^ stringCardName, int intCardValue)
	 {
		if ( firstCardSelected == false)
		{
			labelFirstCardName->Text  = stringCardName;
			labelFirstCardValue->Text = intCardValue.ToString();
			firstCardSelected         = true;
		}
		else
		{
			labelNextCardName->Text   = stringCardName;
			labelNextCardValue->Text  = intCardValue.ToString();
			firstCardSelected         = false;

		 int cardSum = int::Parse( labelFirstCardValue->Text ) 
						 + int::Parse( labelNextCardValue->Text  );

			labelTotal->Text = cardSum.ToString();
 			 if ( cardSum == 21 )
			 {
				 labelHitOrStay->Text="Black Jack!!!";
			 }
			 if ( cardSum >21)
			 {
				 labelHitOrStay->Text="Sorry You've Bust";
			 }
			if (cardSum < 21)
			{
				labelHitOrStay->Text="Stay!";
			}
			if (cardSum < 15)
			{
				labelHitOrStay->Text="Hit!";
			}
		
		}
	 }

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
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				
			 }

			 //Displays Current Date and time
	private: System::Void buttonDate_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 labelDate->Text ="Today's date and time:\n" +
					 DateTime::Now.ToString();
			 }

			 //Sets Card Value to 10 and Displays card name of Jack of diamond on screen and in message box
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 cardSelection("Jack of Diamonds", 10);
			 MessageBox::Show ("Thanks For Selecting Jack of Diamonds");
		 }

		 //Sets Card Value to 6 and Displays Card name 6 of Clubs on screen and in message box
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 cardSelection("6 of Clubs", 6);
			 MessageBox::Show ("Thanks For Selecting 6 of Clubs");
		 }

		 //Sets Card Value to 11 and Displays Card name Ace of Heats on screen and in message box
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 cardSelection("Ace of Hearts", 11);
			  MessageBox::Show ("Thanks For Selecting Ace Of Hearts");
		 }
private: System::Void labelNextCardValue_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void labelHitOrStay_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		 }

		 //Animates Ace of Spades card
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
			 int column = 12,
					 row = 9;

			  pictureBoxGraphic->SetBounds( pictureBoxGraphic->Location.X , 
										  pictureBoxGraphic->Location.Y + 10, 
										  pictureBoxGraphic->Width*1.1, 
										  pictureBoxGraphic->Height*1.1);
				 if ( pictureBoxGraphic->Location.Y > 20 )
				 {
					 pictureBoxGraphic->SetBounds( pictureBoxGraphic->Location.X , 
										  pictureBoxGraphic->Location.Y + 10, 
										  pictureBoxGraphic->Width/1.1, 
										  pictureBoxGraphic->Height/1.1);
				 }
			
				

		 }

		 //Sets Card Value to 11 and Displays Card name Ace of Heats on screen and in message box
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 cardSelection("Ace of Hearts", 11);
			  MessageBox::Show ("Thanks For Selecting Ace Of Hearts");
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }

		 //Sets Card Value to 10 and Displays card name of Jack of diamond on screen and in message box
private: System::Void pictureBox2_Click_1(System::Object^  sender, System::EventArgs^  e) 
		 {
			 cardSelection("Jack of Diamonds", 10);
			 MessageBox::Show ("Thanks For Selecting Jack of Diamonds");
		 }

		 //Sets Card Value to 6 and Displays Card name 6 of Clubs on screen and in message box
private: System::Void pictureBox62_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 cardSelection("6 of Clubs", 6);
			  MessageBox::Show ("Thanks For Selecting 6 of Clubs");
		 }
private: System::Void labelTotal_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

		//Resets First Card Name, Next Card Name, First Card Value, Next Card Value, labelHitorStay
		// and LabelTotal back to Orginal messages and resets int CardSum to 0
private: System::Void buttonReset_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			int cardSum = 0;
			labelTotal->Text = cardSum.ToString();
			labelFirstCardName->Text="First Card Name";
			labelNextCardName->Text="Next Card Name";
			labelFirstCardValue->Text="First Card Value";
			labelNextCardValue->Text="Next Card Value";
			labelHitOrStay->Text="Hit Or Stay";
			labelTotal->Text="Total";
		 }

		 //Displays Farewell Message and ID Info
private: System::Void buttonExit_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 MessageBox::Show ("Thanks for stopping by and \nusing Travis' Black Jack Preliminaries program");
				 MessageBox::Show ("ID Info\nTravis Kopp \nTA # 2.2 \nBlack Jack Preliminaries  \nCIS 192-C++ \nT-TH:9:00-12:00 \nProfessor Forman \nTotal Hours:3 \nDegree of Difficulty:2 \nDate Submitted:11/15/09\n\nCredits\nI'd like to thank Genesis and Leyssa \nfor helping me. I helped Genesis and Leyssa as well.\n\nhttp://mi9.com/datawallpaper/data/12/4102/casino_wallpaper/casino-wallpaper_size_800x600.jpg" );
		 }
private: System::Void pictureBox1_Click_1(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
		 }
private: System::Void labelInstructions_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void toolTipDate_Popup(System::Object^  sender, System::Windows::Forms::PopupEventArgs^  e) {
		 }
};
}

/**************************************************************
***************************************************************
***                                                			***
***								END                         ***
***    EVENT-DRIVEN FUNCTION DECLARATIONS AND DEFINITIONS   ***
***                                                			***
***************************************************************
**************************************************************/
