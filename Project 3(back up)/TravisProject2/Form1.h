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
		static String^ userName = "Nobody";
		static String^ accountNum= "";
		static String^ password="Nice Try";
		int intCardValue,
		    randomInt;
		static int indexNumber;
		static int number1 = 0;
		static int number2= 0;
		static int number3= 0;
		static int total = 0;
		static int number;
		static int card3;
		static int times = 1;

		static int playerCard1 = 0;
		static int playerCard2 = 0;
		static int playerCard3 = 0;
		static int dealerCard1 =0;
		static int dealerCard2 =0;
		static int dealerCard3 =0;
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
private: System::Windows::Forms::Label^  labelGame;
private: System::Windows::Forms::TextBox^  textBoxPassword;

private: System::Windows::Forms::Label^  labelName;
private: System::Windows::Forms::Label^  labelPassword;

private: System::Windows::Forms::Button^  buttonSubmit;
private: System::Windows::Forms::Button^  buttonTest;
private: System::Windows::Forms::Button^  buttonSetUpDeck;
private: System::Windows::Forms::Button^  buttonDisplayDeck;
private: System::Windows::Forms::Button^  buttonShuffleDeck;
private: System::Windows::Forms::Button^  buttonDealCard;
private: System::Windows::Forms::Button^  buttonDealHand;
private: System::Windows::Forms::Button^  buttonAddCard;
private: System::Windows::Forms::Button^  buttonArrangeHand;
private: System::Windows::Forms::Button^  buttonStoreDeck;
private: System::Windows::Forms::Button^  buttonLoadDeck;
private: System::Windows::Forms::Button^  buttonReturn;
private: System::Windows::Forms::Label^  label1;
































				
		


		value class CardType 
		{
			public: 
				String^	CardName;
				String^ Suit;
				
				int		CardValue;

		};

		static array<CardType>^ deck    = gcnew array<CardType>(52);
		static array<CardType>^ shuffled    = gcnew array<CardType>(52);
		static Random^ getRandom = gcnew Random( 4444 );
		static array<CardType>^ anotherDeck    = gcnew array<CardType>(52);
		static array<int>^index = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,
			32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51};
		static array<int>^index2 = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,
			32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52};
		static array<int>^worth = {2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,7,8,8,8,8,9,9,9,9,
					10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,11,11,11,11};
		static array<int>^worth2 = {2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,7,8,8,8,8,9,9,9,9,
					10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,11,11,11,11};
private: System::Windows::Forms::Label^  labelWorth2;
private: System::Windows::Forms::Label^  labelWorth3;

private: System::Windows::Forms::Label^  labelWorth1;


		
		
		



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
			this->labelGame = (gcnew System::Windows::Forms::Label());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->labelPassword = (gcnew System::Windows::Forms::Label());
			this->buttonSubmit = (gcnew System::Windows::Forms::Button());
			this->buttonTest = (gcnew System::Windows::Forms::Button());
			this->buttonSetUpDeck = (gcnew System::Windows::Forms::Button());
			this->buttonDisplayDeck = (gcnew System::Windows::Forms::Button());
			this->buttonShuffleDeck = (gcnew System::Windows::Forms::Button());
			this->buttonDealCard = (gcnew System::Windows::Forms::Button());
			this->buttonDealHand = (gcnew System::Windows::Forms::Button());
			this->buttonAddCard = (gcnew System::Windows::Forms::Button());
			this->buttonArrangeHand = (gcnew System::Windows::Forms::Button());
			this->buttonStoreDeck = (gcnew System::Windows::Forms::Button());
			this->buttonLoadDeck = (gcnew System::Windows::Forms::Button());
			this->buttonReturn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelWorth1 = (gcnew System::Windows::Forms::Label());
			this->labelWorth2 = (gcnew System::Windows::Forms::Label());
			this->labelWorth3 = (gcnew System::Windows::Forms::Label());
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
			this->labelWelcome->BackColor = System::Drawing::Color::Transparent;
			this->labelWelcome->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelWelcome->ForeColor = System::Drawing::Color::White;
			this->labelWelcome->Location = System::Drawing::Point(151, 9);
			this->labelWelcome->Name = L"labelWelcome";
			this->labelWelcome->Size = System::Drawing::Size(438, 23);
			this->labelWelcome->TabIndex = 0;
			this->labelWelcome->Text = L"Welcome To Travis\' Black Jack Parlor";
			this->labelWelcome->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// labelDate
			// 
			this->labelDate->AutoSize = true;
			this->labelDate->BackColor = System::Drawing::Color::Transparent;
			this->labelDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelDate->ForeColor = System::Drawing::Color::White;
			this->labelDate->Location = System::Drawing::Point(613, 9);
			this->labelDate->Name = L"labelDate";
			this->labelDate->Size = System::Drawing::Size(61, 13);
			this->labelDate->TabIndex = 1;
			this->labelDate->Text = L"labelDate";
			this->labelDate->Click += gcnew System::EventHandler(this, &Form1::labelDate_Click);
			// 
			// timerDate
			// 
			this->timerDate->Enabled = true;
			this->timerDate->Tick += gcnew System::EventHandler(this, &Form1::timerDate_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 124);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// buttonInstructions
			// 
			this->buttonInstructions->BackColor = System::Drawing::Color::Black;
			this->buttonInstructions->ForeColor = System::Drawing::Color::White;
			this->buttonInstructions->Location = System::Drawing::Point(24, 557);
			this->buttonInstructions->Name = L"buttonInstructions";
			this->buttonInstructions->Size = System::Drawing::Size(75, 39);
			this->buttonInstructions->TabIndex = 3;
			this->buttonInstructions->Text = L"Instructions";
			this->buttonInstructions->UseVisualStyleBackColor = false;
			this->buttonInstructions->Click += gcnew System::EventHandler(this, &Form1::buttonInstructions_Click);
			// 
			// buttonLogin
			// 
			this->buttonLogin->BackColor = System::Drawing::Color::Black;
			this->buttonLogin->ForeColor = System::Drawing::Color::White;
			this->buttonLogin->Location = System::Drawing::Point(189, 557);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(75, 39);
			this->buttonLogin->TabIndex = 4;
			this->buttonLogin->Text = L"Log In";
			this->buttonLogin->UseVisualStyleBackColor = false;
			this->buttonLogin->Click += gcnew System::EventHandler(this, &Form1::buttonLogin_Click);
			// 
			// labelLogin
			// 
			this->labelLogin->AutoSize = true;
			this->labelLogin->BackColor = System::Drawing::Color::Transparent;
			this->labelLogin->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelLogin->ForeColor = System::Drawing::Color::White;
			this->labelLogin->Location = System::Drawing::Point(12, 413);
			this->labelLogin->Name = L"labelLogin";
			this->labelLogin->Size = System::Drawing::Size(119, 20);
			this->labelLogin->TabIndex = 5;
			this->labelLogin->Text = L"Please Log In";
			this->labelLogin->Visible = false;
			this->labelLogin->Click += gcnew System::EventHandler(this, &Form1::labelLogin_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::Color::Black;
			this->buttonExit->ForeColor = System::Drawing::Color::White;
			this->buttonExit->Location = System::Drawing::Point(727, 557);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(75, 39);
			this->buttonExit->TabIndex = 6;
			this->buttonExit->Text = L"Exit";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &Form1::buttonExit_Click);
			// 
			// textBoxLogIn
			// 
			this->textBoxLogIn->Location = System::Drawing::Point(300, 449);
			this->textBoxLogIn->Name = L"textBoxLogIn";
			this->textBoxLogIn->Size = System::Drawing::Size(100, 20);
			this->textBoxLogIn->TabIndex = 7;
			this->textBoxLogIn->Visible = false;
			this->textBoxLogIn->TextChanged += gcnew System::EventHandler(this, &Form1::textBoxLogin_TextChanged);
			// 
			// buttonPlay
			// 
			this->buttonPlay->BackColor = System::Drawing::Color::Black;
			this->buttonPlay->ForeColor = System::Drawing::Color::White;
			this->buttonPlay->Location = System::Drawing::Point(189, 444);
			this->buttonPlay->Name = L"buttonPlay";
			this->buttonPlay->Size = System::Drawing::Size(75, 29);
			this->buttonPlay->TabIndex = 8;
			this->buttonPlay->Text = L"Play";
			this->buttonPlay->UseVisualStyleBackColor = false;
			this->buttonPlay->Visible = false;
			this->buttonPlay->Click += gcnew System::EventHandler(this, &Form1::buttonPlay_Click);
			// 
			// pictureBoxCardDisplay1
			// 
			this->pictureBoxCardDisplay1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBoxCardDisplay1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxCardDisplay1.Image")));
			this->pictureBoxCardDisplay1->Location = System::Drawing::Point(155, 289);
			this->pictureBoxCardDisplay1->Name = L"pictureBoxCardDisplay1";
			this->pictureBoxCardDisplay1->Size = System::Drawing::Size(75, 103);
			this->pictureBoxCardDisplay1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxCardDisplay1->TabIndex = 9;
			this->pictureBoxCardDisplay1->TabStop = false;
			this->pictureBoxCardDisplay1->Click += gcnew System::EventHandler(this, &Form1::pictureBox2_Click);
			// 
			// buttonDeal
			// 
			this->buttonDeal->BackColor = System::Drawing::Color::Black;
			this->buttonDeal->ForeColor = System::Drawing::Color::White;
			this->buttonDeal->Location = System::Drawing::Point(24, 349);
			this->buttonDeal->Name = L"buttonDeal";
			this->buttonDeal->Size = System::Drawing::Size(75, 23);
			this->buttonDeal->TabIndex = 10;
			this->buttonDeal->Text = L"Deal";
			this->buttonDeal->UseVisualStyleBackColor = false;
			this->buttonDeal->Visible = false;
			this->buttonDeal->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// pictureBoxCardDisplay2
			// 
			this->pictureBoxCardDisplay2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBoxCardDisplay2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxCardDisplay2.Image")));
			this->pictureBoxCardDisplay2->Location = System::Drawing::Point(300, 289);
			this->pictureBoxCardDisplay2->Name = L"pictureBoxCardDisplay2";
			this->pictureBoxCardDisplay2->Size = System::Drawing::Size(75, 103);
			this->pictureBoxCardDisplay2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxCardDisplay2->TabIndex = 11;
			this->pictureBoxCardDisplay2->TabStop = false;
			this->pictureBoxCardDisplay2->Click += gcnew System::EventHandler(this, &Form1::pictureBoxCardDisplay2_Click);
			// 
			// buttonHit
			// 
			this->buttonHit->BackColor = System::Drawing::Color::Black;
			this->buttonHit->ForeColor = System::Drawing::Color::White;
			this->buttonHit->Location = System::Drawing::Point(24, 387);
			this->buttonHit->Name = L"buttonHit";
			this->buttonHit->Size = System::Drawing::Size(75, 23);
			this->buttonHit->TabIndex = 12;
			this->buttonHit->Text = L"Hit";
			this->buttonHit->UseVisualStyleBackColor = false;
			this->buttonHit->Visible = false;
			this->buttonHit->Click += gcnew System::EventHandler(this, &Form1::buttonHit_Click);
			// 
			// pictureBoxCardDisplay3
			// 
			this->pictureBoxCardDisplay3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBoxCardDisplay3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxCardDisplay3.Image")));
			this->pictureBoxCardDisplay3->Location = System::Drawing::Point(445, 289);
			this->pictureBoxCardDisplay3->Name = L"pictureBoxCardDisplay3";
			this->pictureBoxCardDisplay3->Size = System::Drawing::Size(75, 103);
			this->pictureBoxCardDisplay3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxCardDisplay3->TabIndex = 13;
			this->pictureBoxCardDisplay3->TabStop = false;
			// 
			// labelCardDisplay
			// 
			this->labelCardDisplay->AutoSize = true;
			this->labelCardDisplay->BackColor = System::Drawing::Color::Black;
			this->labelCardDisplay->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelCardDisplay->ForeColor = System::Drawing::Color::Blue;
			this->labelCardDisplay->Location = System::Drawing::Point(152, 269);
			this->labelCardDisplay->Name = L"labelCardDisplay";
			this->labelCardDisplay->Size = System::Drawing::Size(51, 17);
			this->labelCardDisplay->TabIndex = 14;
			this->labelCardDisplay->Text = L"label1";
			this->labelCardDisplay->Visible = false;
			this->labelCardDisplay->Click += gcnew System::EventHandler(this, &Form1::labelCardDisplay_Click);
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
			this->labelCardDisplay2->BackColor = System::Drawing::Color::Black;
			this->labelCardDisplay2->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelCardDisplay2->ForeColor = System::Drawing::Color::Blue;
			this->labelCardDisplay2->Location = System::Drawing::Point(297, 269);
			this->labelCardDisplay2->Name = L"labelCardDisplay2";
			this->labelCardDisplay2->Size = System::Drawing::Size(52, 17);
			this->labelCardDisplay2->TabIndex = 15;
			this->labelCardDisplay2->Text = L"label2";
			this->labelCardDisplay2->Visible = false;
			// 
			// labelCardDisplay3
			// 
			this->labelCardDisplay3->AutoSize = true;
			this->labelCardDisplay3->BackColor = System::Drawing::Color::Black;
			this->labelCardDisplay3->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelCardDisplay3->ForeColor = System::Drawing::Color::Blue;
			this->labelCardDisplay3->Location = System::Drawing::Point(442, 269);
			this->labelCardDisplay3->Name = L"labelCardDisplay3";
			this->labelCardDisplay3->Size = System::Drawing::Size(52, 17);
			this->labelCardDisplay3->TabIndex = 16;
			this->labelCardDisplay3->Text = L"label3";
			this->labelCardDisplay3->Visible = false;
			// 
			// pictureBoxCardDisplay4
			// 
			this->pictureBoxCardDisplay4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxCardDisplay4.Image")));
			this->pictureBoxCardDisplay4->Location = System::Drawing::Point(155, 132);
			this->pictureBoxCardDisplay4->Name = L"pictureBoxCardDisplay4";
			this->pictureBoxCardDisplay4->Size = System::Drawing::Size(75, 98);
			this->pictureBoxCardDisplay4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxCardDisplay4->TabIndex = 17;
			this->pictureBoxCardDisplay4->TabStop = false;
			// 
			// pictureBoxCardDisplay5
			// 
			this->pictureBoxCardDisplay5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxCardDisplay5.Image")));
			this->pictureBoxCardDisplay5->Location = System::Drawing::Point(300, 132);
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
			this->pictureBoxCardDisplay6->Location = System::Drawing::Point(445, 132);
			this->pictureBoxCardDisplay6->Name = L"pictureBoxCardDisplay6";
			this->pictureBoxCardDisplay6->Size = System::Drawing::Size(75, 97);
			this->pictureBoxCardDisplay6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxCardDisplay6->TabIndex = 19;
			this->pictureBoxCardDisplay6->TabStop = false;
			// 
			// labelPlayerTotal
			// 
			this->labelPlayerTotal->AutoSize = true;
			this->labelPlayerTotal->BackColor = System::Drawing::Color::Black;
			this->labelPlayerTotal->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelPlayerTotal->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelPlayerTotal->ForeColor = System::Drawing::Color::Blue;
			this->labelPlayerTotal->Location = System::Drawing::Point(643, 398);
			this->labelPlayerTotal->Name = L"labelPlayerTotal";
			this->labelPlayerTotal->Size = System::Drawing::Size(84, 29);
			this->labelPlayerTotal->TabIndex = 20;
			this->labelPlayerTotal->Text = L"Total";
			this->labelPlayerTotal->Visible = false;
			// 
			// labelDealerTotal
			// 
			this->labelDealerTotal->AutoSize = true;
			this->labelDealerTotal->BackColor = System::Drawing::Color::Transparent;
			this->labelDealerTotal->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->labelDealerTotal->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelDealerTotal->ForeColor = System::Drawing::Color::White;
			this->labelDealerTotal->Location = System::Drawing::Point(735, 87);
			this->labelDealerTotal->Name = L"labelDealerTotal";
			this->labelDealerTotal->Size = System::Drawing::Size(79, 22);
			this->labelDealerTotal->TabIndex = 21;
			this->labelDealerTotal->Text = L"DTotal";
			this->labelDealerTotal->Visible = false;
			// 
			// labelDealerCard1
			// 
			this->labelDealerCard1->AutoSize = true;
			this->labelDealerCard1->BackColor = System::Drawing::Color::Transparent;
			this->labelDealerCard1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelDealerCard1->ForeColor = System::Drawing::Color::White;
			this->labelDealerCard1->Location = System::Drawing::Point(152, 112);
			this->labelDealerCard1->Name = L"labelDealerCard1";
			this->labelDealerCard1->Size = System::Drawing::Size(51, 17);
			this->labelDealerCard1->TabIndex = 22;
			this->labelDealerCard1->Text = L"label1";
			this->labelDealerCard1->Visible = false;
			// 
			// labelDealerCard2
			// 
			this->labelDealerCard2->AutoSize = true;
			this->labelDealerCard2->BackColor = System::Drawing::Color::Transparent;
			this->labelDealerCard2->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelDealerCard2->ForeColor = System::Drawing::Color::White;
			this->labelDealerCard2->Location = System::Drawing::Point(297, 112);
			this->labelDealerCard2->Name = L"labelDealerCard2";
			this->labelDealerCard2->Size = System::Drawing::Size(52, 17);
			this->labelDealerCard2->TabIndex = 23;
			this->labelDealerCard2->Text = L"label2";
			this->labelDealerCard2->Visible = false;
			// 
			// buttonStay
			// 
			this->buttonStay->BackColor = System::Drawing::Color::Black;
			this->buttonStay->ForeColor = System::Drawing::Color::White;
			this->buttonStay->Location = System::Drawing::Point(24, 307);
			this->buttonStay->Name = L"buttonStay";
			this->buttonStay->Size = System::Drawing::Size(75, 23);
			this->buttonStay->TabIndex = 24;
			this->buttonStay->Text = L"Stay";
			this->buttonStay->UseVisualStyleBackColor = false;
			this->buttonStay->Visible = false;
			this->buttonStay->Click += gcnew System::EventHandler(this, &Form1::buttonStay_Click);
			// 
			// labelDealerCard3
			// 
			this->labelDealerCard3->AutoSize = true;
			this->labelDealerCard3->BackColor = System::Drawing::Color::Transparent;
			this->labelDealerCard3->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelDealerCard3->ForeColor = System::Drawing::Color::White;
			this->labelDealerCard3->Location = System::Drawing::Point(442, 112);
			this->labelDealerCard3->Name = L"labelDealerCard3";
			this->labelDealerCard3->Size = System::Drawing::Size(52, 17);
			this->labelDealerCard3->TabIndex = 25;
			this->labelDealerCard3->Text = L"label3";
			this->labelDealerCard3->Visible = false;
			// 
			// buttonResults
			// 
			this->buttonResults->BackColor = System::Drawing::Color::Black;
			this->buttonResults->ForeColor = System::Drawing::Color::White;
			this->buttonResults->Location = System::Drawing::Point(616, 557);
			this->buttonResults->Name = L"buttonResults";
			this->buttonResults->Size = System::Drawing::Size(75, 39);
			this->buttonResults->TabIndex = 26;
			this->buttonResults->Text = L"Results";
			this->buttonResults->UseVisualStyleBackColor = false;
			this->buttonResults->Visible = false;
			this->buttonResults->Click += gcnew System::EventHandler(this, &Form1::buttonResults_Click);
			// 
			// buttonReset
			// 
			this->buttonReset->BackColor = System::Drawing::Color::Black;
			this->buttonReset->ForeColor = System::Drawing::Color::White;
			this->buttonReset->Location = System::Drawing::Point(502, 557);
			this->buttonReset->Name = L"buttonReset";
			this->buttonReset->Size = System::Drawing::Size(75, 39);
			this->buttonReset->TabIndex = 27;
			this->buttonReset->Text = L"Play Another Game";
			this->buttonReset->UseVisualStyleBackColor = false;
			this->buttonReset->Visible = false;
			this->buttonReset->Click += gcnew System::EventHandler(this, &Form1::buttonReset_Click);
			// 
			// labelTitle1
			// 
			this->labelTitle1->AutoSize = true;
			this->labelTitle1->BackColor = System::Drawing::Color::Transparent;
			this->labelTitle1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelTitle1->ForeColor = System::Drawing::Color::White;
			this->labelTitle1->Location = System::Drawing::Point(613, 87);
			this->labelTitle1->Name = L"labelTitle1";
			this->labelTitle1->Size = System::Drawing::Size(114, 17);
			this->labelTitle1->TabIndex = 28;
			this->labelTitle1->Text = L"Dealer Total";
			this->labelTitle1->Visible = false;
			// 
			// labelTitle2
			// 
			this->labelTitle2->AutoSize = true;
			this->labelTitle2->BackColor = System::Drawing::Color::Black;
			this->labelTitle2->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelTitle2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->labelTitle2->Location = System::Drawing::Point(611, 260);
			this->labelTitle2->Name = L"labelTitle2";
			this->labelTitle2->Size = System::Drawing::Size(172, 27);
			this->labelTitle2->TabIndex = 29;
			this->labelTitle2->Text = L"Player Total";
			this->labelTitle2->Visible = false;
			// 
			// labelGame
			// 
			this->labelGame->AutoSize = true;
			this->labelGame->BackColor = System::Drawing::Color::Transparent;
			this->labelGame->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelGame->ForeColor = System::Drawing::Color::White;
			this->labelGame->Location = System::Drawing::Point(296, 53);
			this->labelGame->Name = L"labelGame";
			this->labelGame->Size = System::Drawing::Size(100, 20);
			this->labelGame->TabIndex = 30;
			this->labelGame->Text = L"labelGame";
			this->labelGame->Visible = false;
			this->labelGame->Click += gcnew System::EventHandler(this, &Form1::labelGame_Click);
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Location = System::Drawing::Point(300, 501);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(100, 20);
			this->textBoxPassword->TabIndex = 31;
			this->textBoxPassword->UseSystemPasswordChar = true;
			this->textBoxPassword->Visible = false;
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Location = System::Drawing::Point(297, 433);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(175, 13);
			this->labelName->TabIndex = 32;
			this->labelName->Text = L"Please Enter Your Account Number";
			// 
			// labelPassword
			// 
			this->labelPassword->AutoSize = true;
			this->labelPassword->Location = System::Drawing::Point(297, 482);
			this->labelPassword->Name = L"labelPassword";
			this->labelPassword->Size = System::Drawing::Size(141, 13);
			this->labelPassword->TabIndex = 33;
			this->labelPassword->Text = L"Please Enter Your Password";
			// 
			// buttonSubmit
			// 
			this->buttonSubmit->BackColor = System::Drawing::Color::Black;
			this->buttonSubmit->ForeColor = System::Drawing::Color::White;
			this->buttonSubmit->Location = System::Drawing::Point(340, 557);
			this->buttonSubmit->Name = L"buttonSubmit";
			this->buttonSubmit->Size = System::Drawing::Size(75, 39);
			this->buttonSubmit->TabIndex = 34;
			this->buttonSubmit->Text = L"Submit";
			this->buttonSubmit->UseVisualStyleBackColor = false;
			this->buttonSubmit->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// buttonTest
			// 
			this->buttonTest->BackColor = System::Drawing::Color::Black;
			this->buttonTest->ForeColor = System::Drawing::Color::White;
			this->buttonTest->Location = System::Drawing::Point(855, 557);
			this->buttonTest->Name = L"buttonTest";
			this->buttonTest->Size = System::Drawing::Size(75, 42);
			this->buttonTest->TabIndex = 35;
			this->buttonTest->Text = L"Test Functions";
			this->buttonTest->UseVisualStyleBackColor = false;
			this->buttonTest->Visible = false;
			this->buttonTest->Click += gcnew System::EventHandler(this, &Form1::buttonTest_Click);
			// 
			// buttonSetUpDeck
			// 
			this->buttonSetUpDeck->BackColor = System::Drawing::Color::Blue;
			this->buttonSetUpDeck->ForeColor = System::Drawing::Color::Black;
			this->buttonSetUpDeck->Location = System::Drawing::Point(815, 289);
			this->buttonSetUpDeck->Name = L"buttonSetUpDeck";
			this->buttonSetUpDeck->Size = System::Drawing::Size(91, 35);
			this->buttonSetUpDeck->TabIndex = 36;
			this->buttonSetUpDeck->Text = L"Set Up Deck By Value";
			this->buttonSetUpDeck->UseVisualStyleBackColor = false;
			this->buttonSetUpDeck->Visible = false;
			this->buttonSetUpDeck->Click += gcnew System::EventHandler(this, &Form1::buttonSetUpDeck_Click);
			// 
			// buttonDisplayDeck
			// 
			this->buttonDisplayDeck->BackColor = System::Drawing::Color::Blue;
			this->buttonDisplayDeck->ForeColor = System::Drawing::Color::Black;
			this->buttonDisplayDeck->Location = System::Drawing::Point(917, 289);
			this->buttonDisplayDeck->Name = L"buttonDisplayDeck";
			this->buttonDisplayDeck->Size = System::Drawing::Size(84, 35);
			this->buttonDisplayDeck->TabIndex = 37;
			this->buttonDisplayDeck->Text = L"Display Deck";
			this->buttonDisplayDeck->UseVisualStyleBackColor = false;
			this->buttonDisplayDeck->Visible = false;
			this->buttonDisplayDeck->Click += gcnew System::EventHandler(this, &Form1::buttonDisplayDeck_Click);
			// 
			// buttonShuffleDeck
			// 
			this->buttonShuffleDeck->BackColor = System::Drawing::Color::Blue;
			this->buttonShuffleDeck->ForeColor = System::Drawing::Color::Black;
			this->buttonShuffleDeck->Location = System::Drawing::Point(815, 337);
			this->buttonShuffleDeck->Name = L"buttonShuffleDeck";
			this->buttonShuffleDeck->Size = System::Drawing::Size(91, 35);
			this->buttonShuffleDeck->TabIndex = 38;
			this->buttonShuffleDeck->Text = L"Shuffle Deck";
			this->buttonShuffleDeck->UseVisualStyleBackColor = false;
			this->buttonShuffleDeck->Visible = false;
			this->buttonShuffleDeck->Click += gcnew System::EventHandler(this, &Form1::buttonShuffleDeck_Click);
			// 
			// buttonDealCard
			// 
			this->buttonDealCard->BackColor = System::Drawing::Color::Blue;
			this->buttonDealCard->ForeColor = System::Drawing::Color::Black;
			this->buttonDealCard->Location = System::Drawing::Point(917, 337);
			this->buttonDealCard->Name = L"buttonDealCard";
			this->buttonDealCard->Size = System::Drawing::Size(84, 35);
			this->buttonDealCard->TabIndex = 39;
			this->buttonDealCard->Text = L"Deal a Card";
			this->buttonDealCard->UseVisualStyleBackColor = false;
			this->buttonDealCard->Visible = false;
			this->buttonDealCard->Click += gcnew System::EventHandler(this, &Form1::buttonDealCard_Click);
			// 
			// buttonDealHand
			// 
			this->buttonDealHand->BackColor = System::Drawing::Color::Blue;
			this->buttonDealHand->ForeColor = System::Drawing::Color::Black;
			this->buttonDealHand->Location = System::Drawing::Point(815, 379);
			this->buttonDealHand->Name = L"buttonDealHand";
			this->buttonDealHand->Size = System::Drawing::Size(91, 35);
			this->buttonDealHand->TabIndex = 40;
			this->buttonDealHand->Text = L"Deal a Hand";
			this->buttonDealHand->UseVisualStyleBackColor = false;
			this->buttonDealHand->Visible = false;
			this->buttonDealHand->Click += gcnew System::EventHandler(this, &Form1::buttonDealHand_Click);
			// 
			// buttonAddCard
			// 
			this->buttonAddCard->BackColor = System::Drawing::Color::Blue;
			this->buttonAddCard->ForeColor = System::Drawing::Color::Black;
			this->buttonAddCard->Location = System::Drawing::Point(917, 379);
			this->buttonAddCard->Name = L"buttonAddCard";
			this->buttonAddCard->Size = System::Drawing::Size(84, 35);
			this->buttonAddCard->TabIndex = 41;
			this->buttonAddCard->Text = L"Add a Card to Hand";
			this->buttonAddCard->UseVisualStyleBackColor = false;
			this->buttonAddCard->Visible = false;
			this->buttonAddCard->Click += gcnew System::EventHandler(this, &Form1::buttonAddCard_Click);
			// 
			// buttonArrangeHand
			// 
			this->buttonArrangeHand->BackColor = System::Drawing::Color::Blue;
			this->buttonArrangeHand->ForeColor = System::Drawing::Color::Black;
			this->buttonArrangeHand->Location = System::Drawing::Point(815, 421);
			this->buttonArrangeHand->Name = L"buttonArrangeHand";
			this->buttonArrangeHand->Size = System::Drawing::Size(91, 35);
			this->buttonArrangeHand->TabIndex = 42;
			this->buttonArrangeHand->Text = L"Arrange the Hand";
			this->buttonArrangeHand->UseVisualStyleBackColor = false;
			this->buttonArrangeHand->Visible = false;
			// 
			// buttonStoreDeck
			// 
			this->buttonStoreDeck->BackColor = System::Drawing::Color::Blue;
			this->buttonStoreDeck->ForeColor = System::Drawing::Color::Black;
			this->buttonStoreDeck->Location = System::Drawing::Point(917, 421);
			this->buttonStoreDeck->Name = L"buttonStoreDeck";
			this->buttonStoreDeck->Size = System::Drawing::Size(84, 35);
			this->buttonStoreDeck->TabIndex = 43;
			this->buttonStoreDeck->Text = L"Store Deck On Disk";
			this->buttonStoreDeck->UseVisualStyleBackColor = false;
			this->buttonStoreDeck->Visible = false;
			// 
			// buttonLoadDeck
			// 
			this->buttonLoadDeck->BackColor = System::Drawing::Color::Blue;
			this->buttonLoadDeck->ForeColor = System::Drawing::Color::Black;
			this->buttonLoadDeck->Location = System::Drawing::Point(815, 460);
			this->buttonLoadDeck->Name = L"buttonLoadDeck";
			this->buttonLoadDeck->Size = System::Drawing::Size(91, 35);
			this->buttonLoadDeck->TabIndex = 44;
			this->buttonLoadDeck->Text = L"Load Deck From Disk";
			this->buttonLoadDeck->UseVisualStyleBackColor = false;
			this->buttonLoadDeck->Visible = false;
			// 
			// buttonReturn
			// 
			this->buttonReturn->BackColor = System::Drawing::Color::Blue;
			this->buttonReturn->ForeColor = System::Drawing::Color::Black;
			this->buttonReturn->Location = System::Drawing::Point(917, 460);
			this->buttonReturn->Name = L"buttonReturn";
			this->buttonReturn->Size = System::Drawing::Size(84, 35);
			this->buttonReturn->TabIndex = 45;
			this->buttonReturn->Text = L"Return";
			this->buttonReturn->UseVisualStyleBackColor = false;
			this->buttonReturn->Visible = false;
			this->buttonReturn->Click += gcnew System::EventHandler(this, &Form1::buttonReturn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(72, 208);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 46;
			this->label1->Text = L"label1";
			// 
			// labelWorth1
			// 
			this->labelWorth1->AutoSize = true;
			this->labelWorth1->BackColor = System::Drawing::Color::Black;
			this->labelWorth1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelWorth1->ForeColor = System::Drawing::Color::Blue;
			this->labelWorth1->Location = System::Drawing::Point(150, 398);
			this->labelWorth1->Name = L"labelWorth1";
			this->labelWorth1->Size = System::Drawing::Size(93, 27);
			this->labelWorth1->TabIndex = 47;
			this->labelWorth1->Text = L"Worth";
			this->labelWorth1->Click += gcnew System::EventHandler(this, &Form1::labelWorth1_Click);
			// 
			// labelWorth2
			// 
			this->labelWorth2->AutoSize = true;
			this->labelWorth2->BackColor = System::Drawing::Color::Black;
			this->labelWorth2->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelWorth2->ForeColor = System::Drawing::Color::Blue;
			this->labelWorth2->Location = System::Drawing::Point(295, 398);
			this->labelWorth2->Name = L"labelWorth2";
			this->labelWorth2->Size = System::Drawing::Size(83, 27);
			this->labelWorth2->TabIndex = 48;
			this->labelWorth2->Text = L"label2";
			// 
			// labelWorth3
			// 
			this->labelWorth3->AutoSize = true;
			this->labelWorth3->BackColor = System::Drawing::Color::Black;
			this->labelWorth3->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelWorth3->ForeColor = System::Drawing::Color::Blue;
			this->labelWorth3->Location = System::Drawing::Point(437, 398);
			this->labelWorth3->Name = L"labelWorth3";
			this->labelWorth3->Size = System::Drawing::Size(83, 27);
			this->labelWorth3->TabIndex = 49;
			this->labelWorth3->Text = L"label3";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1013, 746);
			this->Controls->Add(this->labelWorth3);
			this->Controls->Add(this->labelWorth2);
			this->Controls->Add(this->labelWorth1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonReturn);
			this->Controls->Add(this->buttonLoadDeck);
			this->Controls->Add(this->buttonStoreDeck);
			this->Controls->Add(this->buttonArrangeHand);
			this->Controls->Add(this->buttonAddCard);
			this->Controls->Add(this->buttonDealHand);
			this->Controls->Add(this->buttonDealCard);
			this->Controls->Add(this->buttonShuffleDeck);
			this->Controls->Add(this->buttonDisplayDeck);
			this->Controls->Add(this->buttonSetUpDeck);
			this->Controls->Add(this->buttonTest);
			this->Controls->Add(this->buttonSubmit);
			this->Controls->Add(this->labelPassword);
			this->Controls->Add(this->labelName);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->labelGame);
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

		

void dealAHand(array <CardType>^ deck)
		{
			String^ suitValue="";

			
			
			
			dealACard(deck, index, index2, worth);
			number1 = worth2[number];
			suitValue="" + deck[0].CardName;
			pictureBoxCardDisplay2->Image = imageListCards->Images[number];
			labelCardDisplay2->Text= suitValue;
			labelCardDisplay2->Visible = true;
			labelWorth2->Text =+  worth2[number] + "     +    ";
			number2 = worth2[number];
			number = index[1];
			suitValue="" + deck[1].CardName;
			labelWorth3->Text ="0       =      ";
			number3 = worth2[number];
			total = times + number1;
			labelPlayerTotal->Text= total + "" ;
			labelPlayerTotal->Visible= true; ;

			
		return;

		}

		void pictureBox(array <CardType>^ deck, array<int>^index, array<int>^index2)
		{
		

			String^ suitValue="";
			int zero = 0;
			int card1 =0;


			index2[51] = index[0];
			number = index2[51];
			card1 = worth2[number];

			times = card1;
			labelWorth1->Text = card1 + "     +    ";
			labelPlayerTotal->Text= ""+ card1;
			labelTitle2->Visible= true; ;
			labelPlayerTotal->Visible= true; ;

			pictureBoxCardDisplay1->Image = imageListCards->Images[number];



			
			return;

		}


void dealACard(array <CardType>^ deck, array<int>^index, array<int>^index2,array<int>^worth )
		{
	
			

		
		
		String^ suitValue="";
		int zero = 0;
		int card1 =0;
		

		anotherDeck[51] = deck[0];
		
		index2[51] = index[0];
			number = index2[51];
			card1 = worth2[number];

		labelWorth1->Text = card1 + "     +    ";
		labelWorth2->Text =  zero + "     +    ";
		labelWorth3->Text = zero + "     =    ";
		

	
			
			
		pictureBox(deck, index,index2);

			
		

			
		
		for ( int i = 0; i < 52; i++)
		{
		
		anotherDeck[0] = deck[1];
		anotherDeck[1] = deck[2];
		anotherDeck[2] = deck[3];
		anotherDeck[3] = deck[4];
		anotherDeck[4] = deck[5];
		anotherDeck[5] = deck[6];
		anotherDeck[6] = deck[7];
		anotherDeck[7] = deck[8];
		anotherDeck[8] = deck[9];
		anotherDeck[9] = deck[10];
		anotherDeck[10] = deck[11];
		anotherDeck[11] = deck[12];
		anotherDeck[12] = deck[13];
		anotherDeck[13] = deck[14];
		anotherDeck[14] = deck[15];
		anotherDeck[15] = deck[16];
		anotherDeck[16] = deck[17];
		anotherDeck[17] = deck[18];
		anotherDeck[18] = deck[19];
		anotherDeck[19] = deck[20];
		anotherDeck[20] = deck[21];
		anotherDeck[21] = deck[22];
		anotherDeck[22] = deck[23];
		anotherDeck[23] = deck[24];
		anotherDeck[24] = deck[25];
		anotherDeck[25] = deck[26];
		anotherDeck[26] = deck[27];
		anotherDeck[27] = deck[28];
		anotherDeck[28] = deck[29];
		anotherDeck[29] = deck[30];
		anotherDeck[30] = deck[31];
		anotherDeck[31] = deck[32];
		anotherDeck[32] = deck[33];
		anotherDeck[33] = deck[34];
		anotherDeck[34] = deck[35];
		anotherDeck[35] = deck[36];
		anotherDeck[36] = deck[37];
		anotherDeck[37] = deck[38];
		anotherDeck[38] = deck[39];
		anotherDeck[39] = deck[40];
		anotherDeck[40] = deck[41];
		anotherDeck[41] = deck[42];
		anotherDeck[42] = deck[43];
		anotherDeck[43] = deck[44];
		anotherDeck[44] = deck[45];
		anotherDeck[45] = deck[46];
		anotherDeck[46] = deck[47];
		anotherDeck[47] = deck[48];
		anotherDeck[48] = deck[49];
		anotherDeck[49] = deck[50];
		anotherDeck[50] = deck[51];

		
		
		index2[0] = index[1];
		index2[1] = index[2];
		index2[2] = index[3];
		index2[3] = index[4];
		index2[4] = index[5];
		index2[5] = index[6];
		index2[6] = index[7];
		index2[7] = index[8];
		index2[8] = index[9];
		index2[9] = index[10];
		index2[10] = index[11];
		index2[11] = index[12];
		index2[12] = index[13];
		index2[13] = index[14];
		index2[14] = index[15];
		index2[15] = index[16];
		index2[16] = index[17];
		index2[17] = index[18];
		index2[18] = index[19];
		index2[19] = index[20];
		index2[20] = index[21];
		index2[21] = index[22];
		index2[22] = index[23];
		index2[23] = index[24];
		index2[24] = index[25];
		index2[25] = index[26];
		index2[26] = index[27];
		index2[27] = index[28];
		index2[28] = index[29];
		index2[29] = index[30];
		index2[30] = index[31];
		index2[31] = index[32];
		index2[32] = index[33];
		index2[33] = index[34];
		index2[34] = index[35];
		index2[35] = index[36];
		index2[36] = index[37];
		index2[37] = index[38];
		index2[38] = index[39];
		index2[39] = index[40];
		index2[40] = index[41];
		index2[41] = index[42];
		index2[42] = index[43];
		index2[43] = index[44];
		index2[44] = index[45];
		index2[45] = index[46];
		index2[46] = index[47];
		index2[47] = index[48];
		index2[48] = index[49];
		index2[49] = index[50];
		index2[50] = index[51];


		//worth2[0] = worth[1];
		//worth2[1] = worth[2];
		//worth2[2] = worth[3];
		//worth2[3] = worth[4];
		//worth2[4] = worth[5];
		//worth2[5] = worth[6];
		//worth2[6] = worth[7];
		//worth2[7] = worth[8];
		//worth2[8] = worth[9];
		//worth2[9] = worth[10];
		//worth2[10] = worth[11];
		//worth2[11] = worth[12];
		//worth2[12] = worth[13];
		//worth2[13] = worth[14];
		//worth2[14] = worth[15];
		//worth2[15] = worth[16];
		//worth2[16] = worth[17];
		//worth2[17] = worth[18];
		//worth2[18] = worth[19];
		//worth2[19] = worth[20];
		//worth2[20] = worth[21];
		//worth2[21] = worth[22];
		//worth2[22] = worth[23];
		//worth2[23] = worth[24];
		//worth2[24] = worth[25];
		//worth2[25] = worth[26];
		//worth2[26] = worth[27];
		//worth2[27] = worth[28];
		//worth2[28] = worth[29];
		//worth2[29] = worth[30];
		//worth2[30] = worth[31];
		//worth2[31] = worth[32];
		//worth2[32] = worth[33];
		//worth2[33] = worth[34];
		//worth2[34] = worth[35];
		//worth2[35] = worth[36];
		//worth2[36] = worth[37];
		//worth2[37] = worth[38];
		//worth2[38] = worth[39];
		//worth2[39] = worth[40];
		//worth2[40] = worth[41];
		//worth2[41] = worth[42];
		//worth2[42] = worth[43];
		//worth2[43] = worth[44];
		//worth2[44] = worth[45];
		//worth2[45] = worth[46];
		//worth2[46] = worth[47];
		//worth2[47] = worth[48];
		//worth2[48] = worth[49];
		//worth2[49] = worth[50];
		//worth2[50] = worth[51];

		
		index[i]=index2[i];
		deck[i]=anotherDeck[i];
		worth[i]=worth2[i];

		suitValue = deck[i].CardName;
		number = index[0];
		
		
		
		
		
		}
		
		labelCardDisplay->Text= suitValue;
		
		labelCardDisplay->Visible = true;
		
		
		

	

		return;


		

	


		}

		

void shuffleDeck(array <CardType>^ deck, array <CardType>^ shuffled, array<int>^index, array<int>^index2 )
{
	
	Random^ getRandom = gcnew Random();
	

	for ( int i = 0; i < 52; i++)
	{
		
	int randomNumber = getRandom->Next(0, (52));;
	

	
	shuffled[i] = deck[randomNumber];
	deck[randomNumber]= deck[i];
	deck[i] = shuffled[i];
	index2[i]=index[randomNumber];
	index[randomNumber]= index[i];
	index[i] = index2[i];

	worth[i]= worth[randomNumber];
	worth[randomNumber]= worth2[i];
	worth[i] = worth2[i];
	
	



	}

	
		
	 
	


return;



}

void setUpDeckByValue(array<int>^index)

{
	
	
array<String^>^value  = { "Two of Diamonds","Two of Clubs", "Two of Hearts","Two of Spades",
						  "Three of Diamonds","Three of Clubs", "Three of Hearts", "Three of Spades", 
						  "Four of Diamonds","Four of Clubs", "Four of Hearts", "Four of Spades",
						  "Five of Diamonds","Five of Clubs", "Five of Hearts", "Five of Spades",
						  "Six of Diamonds","Six of Clubs", "Six of Hearts", "Six of Spades",
						  "Seven of Diamonds","Seven of Clubs", "Seven of Hearts", "Seven of Spades",
						  "Eight of Diamonds","Eight of Clubs", "Eight of Hearts", "Eight of Spades",
						  "Nine of Diamonds","Nine of Clubs", "Nine of Hearts", "Nine of Spades",
						  "Ten of Diamonds","Ten of Clubs", "Ten of Hearts", "Ten of Spades",
						  "Jack of Diamonds","Jack of Clubs", "Jack of Hearts", "Jack of Spades",
						  "Queen of Diamonds","Queen of Clubs", "Queen of Hearts", "Queen of Spades",
						  "King of Diamonds","King of Clubs", "King of Hearts", "King of Spades",
						  "Ace of Diamonds","Ace of Clubs", "Ace of Hearts", "Ace of Spades"};



				 






	for ( int i = 0; i < 52; i++)
			{
				
				if(i < 52)
				{
				
				deck[i].CardName = value[i];
				index[i]=i;
				
				
				
				}

				
				

			 }

				
	return;
	
	
	
}
void doubleCheck()
{
total = times + number1 + card3;
}


void addACardToHand(array <CardType>^ deck)
{		
			String^ suitValue="";
			int number2 = 0;

			suitValue="" + deck[1].CardName;
			number2 = worth2[number];
			number = index[1];
			pictureBoxCardDisplay3->Image = imageListCards->Images[number];
			labelWorth3->Text =number2 + "     =    ";
			card3 = number2;
			labelPlayerTotal->Text= total + "" ;
			labelPlayerTotal->Visible= true; ;
			doubleCheck();
			labelCardDisplay3->Text= suitValue;
			labelCardDisplay3->Visible = true;
			
			

			return;
}


void logIn(int gameNumber)
{
			 labelName->Visible = false;
			 labelPassword->Visible = false;
			 textBoxLogIn->Visible=false;
			 textBoxPassword->Visible=false;
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
			 labelGame->Text ="Game # " + gameNumber.ToString();
}

void displayDeck(array <CardType>^ deck)

{
	String^ copy;

	for ( int i = 0; i < 52; i++)
	{
		
		copy += deck[i].CardName+ "\t\t\t";
		

	}

	MessageBox::Show(copy);
	
	

	return;

	
}

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

//bool albertCheck(int accountNum)
//{
//
//	return(accountNum == '');
//
//}

void incorrect()
{
	MessageBox::Show("Sorry, but either your account number and/or password is incorrect");
}





void cardValues()
{
	

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
					  "\nClick Hit to get an additional card\n\n"+ "To win the game, the sum of your cards must add "+
					  "up to more than the sum of the dealer's"+"\n but less than 21. Should your cards equal more than 21 or less"+
					  " than the dealer's you lose.");
			 }
private: System::Void labelLogin_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
		 }
private: System::Void buttonLogin_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 labelLogin->Visible = true;
			  textBoxLogIn->Visible = true;
			   textBoxPassword->Visible = true;
			  buttonLogin->Visible = false;
			  setUpDeckByValue(index);
			  
			  
			 
			  
		 }
private: System::Void buttonExit_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
			  
			  Windows::Forms::DialogResult buttonClicked;
			  buttonClicked = MessageBox::Show("Are you sure you want to leave?",
			  "Leaving so soon?",MessageBoxButtons::YesNo,
			  MessageBoxIcon::Question,
			  MessageBoxDefaultButton::Button2);
			  if(buttonClicked == Windows::Forms::DialogResult::Yes)
			  {
				
				MessageBox::Show(String::Concat("Farewell! Thanks for stopping by and using Travis' BlackJack program "+ userName + ",\n in your " + gameNumber.ToString()+
					" game(s) you have won " + playerWins.ToString() + " while the dealer has won " + dealerWins.ToString() + " game(s)"));
				MessageBox::Show ("ID Info\nTravis Kopp \Program # 4 \nBlackJack Program  \nCIS 192-C++ \nT-TH:9:00-12:00"+ 
				"\nProfessor Forman \nTotal Hours:30 \nDegree of Difficulty:10 \nDate Submitted:12/08/09\n\nCredits"+
				"\nI'd like to thank Genesis and Leyssa for helping me this whole semester\n I didn't do any stars in this program\n as well as Professor Foreman. \n\nhttp://lawyersusaonline.com/benchmarks/files/2009/11/blackjack_board.jpg\nhttp://thehouseofcards.com/card_images.html" );


			  Close();
			  }
			  else
			  {
				   MessageBox::Show("Good Decision");
			  }
				  
		 }
private: System::Void buttonPlay_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 logIn(gameNumber);

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
			playerCard1 = intCardValue;
			pictureBoxCardDisplay3 ->Visible = false;
			buttonDeal->Visible = false;
			labelDealerCard1->Visible =true;
			labelDealerCard2->Visible =true;
			labelDealerCard3->Visible =false;
			gameNumber= gameNumber + 1;
			labelGame->Text ="Game # " + gameNumber.ToString();
			labelGame->Visible =true;
			


			 randomInt  = getRandom->Next(51);

			 cardValues();
			 pictureBoxCardDisplay2->Image = imageListCards->Images[randomInt];
			 playerCard2 = intCardValue;
			 
			
			 labelCardDisplay2->Text = intCardValue.ToString() + " -- " + stringCardName + " of " + stringSuit;
			 labelCardDisplay3 ->Visible = false;
			 buttonHit->Visible = true;

			 cardValues();
			 pictureBoxCardDisplay4->Image = imageListCards->Images[randomInt];
			 labelDealerCard1->Text = intCardValue.ToString() + " -- " + stringCardName + " of " + stringSuit;
			 dealerCard1 = intCardValue;

			 cardValues();
			 pictureBoxCardDisplay5->Image = imageListCards->Images[randomInt];
			  labelDealerCard2->Text = intCardValue.ToString() + " -- " + stringCardName + " of " + stringSuit;
			 dealerCard2 = intCardValue;

			 dealerTotal = dealerCard1 + dealerCard2;
			 labelDealerTotal->Text = dealerTotal.ToString();
			 playerTotal = playerCard1 + playerCard2;
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
			playerCard3 = intCardValue;
			playerTotal = playerTotal + playerCard3;
			labelPlayerTotal->Text = playerTotal.ToString();
			blackJack();

			if (dealerTotal < 16)
			 {
			    cardValues();
				pictureBoxCardDisplay6->Image = imageListCards->Images[randomInt];
				dealerCard3=intCardValue;
				dealerTotal = dealerTotal + dealerCard3;
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
				
			
					 if(playerTotal != 21)
				 {

				 }


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
			 labelGame->Text ="Game # " + gameNumber.ToString();
		 }
private: System::Void labelGame_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
			 
		 }
private: System::Void labelDate_Click(System::Object^  sender, System::EventArgs^  e)
		 {
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
			 accountNum = textBoxLogIn->Text;
			 password = textBoxPassword->Text;

	if(accountNum =="1111")
	{
		if(password == "blackjack")
		{
		
		MessageBox::Show("Thanks for joining us, Albert Einstein!");
		userName = "Albert Einstein";
		 buttonPlay->Visible = true;
		return;
		}
		if(password =="master")
		{
			MessageBox::Show("Thanks for joining us, Albert Einstein!");
		userName = "Albert Einstein";
		 buttonPlay->Visible = true;
		 buttonTest->Visible = true;
		return;
		}
	}
	if(accountNum =="2222")
	{
		if(password == "blackjack")
		{
		MessageBox::Show("Thanks for joining us, Madame Curie!");
		userName = "Madame Curie";
		 buttonPlay->Visible = true;
		 buttonTest->Visible = true;
		return;
		}
		if(password == "master")
		{
		MessageBox::Show("Thanks for joining us, Madame Curie!");
		userName = "Madame Curie";
		 buttonPlay->Visible = true;
		return;
		}
	}
	if(accountNum =="3333")
	{
		if(password == "blackjack")
		{
		MessageBox::Show("Thanks for joining us, Travis!");
		userName = "Travis";
		 buttonPlay->Visible = true;
		return;
		}
		if(password == "master")
		{
		MessageBox::Show("Thanks for joining us, Travis!");
		userName = "Travis";
		 buttonPlay->Visible = true;
		 buttonTest->Visible = true;
		return;
		}
	}
	if(accountNum =="4444")
	{
		if(password == "blackjack")
		{
		MessageBox::Show("Thanks for joining us, Tom Waits!");
		userName = "Tom Waits";
		 buttonPlay->Visible = true;
		return;
		}
		if(password == "master")
		{
		MessageBox::Show("Thanks for joining us, Tom Waits!");
		userName = "Tom Waits";
		 buttonPlay->Visible = true;
		 buttonTest->Visible = true;
		return;
		}


	}

	if(accountNum =="5555")
	{
		if(password == "blackjack")
		{
		MessageBox::Show("Thanks for joining us, Mahatma Gandhi!");
		userName = "Mahatma Gandhi";
		logIn(gameNumber);
		return;
		}
		if(password == "master")
		{
		MessageBox::Show("Thanks for joining us, Mahatma Gandhi!");
		userName = "Mahatma Gandhi";
		logIn(gameNumber);
		buttonTest->Visible = true;
		return;
		}
		else
		{
			incorrect();
		}
		
	}
	else
	{
		incorrect();
		return;
	}
	

		
			

		 }
private: System::Void buttonSetUpDeck_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			setUpDeckByValue(index);
			
		 }
private: System::Void buttonDisplayDeck_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
				 displayDeck(deck);

		 }
private: System::Void buttonShuffleDeck_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 shuffleDeck(deck, shuffled,index, index2);
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void buttonDealCard_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 dealACard(deck, index, index2, worth);
		 }
private: System::Void labelCardDisplay_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void labelWorth1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void buttonDealHand_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 dealAHand(deck);
		 }
private: System::Void buttonAddCard_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 addACardToHand(deck);
		 }
private: System::Void buttonReturn_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 buttonSetUpDeck->Visible=false;
			buttonDisplayDeck->Visible=false;
			  buttonShuffleDeck->Visible=false;
			buttonDealCard->Visible=false;
			buttonDealHand->Visible=false;
			 buttonAddCard->Visible=false;
			 buttonArrangeHand->Visible=false;
			buttonArrangeHand->Visible=false;
			buttonStoreDeck->Visible= false;
			buttonLoadDeck->Visible= false;






		 }
private: System::Void buttonTest_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			  buttonSetUpDeck->Visible=true;
			buttonDisplayDeck->Visible=true;
			  buttonShuffleDeck->Visible=true;
			buttonDealCard->Visible=true;
			buttonDealHand->Visible=true;
			 buttonAddCard->Visible=true;
			 buttonArrangeHand->Visible=true;
			buttonArrangeHand->Visible=true;
			buttonStoreDeck->Visible= true;
			buttonLoadDeck->Visible= true;
			buttonReturn->Visible= true;
		 }
};
}

