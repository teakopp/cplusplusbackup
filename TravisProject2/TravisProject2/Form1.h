#pragma once


namespace TravisProject2 {

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
	private: System::Windows::Forms::Label^  labelWelcome;
	private: System::Windows::Forms::Label^  labelDate;
	private: System::Windows::Forms::Timer^  timerDate;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  buttonInstructions;
	private: System::Windows::Forms::Button^  buttonLogin;
	private: System::Windows::Forms::Label^  labelLogin;
	private: System::Windows::Forms::Button^  buttonExit;
	private: System::Windows::Forms::TextBox^  textBoxLogIn;

	private: System::Windows::Forms::Button^  buttonPlay;


	private: System::Windows::Forms::PictureBox^  pictureBoxCardDisplay1;
	private: System::Windows::Forms::Button^  buttonDeal;




	private: System::ComponentModel::IContainer^  components;
	protected: 


	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		/**************************************************************
***************************************************************
***                                                			***
***    INSTANCE VARIABLES									***
***                                                			***
***************************************************************
**************************************************************/
		
		static String^ stringCardName = "?";
		static String^ stringSuit = "nothing";
		static String^ userName = "nothing";
		int intCardValue,
		    randomInt,
			count5,
			count10,
			countAce,
			count0,
			column,
			row;
		static int pc1 = 0;
		static int pc2 = 0;
		static int pc3 = 0;
		static int dc1 =0;
		static int dc2 =0;
		static int dc3 =0;
		static int playerTotal = 0;
		static int dealerTotal = 0;
		static int gameNumber = 0;
		static int dealerWins =0;
		static int playerWins =0;

	private: System::Windows::Forms::PictureBox^  pictureBoxCardDisplay2;
	private: System::Windows::Forms::Button^  buttonHit;
	private: System::Windows::Forms::PictureBox^  pictureBoxCardDisplay3;
	private: System::Windows::Forms::Label^  labelCardDisplay;
	private: System::Windows::Forms::ImageList^  imageListCards;
	private: System::Windows::Forms::Label^  labelCardDisplay2;
	private: System::Windows::Forms::Label^  labelCardDisplay3;
	private: System::Windows::Forms::PictureBox^  pictureBoxCardDisplay4;
	private: System::Windows::Forms::PictureBox^  pictureBoxCardDisplay5;

	private: System::Windows::Forms::PictureBox^  pictureBoxCardDisplay6;
	private: System::Windows::Forms::Label^  labelPlayerTotal;
	private: System::Windows::Forms::Label^  labelDealerTotal;
	private: System::Windows::Forms::Label^  labelDealerCard1;
	private: System::Windows::Forms::Label^  labelDealerCard2;
	private: System::Windows::Forms::Button^  buttonStay;
	private: System::Windows::Forms::Label^  labelDealerCard3;
	private: System::Windows::Forms::Button^  buttonResults;
private: System::Windows::Forms::Button^  buttonReset;
private: System::Windows::Forms::Label^  labelTitle1;
private: System::Windows::Forms::Label^  labelTitle2;


















			 /*		static int column = 412,
				   row	  = 238;*/	
		static Random^ getRandom = gcnew Random( 4444 );
		//static Random^ getRandom = gcnew Random(  );



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
			this->timerDate = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonInstructions = (gcnew System::Windows::Forms::Button());
			this->buttonLogin = (gcnew System::Windows::Forms::Button());
			this->labelLogin = (gcnew System::Windows::Forms::Label());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->textBoxLogIn = (gcnew System::Windows::Forms::TextBox());
			this->buttonPlay = (gcnew System::Windows::Forms::Button());
			this->pictureBoxCardDisplay1 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonDeal = (gcnew System::Windows::Forms::Button());
			this->pictureBoxCardDisplay2 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonHit = (gcnew System::Windows::Forms::Button());
			this->pictureBoxCardDisplay3 = (gcnew System::Windows::Forms::PictureBox());
			this->labelCardDisplay = (gcnew System::Windows::Forms::Label());
			this->imageListCards = (gcnew System::Windows::Forms::ImageList(this->components));
			this->labelCardDisplay2 = (gcnew System::Windows::Forms::Label());
			this->labelCardDisplay3 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxCardDisplay4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxCardDisplay5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxCardDisplay6 = (gcnew System::Windows::Forms::PictureBox());
			this->labelPlayerTotal = (gcnew System::Windows::Forms::Label());
			this->labelDealerTotal = (gcnew System::Windows::Forms::Label());
			this->labelDealerCard1 = (gcnew System::Windows::Forms::Label());
			this->labelDealerCard2 = (gcnew System::Windows::Forms::Label());
			this->buttonStay = (gcnew System::Windows::Forms::Button());
			this->labelDealerCard3 = (gcnew System::Windows::Forms::Label());
			this->buttonResults = (gcnew System::Windows::Forms::Button());
			this->buttonReset = (gcnew System::Windows::Forms::Button());
			this->labelTitle1 = (gcnew System::Windows::Forms::Label());
			this->labelTitle2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxCardDisplay1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxCardDisplay2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxCardDisplay3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxCardDisplay4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxCardDisplay5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxCardDisplay6))->BeginInit();
			this->SuspendLayout();
			// 
			// labelWelcome
			// 
			this->labelWelcome->AutoSize = true;
			this->labelWelcome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelWelcome->Location = System::Drawing::Point(202, 9);
			this->labelWelcome->Name = L"labelWelcome";
			this->labelWelcome->Size = System::Drawing::Size(306, 20);
			this->labelWelcome->TabIndex = 0;
			this->labelWelcome->Text = L"Welcome To Travis\' Black Jack Parlor";
			this->labelWelcome->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// labelDate
			// 
			this->labelDate->AutoSize = true;
			this->labelDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelDate->Location = System::Drawing::Point(613, 9);
			this->labelDate->Name = L"labelDate";
			this->labelDate->Size = System::Drawing::Size(61, 13);
			this->labelDate->TabIndex = 1;
			this->labelDate->Text = L"labelDate";
			// 
			// timerDate
			// 
			this->timerDate->Enabled = true;
			this->timerDate->Tick += gcnew System::EventHandler(this, &Form1::timerDate_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 124);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// buttonInstructions
			// 
			this->buttonInstructions->Location = System::Drawing::Point(24, 557);
			this->buttonInstructions->Name = L"buttonInstructions";
			this->buttonInstructions->Size = System::Drawing::Size(75, 29);
			this->buttonInstructions->TabIndex = 3;
			this->buttonInstructions->Text = L"Instructions";
			this->buttonInstructions->UseVisualStyleBackColor = true;
			this->buttonInstructions->Click += gcnew System::EventHandler(this, &Form1::buttonInstructions_Click);
			// 
			// buttonLogin
			// 
			this->buttonLogin->Location = System::Drawing::Point(155, 557);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(75, 29);
			this->buttonLogin->TabIndex = 4;
			this->buttonLogin->Text = L"Log In";
			this->buttonLogin->UseVisualStyleBackColor = true;
			this->buttonLogin->Click += gcnew System::EventHandler(this, &Form1::buttonLogin_Click);
			// 
			// labelLogin
			// 
			this->labelLogin->AutoSize = true;
			this->labelLogin->Location = System::Drawing::Point(319, 475);
			this->labelLogin->Name = L"labelLogin";
			this->labelLogin->Size = System::Drawing::Size(37, 13);
			this->labelLogin->TabIndex = 5;
			this->labelLogin->Text = L"Log In";
			this->labelLogin->Visible = false;
			this->labelLogin->Click += gcnew System::EventHandler(this, &Form1::labelLogin_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(718, 381);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(75, 29);
			this->buttonExit->TabIndex = 6;
			this->buttonExit->Text = L"Exit";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &Form1::buttonExit_Click);
			// 
			// textBoxLogIn
			// 
			this->textBoxLogIn->Location = System::Drawing::Point(300, 501);
			this->textBoxLogIn->Name = L"textBoxLogIn";
			this->textBoxLogIn->Size = System::Drawing::Size(100, 20);
			this->textBoxLogIn->TabIndex = 7;
			this->textBoxLogIn->Visible = false;
			this->textBoxLogIn->TextChanged += gcnew System::EventHandler(this, &Form1::textBoxLogin_TextChanged);
			// 
			// buttonPlay
			// 
			this->buttonPlay->Location = System::Drawing::Point(300, 557);
			this->buttonPlay->Name = L"buttonPlay";
			this->buttonPlay->Size = System::Drawing::Size(75, 29);
			this->buttonPlay->TabIndex = 8;
			this->buttonPlay->Text = L"Play";
			this->buttonPlay->UseVisualStyleBackColor = true;
			this->buttonPlay->Visible = false;
			this->buttonPlay->Click += gcnew System::EventHandler(this, &Form1::buttonPlay_Click);
			// 
			// pictureBoxCardDisplay1
			// 
			this->pictureBoxCardDisplay1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBoxCardDisplay1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxCardDisplay1.Image")));
			this->pictureBoxCardDisplay1->Location = System::Drawing::Point(189, 307);
			this->pictureBoxCardDisplay1->Name = L"pictureBoxCardDisplay1";
			this->pictureBoxCardDisplay1->Size = System::Drawing::Size(75, 103);
			this->pictureBoxCardDisplay1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxCardDisplay1->TabIndex = 9;
			this->pictureBoxCardDisplay1->TabStop = false;
			this->pictureBoxCardDisplay1->Click += gcnew System::EventHandler(this, &Form1::pictureBox2_Click);
			// 
			// buttonDeal
			// 
			this->buttonDeal->Location = System::Drawing::Point(24, 260);
			this->buttonDeal->Name = L"buttonDeal";
			this->buttonDeal->Size = System::Drawing::Size(75, 23);
			this->buttonDeal->TabIndex = 10;
			this->buttonDeal->Text = L"Deal";
			this->buttonDeal->UseVisualStyleBackColor = true;
			this->buttonDeal->Visible = false;
			this->buttonDeal->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// pictureBoxCardDisplay2
			// 
			this->pictureBoxCardDisplay2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBoxCardDisplay2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxCardDisplay2.Image")));
			this->pictureBoxCardDisplay2->Location = System::Drawing::Point(300, 307);
			this->pictureBoxCardDisplay2->Name = L"pictureBoxCardDisplay2";
			this->pictureBoxCardDisplay2->Size = System::Drawing::Size(75, 103);
			this->pictureBoxCardDisplay2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxCardDisplay2->TabIndex = 11;
			this->pictureBoxCardDisplay2->TabStop = false;
			this->pictureBoxCardDisplay2->Click += gcnew System::EventHandler(this, &Form1::pictureBoxCardDisplay2_Click);
			// 
			// buttonHit
			// 
			this->buttonHit->Location = System::Drawing::Point(24, 307);
			this->buttonHit->Name = L"buttonHit";
			this->buttonHit->Size = System::Drawing::Size(75, 23);
			this->buttonHit->TabIndex = 12;
			this->buttonHit->Text = L"Hit";
			this->buttonHit->UseVisualStyleBackColor = true;
			this->buttonHit->Visible = false;
			this->buttonHit->Click += gcnew System::EventHandler(this, &Form1::buttonHit_Click);
			// 
			// pictureBoxCardDisplay3
			// 
			this->pictureBoxCardDisplay3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBoxCardDisplay3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxCardDisplay3.Image")));
			this->pictureBoxCardDisplay3->Location = System::Drawing::Point(411, 307);
			this->pictureBoxCardDisplay3->Name = L"pictureBoxCardDisplay3";
			this->pictureBoxCardDisplay3->Size = System::Drawing::Size(75, 103);
			this->pictureBoxCardDisplay3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxCardDisplay3->TabIndex = 13;
			this->pictureBoxCardDisplay3->TabStop = false;
			// 
			// labelCardDisplay
			// 
			this->labelCardDisplay->AutoSize = true;
			this->labelCardDisplay->Location = System::Drawing::Point(565, 307);
			this->labelCardDisplay->Name = L"labelCardDisplay";
			this->labelCardDisplay->Size = System::Drawing::Size(35, 13);
			this->labelCardDisplay->TabIndex = 14;
			this->labelCardDisplay->Text = L"label1";
			this->labelCardDisplay->Visible = false;
			// 
			// imageListCards
			// 
			this->imageListCards->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageListCards.ImageStream")));
			this->imageListCards->TransparentColor = System::Drawing::Color::Transparent;
			this->imageListCards->Images->SetKeyName(0, L"1.gif");
			this->imageListCards->Images->SetKeyName(1, L"2.gif");
			this->imageListCards->Images->SetKeyName(2, L"3.gif");
			this->imageListCards->Images->SetKeyName(3, L"4.gif");
			this->imageListCards->Images->SetKeyName(4, L"5.gif");
			this->imageListCards->Images->SetKeyName(5, L"6.gif");
			this->imageListCards->Images->SetKeyName(6, L"7.gif");
			this->imageListCards->Images->SetKeyName(7, L"8.gif");
			this->imageListCards->Images->SetKeyName(8, L"9.gif");
			this->imageListCards->Images->SetKeyName(9, L"10.gif");
			this->imageListCards->Images->SetKeyName(10, L"11.gif");
			this->imageListCards->Images->SetKeyName(11, L"12.gif");
			this->imageListCards->Images->SetKeyName(12, L"13.gif");
			this->imageListCards->Images->SetKeyName(13, L"14.gif");
			this->imageListCards->Images->SetKeyName(14, L"15.gif");
			this->imageListCards->Images->SetKeyName(15, L"16.gif");
			this->imageListCards->Images->SetKeyName(16, L"17.gif");
			this->imageListCards->Images->SetKeyName(17, L"18.gif");
			this->imageListCards->Images->SetKeyName(18, L"19.gif");
			this->imageListCards->Images->SetKeyName(19, L"20.gif");
			this->imageListCards->Images->SetKeyName(20, L"21.gif");
			this->imageListCards->Images->SetKeyName(21, L"22.gif");
			this->imageListCards->Images->SetKeyName(22, L"23.gif");
			this->imageListCards->Images->SetKeyName(23, L"24.gif");
			this->imageListCards->Images->SetKeyName(24, L"25.gif");
			this->imageListCards->Images->SetKeyName(25, L"26.gif");
			this->imageListCards->Images->SetKeyName(26, L"27.gif");
			this->imageListCards->Images->SetKeyName(27, L"28.gif");
			this->imageListCards->Images->SetKeyName(28, L"29.gif");
			this->imageListCards->Images->SetKeyName(29, L"30.gif");
			this->imageListCards->Images->SetKeyName(30, L"31.gif");
			this->imageListCards->Images->SetKeyName(31, L"32.gif");
			this->imageListCards->Images->SetKeyName(32, L"33.gif");
			this->imageListCards->Images->SetKeyName(33, L"34.gif");
			this->imageListCards->Images->SetKeyName(34, L"35.gif");
			this->imageListCards->Images->SetKeyName(35, L"36.gif");
			this->imageListCards->Images->SetKeyName(36, L"37.gif");
			this->imageListCards->Images->SetKeyName(37, L"38.gif");
			this->imageListCards->Images->SetKeyName(38, L"39.gif");
			this->imageListCards->Images->SetKeyName(39, L"40.gif");
			this->imageListCards->Images->SetKeyName(40, L"41.gif");
			this->imageListCards->Images->SetKeyName(41, L"42.gif");
			this->imageListCards->Images->SetKeyName(42, L"43.gif");
			this->imageListCards->Images->SetKeyName(43, L"44.gif");
			this->imageListCards->Images->SetKeyName(44, L"45.gif");
			this->imageListCards->Images->SetKeyName(45, L"46.gif");
			this->imageListCards->Images->SetKeyName(46, L"47.gif");
			this->imageListCards->Images->SetKeyName(47, L"48.gif");
			this->imageListCards->Images->SetKeyName(48, L"49.gif");
			this->imageListCards->Images->SetKeyName(49, L"50.gif");
			this->imageListCards->Images->SetKeyName(50, L"51.gif");
			this->imageListCards->Images->SetKeyName(51, L"52.gif");
			// 
			// labelCardDisplay2
			// 
			this->labelCardDisplay2->AutoSize = true;
			this->labelCardDisplay2->Location = System::Drawing::Point(565, 355);
			this->labelCardDisplay2->Name = L"labelCardDisplay2";
			this->labelCardDisplay2->Size = System::Drawing::Size(35, 13);
			this->labelCardDisplay2->TabIndex = 15;
			this->labelCardDisplay2->Text = L"label2";
			this->labelCardDisplay2->Visible = false;
			// 
			// labelCardDisplay3
			// 
			this->labelCardDisplay3->AutoSize = true;
			this->labelCardDisplay3->Location = System::Drawing::Point(565, 397);
			this->labelCardDisplay3->Name = L"labelCardDisplay3";
			this->labelCardDisplay3->Size = System::Drawing::Size(35, 13);
			this->labelCardDisplay3->TabIndex = 16;
			this->labelCardDisplay3->Text = L"label3";
			this->labelCardDisplay3->Visible = false;
			// 
			// pictureBoxCardDisplay4
			// 
			this->pictureBoxCardDisplay4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxCardDisplay4.Image")));
			this->pictureBoxCardDisplay4->Location = System::Drawing::Point(189, 141);
			this->pictureBoxCardDisplay4->Name = L"pictureBoxCardDisplay4";
			this->pictureBoxCardDisplay4->Size = System::Drawing::Size(75, 98);
			this->pictureBoxCardDisplay4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxCardDisplay4->TabIndex = 17;
			this->pictureBoxCardDisplay4->TabStop = false;
			// 
			// pictureBoxCardDisplay5
			// 
			this->pictureBoxCardDisplay5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxCardDisplay5.Image")));
			this->pictureBoxCardDisplay5->Location = System::Drawing::Point(300, 141);
			this->pictureBoxCardDisplay5->Name = L"pictureBoxCardDisplay5";
			this->pictureBoxCardDisplay5->Size = System::Drawing::Size(75, 97);
			this->pictureBoxCardDisplay5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxCardDisplay5->TabIndex = 18;
			this->pictureBoxCardDisplay5->TabStop = false;
			this->pictureBoxCardDisplay5->Click += gcnew System::EventHandler(this, &Form1::pictureBox3_Click);
			// 
			// pictureBoxCardDisplay6
			// 
			this->pictureBoxCardDisplay6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxCardDisplay6.Image")));
			this->pictureBoxCardDisplay6->Location = System::Drawing::Point(411, 141);
			this->pictureBoxCardDisplay6->Name = L"pictureBoxCardDisplay6";
			this->pictureBoxCardDisplay6->Size = System::Drawing::Size(75, 97);
			this->pictureBoxCardDisplay6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxCardDisplay6->TabIndex = 19;
			this->pictureBoxCardDisplay6->TabStop = false;
			// 
			// labelPlayerTotal
			// 
			this->labelPlayerTotal->AutoSize = true;
			this->labelPlayerTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelPlayerTotal->Location = System::Drawing::Point(630, 287);
			this->labelPlayerTotal->Name = L"labelPlayerTotal";
			this->labelPlayerTotal->Size = System::Drawing::Size(44, 16);
			this->labelPlayerTotal->TabIndex = 20;
			this->labelPlayerTotal->Text = L"Total";
			this->labelPlayerTotal->Visible = false;
			// 
			// labelDealerTotal
			// 
			this->labelDealerTotal->AutoSize = true;
			this->labelDealerTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelDealerTotal->Location = System::Drawing::Point(630, 106);
			this->labelDealerTotal->Name = L"labelDealerTotal";
			this->labelDealerTotal->Size = System::Drawing::Size(95, 16);
			this->labelDealerTotal->TabIndex = 21;
			this->labelDealerTotal->Text = L"Dealer Total";
			this->labelDealerTotal->Visible = false;
			// 
			// labelDealerCard1
			// 
			this->labelDealerCard1->AutoSize = true;
			this->labelDealerCard1->Location = System::Drawing::Point(565, 141);
			this->labelDealerCard1->Name = L"labelDealerCard1";
			this->labelDealerCard1->Size = System::Drawing::Size(35, 13);
			this->labelDealerCard1->TabIndex = 22;
			this->labelDealerCard1->Text = L"label1";
			this->labelDealerCard1->Visible = false;
			// 
			// labelDealerCard2
			// 
			this->labelDealerCard2->AutoSize = true;
			this->labelDealerCard2->Location = System::Drawing::Point(565, 179);
			this->labelDealerCard2->Name = L"labelDealerCard2";
			this->labelDealerCard2->Size = System::Drawing::Size(35, 13);
			this->labelDealerCard2->TabIndex = 23;
			this->labelDealerCard2->Text = L"label2";
			this->labelDealerCard2->Visible = false;
			// 
			// buttonStay
			// 
			this->buttonStay->Location = System::Drawing::Point(24, 216);
			this->buttonStay->Name = L"buttonStay";
			this->buttonStay->Size = System::Drawing::Size(75, 23);
			this->buttonStay->TabIndex = 24;
			this->buttonStay->Text = L"Stay";
			this->buttonStay->UseVisualStyleBackColor = true;
			this->buttonStay->Visible = false;
			this->buttonStay->Click += gcnew System::EventHandler(this, &Form1::buttonStay_Click);
			// 
			// labelDealerCard3
			// 
			this->labelDealerCard3->AutoSize = true;
			this->labelDealerCard3->Location = System::Drawing::Point(565, 226);
			this->labelDealerCard3->Name = L"labelDealerCard3";
			this->labelDealerCard3->Size = System::Drawing::Size(35, 13);
			this->labelDealerCard3->TabIndex = 25;
			this->labelDealerCard3->Text = L"label3";
			this->labelDealerCard3->Visible = false;
			// 
			// buttonResults
			// 
			this->buttonResults->Location = System::Drawing::Point(718, 439);
			this->buttonResults->Name = L"buttonResults";
			this->buttonResults->Size = System::Drawing::Size(75, 29);
			this->buttonResults->TabIndex = 26;
			this->buttonResults->Text = L"Results";
			this->buttonResults->UseVisualStyleBackColor = true;
			this->buttonResults->Visible = false;
			this->buttonResults->Click += gcnew System::EventHandler(this, &Form1::buttonResults_Click);
			// 
			// buttonReset
			// 
			this->buttonReset->Location = System::Drawing::Point(718, 501);
			this->buttonReset->Name = L"buttonReset";
			this->buttonReset->Size = System::Drawing::Size(75, 29);
			this->buttonReset->TabIndex = 27;
			this->buttonReset->Text = L"Play Another Game";
			this->buttonReset->UseVisualStyleBackColor = true;
			this->buttonReset->Visible = false;
			this->buttonReset->Click += gcnew System::EventHandler(this, &Form1::buttonReset_Click);
			// 
			// labelTitle1
			// 
			this->labelTitle1->AutoSize = true;
			this->labelTitle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelTitle1->Location = System::Drawing::Point(630, 81);
			this->labelTitle1->Name = L"labelTitle1";
			this->labelTitle1->Size = System::Drawing::Size(95, 16);
			this->labelTitle1->TabIndex = 28;
			this->labelTitle1->Text = L"Dealer Total";
			this->labelTitle1->Visible = false;
			// 
			// labelTitle2
			// 
			this->labelTitle2->AutoSize = true;
			this->labelTitle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelTitle2->Location = System::Drawing::Point(630, 260);
			this->labelTitle2->Name = L"labelTitle2";
			this->labelTitle2->Size = System::Drawing::Size(93, 16);
			this->labelTitle2->TabIndex = 29;
			this->labelTitle2->Text = L"Player Total";
			this->labelTitle2->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(805, 598);
			this->Controls->Add(this->labelTitle2);
			this->Controls->Add(this->labelTitle1);
			this->Controls->Add(this->buttonReset);
			this->Controls->Add(this->buttonResults);
			this->Controls->Add(this->labelDealerCard3);
			this->Controls->Add(this->buttonStay);
			this->Controls->Add(this->labelDealerCard2);
			this->Controls->Add(this->labelDealerCard1);
			this->Controls->Add(this->labelDealerTotal);
			this->Controls->Add(this->labelPlayerTotal);
			this->Controls->Add(this->pictureBoxCardDisplay6);
			this->Controls->Add(this->pictureBoxCardDisplay5);
			this->Controls->Add(this->pictureBoxCardDisplay4);
			this->Controls->Add(this->labelCardDisplay3);
			this->Controls->Add(this->labelCardDisplay2);
			this->Controls->Add(this->labelCardDisplay);
			this->Controls->Add(this->pictureBoxCardDisplay3);
			this->Controls->Add(this->buttonHit);
			this->Controls->Add(this->pictureBoxCardDisplay2);
			this->Controls->Add(this->buttonDeal);
			this->Controls->Add(this->pictureBoxCardDisplay1);
			this->Controls->Add(this->buttonPlay);
			this->Controls->Add(this->textBoxLogIn);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->labelLogin);
			this->Controls->Add(this->buttonLogin);
			this->Controls->Add(this->buttonInstructions);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->labelDate);
			this->Controls->Add(this->labelWelcome);
			this->Name = L"Form1";
			this->Text = L"Travis\' Black Jack Parlor";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxCardDisplay1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxCardDisplay2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxCardDisplay3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxCardDisplay4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxCardDisplay5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxCardDisplay6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

void blackJack()
{
	if(playerTotal == 21)
	{
		 MessageBox::Show("Congratulations on Black Jack!");
		 
		
	}
	else if(dealerTotal == 21)
	{	
		MessageBox::Show("The Dealer has Black Jack!");
		
	
	}
}

void cardValues()
{
	randomInt  = getRandom->Next(51);

			switch ( randomInt )
			 {
				case 0:
				 intCardValue = 2;
				 stringCardName = "Two";
				 stringSuit = "Diamonds";
				 break;
				case 1:
				 intCardValue = 2;
				 stringCardName = "Two";
				 stringSuit = "Clubs";
				 break;
				case 2:
				 intCardValue = 2;
				 stringCardName = "Two";
				 stringSuit = "Hearts";
				 break;
				case 3:
				 intCardValue = 2;
				 stringCardName = "Two";
				 stringSuit = "Spades";
				 break;
				case 4:
				 intCardValue = 3;
				 stringCardName = "Three";
				 stringSuit = "Diamonds";
				 break;
				case 5:
				 intCardValue = 3;
				 stringCardName = "Three";
				 stringSuit = "Clubs";
				 break;
				case 6:
				 intCardValue = 3;
				 stringCardName = "Three";
				 stringSuit = "Hearts";
				 break;
				case 7:
				 intCardValue = 3;
				 stringCardName = "Three";
				 stringSuit = "Spades";
				 break;
				case 8:
				 intCardValue = 4;
				 stringCardName = "Four";
				 stringSuit = "Diamonds";
				 break;
				case 9:
				 intCardValue = 4;
				 stringCardName = "Four";
				 stringSuit = "Clubs";
				 break;
				case 10:
				 intCardValue = 4;
				 stringCardName = "Four";
				 stringSuit = "Hearts";		
				 break;
				case 11:
				 intCardValue = 4;
				 stringCardName = "Four";
				 stringSuit = "Spades";
				 break;
				case 12:
				 intCardValue = 5;
				 stringCardName = "Five";
				 stringSuit = "Diamonds";
				 break;
				case 13:
				 intCardValue = 5;
				 stringCardName = "Five";
				 stringSuit = "Clubs";
				 break;
				case 14:
				 intCardValue = 5;
				 stringCardName = "Five";
				 stringSuit = "Hearts";
				  break;
				case 15:
				 intCardValue =5;
				 stringCardName = "Five";
				 stringSuit = "Spades";
				 break;
			    case 16:
				 intCardValue =6;
				 stringCardName = "Six";
				 stringSuit = "Diamonds";
				 break;
				case 17:
				 intCardValue =6;
				 stringCardName = "Six";
				 stringSuit = "Clubs";
				 break;
				case 18:
				 intCardValue =6;
				 stringCardName = "Six";
				 stringSuit = "Hearts";
				 break;
				case 19:
				 intCardValue =6;
				 stringCardName = "Six";
				 stringSuit = "Spades";
				 break;
			    case 20:
				 intCardValue =7;
				 stringCardName = "Seven";
				 stringSuit = "Diamonds";
				 break;
				case 21:
				 intCardValue =7;
				 stringCardName = "Seven";
				 stringSuit = "Clubs";
				 break;
			    case 22:
				 intCardValue =7;
				 stringCardName = "Seven";
				 stringSuit = "Hearts";
				 break;
			    case 23:
				 intCardValue =7;
				 stringCardName = "Seven";
				 stringSuit = "Spades";
				 break;
				case 24:
				 intCardValue =8;
				 stringCardName = "Eight";
				 stringSuit = "Diamonds";
				 break;
				case 25:
				 intCardValue =8;
				 stringCardName = "Eight";
				 stringSuit = "Clubs";
				 break;
				case 26:
				 intCardValue =8;
				 stringCardName = "Eight";
				 stringSuit = "Hearts";
				 break;
			    case 27:
				 intCardValue =8;
				 stringCardName = "Eight";
				 stringSuit = "Spades";
				 break;
			    case 28:
				 intCardValue =9;
				 stringCardName = "Nine";
				 stringSuit = "Diamonds";
				 break;
			    case 29:
				 intCardValue =9;
				 stringCardName = "Nine";
				 stringSuit = "Clubs";
				 break;
				case 30:
				 intCardValue =9;
				 stringCardName = "Nine";
				 stringSuit = "Hearts";
				 break;
				case 31:
				 intCardValue =9;
				 stringCardName = "Nine";
				 stringSuit = "Spades";
				 break;
				case 32:
				 intCardValue =10;
				 stringCardName = "Ten";
				 stringSuit = "Diamonds";
				 break;
				case 33:
				 intCardValue =10;
				 stringCardName = "Ten";
				 stringSuit = "Clubs";
				 break;
				case 34:
				 intCardValue =10;
				 stringCardName = "Ten";
				 stringSuit = "Hearts";
				 break;
				case 35:
				 intCardValue =10;
				 stringCardName = "Ten";
				 stringSuit = "Spades";
				 break;
				case 36:
				 intCardValue =10;
				 stringCardName = "Jack";
				 stringSuit = "Diamonds";
				 break;
			    case 37:
				 intCardValue =10;
				 stringCardName = "Jack";
				 stringSuit = "Clubs";
				 break;
				case 38:
				 intCardValue =10;
				 stringCardName = "Jack";
				 stringSuit = "Hearts";
				 break;
				case 39:
				 intCardValue =10;
				 stringCardName = "Jack";
				 stringSuit = "Spades";
				 break;
			   case 40:
				 intCardValue =10;
				 stringCardName = "Queen";
				 stringSuit = "Diamonds";
				 break;
				case 41:
				 intCardValue =10;
				 stringCardName = "Queen";
				 stringSuit = "Clubs";
				 break;
				case 42:
				 intCardValue =10;
				 stringCardName = "Queen";
				 stringSuit = "Hearts";
				 break;
			    case 43:
				 intCardValue =10;
				 stringCardName = "Queen";
				 stringSuit = "Spades";
				 break;
			    case 44:
				 intCardValue =10;
				 stringCardName = "King";
				 stringSuit = "Diamonds";
				 break;
				case 45:
				 intCardValue =10;
				 stringCardName = "King";
				 stringSuit = "Clubs";
				 break;
				case 46:
				 intCardValue =10;
				 stringCardName = "King";
				 stringSuit = "Hearts";
				 break;
				case 47:
				 intCardValue =10;
				 stringCardName = "King";
				 stringSuit = "Spades";
				 break;
			    case 48:
				 intCardValue =11;
				 stringCardName = "Ace";
				 stringSuit = "Diamonds";
				 break;
				case 49:
				 intCardValue =11;
				 stringCardName = "Ace";
				 stringSuit = "Clubs";
				 break;
			    case 50:
				 intCardValue =11;
				 stringCardName = "Ace";
				 stringSuit = "Hearts";
				 break;
			    case 51:
				 intCardValue =11;
				 stringCardName = "Ace";
				 stringSuit = "Spades";
				 break;
			 }
	
}


	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {

			 }
	private: System::Void timerDate_Tick(System::Object^  sender, System::EventArgs^  e) 
			 {
				 labelDate->Text ="Today's current date and time:\n" +
					 DateTime::Now.ToString();
			 }
	private: System::Void buttonInstructions_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				  MessageBox::Show ("Click on Log In Button \nType in first and last name \nClick play button"+
					  "\nClick deal button to be dealt cards \nClick on Stay to keep current cards"+
					  "\nClick Hit to get an additional card");
			 }
private: System::Void labelLogin_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
		 }
private: System::Void buttonLogin_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 labelLogin->Visible = true;
			  textBoxLogIn->Visible = true;
			  buttonPlay->Visible = true;
			  buttonLogin->Visible = false;
		 }
private: System::Void buttonExit_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			  MessageBox::Show ("Thanks for stopping by and \nusing Travis' quirky GUI program");
			  MessageBox::Show ("ID Info\nTravis Kopp \nTA # 2.1Q \nGUI Quirky  \nCIS 192-C++ \nT-TH:9:00-12:00 \nProfessor Forman \nTotal Hours:3 \nDegree of Difficulty:2 \nDate Submitted:11/10/09\n\nCredits\nI'd like to thank Genesis and Leyssa \nfor helping me. I helped Genesis.\n\nhttp://dcperry.com/lisa_the_vegetarian.png \nhttp://www.20days.co.uk/2008events/lanzarote-surfing.jpg" );
			  Close();
		 }
private: System::Void buttonPlay_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 int spaceIndex;
              
			  userName = textBoxLogIn->Text->Trim();
			  spaceIndex = userName->IndexOf(" ");
			  if (spaceIndex <= 1)
			  MessageBox::Show("Please Enter First And Last Name");
			  else
			 {
			 MessageBox::Show(String::Concat("Thanks for logging in, ", userName));
			 labelLogin->Visible = false;
			 buttonLogin->Visible = false;
			 textBoxLogIn->Visible = false;
			 buttonPlay->Visible = false;
			 buttonDeal->Visible = true;
			 labelCardDisplay3 ->Visible = false;
			 pictureBoxCardDisplay3 ->Visible = false;
			 pictureBoxCardDisplay6 ->Visible = false;
			 buttonResults->Visible=true;
			 buttonReset->Visible=true;
			 labelPlayerTotal->Visible=true;
			 labelDealerTotal->Visible=true;
			 labelTitle1->Visible=true;
			 labelTitle2->Visible=true;

			 }
			
			
			 



		 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			
			
			
			
			labelCardDisplay2 ->Visible = true;
			cardValues();
			labelCardDisplay->Visible = true;
			pictureBoxCardDisplay1->Image = imageListCards->Images[randomInt];
			labelCardDisplay->Text = intCardValue.ToString() + " -- " + stringCardName + " of " + stringSuit;
			pc1 = intCardValue;
			pictureBoxCardDisplay3 ->Visible = false;
			buttonDeal->Visible = false;
			labelDealerCard1->Visible =true;
			labelDealerCard2->Visible =true;
			labelDealerCard3->Visible =false;
			gameNumber= gameNumber + 1;
			


			 randomInt  = getRandom->Next(51);

			 cardValues();
			 pictureBoxCardDisplay2->Image = imageListCards->Images[randomInt];
			 pc2 = intCardValue;
			 
			
			 labelCardDisplay2->Text = intCardValue.ToString() + " -- " + stringCardName + " of " + stringSuit;
			 labelCardDisplay3 ->Visible = false;
			 buttonHit->Visible = true;

			 cardValues();
			 pictureBoxCardDisplay4->Image = imageListCards->Images[randomInt];
			 labelDealerCard1->Text = intCardValue.ToString() + " -- " + stringCardName + " of " + stringSuit;
			 dc1 = intCardValue;

			 cardValues();
			 pictureBoxCardDisplay5->Image = imageListCards->Images[randomInt];
			  labelDealerCard2->Text = intCardValue.ToString() + " -- " + stringCardName + " of " + stringSuit;
			 dc2 = intCardValue;

			 dealerTotal = dc1 + dc2;
			 labelDealerTotal->Text = dealerTotal.ToString();
			 playerTotal = pc1 + pc2;
			 labelPlayerTotal->Text = playerTotal.ToString();
			 pictureBoxCardDisplay6 ->Visible = false;

			 buttonHit->Visible = true;
			 buttonStay->Visible = true;
			 blackJack();


			 
			 



			
			
			
			 
		 }


private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void buttonHit_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			cardValues();
			pictureBoxCardDisplay3->Image = imageListCards->Images[randomInt];
			labelCardDisplay3->Text = intCardValue.ToString() + " -- " + stringCardName + " of " + stringSuit;
			pictureBoxCardDisplay3 ->Visible = true;
			labelCardDisplay3 ->Visible = true;
			buttonHit->Visible = false;
			buttonStay->Visible = false;
			buttonDeal->Visible = true;
			pc3 = intCardValue;
			playerTotal = playerTotal + pc3;
			labelPlayerTotal->Text = playerTotal.ToString();
			blackJack();

			if (dealerTotal < 16)
			 {
			    cardValues();
				pictureBoxCardDisplay6->Image = imageListCards->Images[randomInt];
				dc3=intCardValue;
				dealerTotal = dealerTotal + dc3;
				labelDealerTotal->Text = dealerTotal.ToString();
				pictureBoxCardDisplay6 ->Visible = true;
				labelDealerCard3->Text = intCardValue.ToString() + " -- " + stringCardName + " of " + stringSuit;
				labelDealerCard3->Visible =true;

			 }

			  if(dealerTotal >= playerTotal)
			 {
				 if(dealerTotal < 22)
				 {
				 MessageBox::Show(String::Concat("The Dealer has won with " + dealerTotal.ToString()));
				 dealerWins = dealerWins +1;
				 }
			  }
			  if(playerTotal > dealerTotal)
			 {	
				 if(playerTotal < 22)
				 {
					MessageBox::Show(String::Concat("You have defeated the Dealer with " + playerTotal.ToString()));
					playerWins = playerWins +1;
				 }
			  }
			  if(playerTotal > 21)
			  {
				  MessageBox::Show(String::Concat("The Dealer has won with " + dealerTotal.ToString()));
				  dealerWins = dealerWins +1;
			  }
			  if(dealerTotal > 21)
				 {
					MessageBox::Show(String::Concat("You have defeated the Dealer with " + playerTotal.ToString()));
					playerWins = playerWins +1;
					
				 }




		 }
private: System::Void pictureBoxCardDisplay2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		 }
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void buttonStay_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 buttonHit->Visible = false;
			 buttonStay->Visible = false;
			 buttonDeal->Visible = true;

			 if (dealerTotal < 16)
			 {
			    cardValues();
				pictureBoxCardDisplay6->Image = imageListCards->Images[randomInt];
				dc3=intCardValue;
				dealerTotal = dealerTotal + dc3;
				labelDealerTotal->Text = dealerTotal.ToString();
				pictureBoxCardDisplay6 ->Visible = true;
				labelDealerCard3->Visible =true;

			 }


			  if(dealerTotal >= playerTotal)
			 {
				 if(dealerTotal < 22)
				 {
				 MessageBox::Show(String::Concat("The Dealer has won with " + dealerTotal.ToString()));
				 dealerWins = dealerWins +1;
				 }
			  }
		 
			  if(playerTotal > dealerTotal)
			 {	
				 if(playerTotal < 22)
				 {
					MessageBox::Show(String::Concat("You have defeated the Dealer with " + playerTotal.ToString()));
					playerWins = playerWins +1;
					
				 }
			  }
			  if(playerTotal > 21)
			  {
				  MessageBox::Show(String::Concat("The Dealer has won with " + dealerTotal.ToString()));
				  dealerWins = dealerWins +1;
			  }
			  if(dealerTotal > 21)
				{
					MessageBox::Show(String::Concat("You have defeated the Dealer with " + playerTotal.ToString()));
					playerWins = playerWins +1;
					
			    }

		 }



private: System::Void buttonResults_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(playerWins > dealerWins)
			 {
				MessageBox::Show(String::Concat("Good Job " + userName + " in your " + gameNumber.ToString()
					+ " game(s) you have won " + playerWins.ToString() + " while the dealer has only won " + dealerWins.ToString() + " games"));
					
			 }
			 else
			 {
				MessageBox::Show(String::Concat("Thanks for being such a good sport, " + userName + " in your " + gameNumber.ToString()
					+ " game(s) you have won " + playerWins.ToString() + " while the dealer has won " + dealerWins.ToString() + " game(s)"));
			 }
		 }
private: System::Void textBoxLogin_TextChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
		 }
private: System::Void buttonReset_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 labelLogin->Visible = false;
			 buttonLogin->Visible = false;
			 textBoxLogIn->Visible = false;
			 buttonPlay->Visible = false;
			 buttonPlay->Visible = false;
			 buttonDeal->Visible = true;
			 labelCardDisplay3 ->Visible = false;
			 pictureBoxCardDisplay3 ->Visible = false;
			 pictureBoxCardDisplay6 ->Visible = false;
			 playerTotal = 0;
			 dealerTotal = 0;
		     gameNumber = 0;
			 dealerWins =0;
		     playerWins =0;
		 }
};
}

