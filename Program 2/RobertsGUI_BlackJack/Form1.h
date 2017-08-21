/*#############################################################################
###############################################################################
###
###                               ID INFORMATION
###
###       Programmer:	Robert Gunnlaugsson
###     Assignment #:	Program 2
###  Assignment Name:	Black Jack
### Course # & Title:	CISC 192 - C++ Programming
###    Meeting Times:	MW: 9:35 AM - 12:35 PM
###       Instructor:	Professor Forman
###    Project Hours:	30
###       Difficulty:	4 
###  Completion Date:	Wednesday 11/16/2009
###         Due Date:	Wenesday  11/25/2009
###
###############################################################################
###
### Project Description
###
### Design and develop a Visual C++ program to emulate a black jack card game.
###
### * Project is to be called RobertsBlackJackParlor
### * Form1 is to have the title: "Robert's Black Jack Parlor"
### * There is to be a label with a "Welcome" message (using the programmer's
###   name) centered at the top of the form, in a big, beautiful and colorful
###   font.
### * A label is to be displayed showing the program's start up time
### * Include a button to show the current time
### * Include a button to show instructions in a message box.
### * Have a animated gif relating to the project in the center of the screen.
### * A login button that prompt for user input of their name
### * An Exit button, that displays a "friendly" farewell message, using the
###	  the user's name, plays a sound file and shows the statistics for the
###   games played.
### * After the farewell message, show a message box with the program's id 
###   info. and credits.
### * After a successful login, initialize the screen for the second "screen"
###   on which the actual Black Jack game is played.
### * During game play: 
###		* Show the images of the cards dealt to each hand
###     * label each card with its name ( ie. queen, ten, five, etc.)
###     * label each card with its point value ( ie. face cards = 10, etc.)
###	* After two cards have been dealt to each player:
###		* Prompt the player to either take a hit or stand.
###
###############################################################################
###
###                      CUSTOM-MADE FUNCTION LISTING
###
### checkForBlackJack()
### checkForDealerBlackJack()
### dealCard()
### determineNextPlayer()
### displayCurrentTime()
### displayStartTime()
### evaluateDealersHand()
### initializeScreen2()
### loadCardNames()
### loadCardValues()
### randomizeDeck()
### startDeal()
### testForAceInBustedHand()
### testForBustedHand()
###
###############################################################################
###
###                                 CREDITS
###
### I wish to thank Professor Forman for inspiring me to try the "next" thing
### in my progress in learning C++.
###
### I thank Amy for enlightening me in how to concatenate when using a 
### message box so I don't have a 3 mile long string of text for my credits
###
###                               COLLATERAL
###
### Card table felt background: 
### http://ecx.images-amazon.com/images/I/51BMFuBVHLL._SL500_AA280_.jpg
### 
### Card images:  
### http://www.jfitz.com/cards/
##3
### Card Shuffle sound effect:
### http://www.pacdv.com/sounds/miscellaneous_sounds.html
### http://www.soundjay.com/card-sounds-1.html
###
### Card dealt sound effect:
### http://www.soundjay.com/player-recorder-sounds.html
### 
### revolving cards animations:
### http://www.sevenoaksart.co.uk/casino.htm
###
#############################################################################*/

#pragma once


namespace RobertsGUI_BlackJack {

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
			displayStartTime();
			loadCardNames();
			loadCardValues();
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
	private: System::Windows::Forms::Label^  lbl_pg1_header;
	private: System::Windows::Forms::Label^  lbl_startTime;
	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


	private: System::Windows::Forms::Label^  lbl_startTime_title;
	private: System::Windows::Forms::Label^  lbl_currentTime_title;
	private: System::Windows::Forms::Label^  lbl_currentTime;
	private: System::Windows::Forms::Label^  lbl_elapsedTime_title;

	private: System::Windows::Forms::Label^  lbl_elapsedTime;
	private: System::Windows::Forms::Timer^  timer_currentTime;
	private: System::Windows::Forms::Button^  btn_showCurrentTime;
	private: System::Windows::Forms::PictureBox^  pb_ace;
	private: System::Windows::Forms::PictureBox^  pb_queen;
	private: System::Windows::Forms::PictureBox^  pb_deckUp;
	private: System::Windows::Forms::PictureBox^  pb_deckDown;
	private: System::Windows::Forms::Timer^  timer_animationLoop;
	private: System::Windows::Forms::ImageList^  il_deck;
	private: System::Windows::Forms::Button^  btn_rules;
	private: System::Windows::Forms::Label^  lbl_pg1_instructions;
	private: System::Windows::Forms::Button^  btn_login;
	private: System::Windows::Forms::TextBox^  tb_userName;
	private: System::Windows::Forms::Button^  btn_continue;
	private: System::Windows::Forms::Label^  lbl_pg1_instructions2;
	private: System::Windows::Forms::Button^  btn_exit;
	private: System::Windows::Forms::PictureBox^  pb_player1_1;
	private: System::Windows::Forms::PictureBox^  pb_player1_2;
	private: System::Windows::Forms::PictureBox^  pb_player1_3;
	private: System::Windows::Forms::PictureBox^  pb_player1_4;
	private: System::Windows::Forms::PictureBox^  pb_player1_5;
	private: System::Windows::Forms::PictureBox^  pb_player2_1;
	private: System::Windows::Forms::PictureBox^  pb_player2_2;
	private: System::Windows::Forms::PictureBox^  pb_player2_3;
	private: System::Windows::Forms::PictureBox^  pb_player2_4;
	private: System::Windows::Forms::PictureBox^  pb_player2_5;
	private: System::Windows::Forms::PictureBox^  pb_player3_1;
	private: System::Windows::Forms::PictureBox^  pb_player3_2;
	private: System::Windows::Forms::PictureBox^  pb_player3_3;
	private: System::Windows::Forms::PictureBox^  pb_player3_4;
	private: System::Windows::Forms::PictureBox^  pb_player3_5;
	private: System::Windows::Forms::PictureBox^  pb_dealer_1;
	private: System::Windows::Forms::PictureBox^  pb_dealer_2;
	private: System::Windows::Forms::PictureBox^  pb_dealer_3;
	private: System::Windows::Forms::PictureBox^  pb_dealer_4;
	private: System::Windows::Forms::PictureBox^  pb_dealer_5;
	private: System::Windows::Forms::PictureBox^  pb_deckImage;
	private: System::Windows::Forms::PictureBox^  pb_dealtCard;
	private: System::Windows::Forms::Button^  btn_deal;
	private: System::Windows::Forms::Label^  lbl_testRandomness;
	private: System::Windows::Forms::Timer^  timer_dealCard;
	private: System::Windows::Forms::Label^  lbl_player1_1_name;
	private: System::Windows::Forms::Label^  lbl_player1_2_name;
	private: System::Windows::Forms::Label^  lbl_player1_3_name;
	private: System::Windows::Forms::Label^  lbl_player1_4_name;
	private: System::Windows::Forms::Label^  lbl_player1_5_name;
	private: System::Windows::Forms::Label^  lbl_player2_1_name;
	private: System::Windows::Forms::Label^  lbl_player2_2_name;
	private: System::Windows::Forms::Label^  lbl_player2_3_name;
	private: System::Windows::Forms::Label^  lbl_player2_4_name;
	private: System::Windows::Forms::Label^  lbl_player2_5_name;
	private: System::Windows::Forms::Label^  lbl_player3_1_name;
	private: System::Windows::Forms::Label^  lbl_player3_2_name;
	private: System::Windows::Forms::Label^  lbl_player3_3_name;
	private: System::Windows::Forms::Label^  lbl_player3_4_name;
	private: System::Windows::Forms::Label^  lbl_player3_5_name;
	private: System::Windows::Forms::Label^  lbl_dealer_1_name;
	private: System::Windows::Forms::Label^  lbl_dealer_2_name;
	private: System::Windows::Forms::Label^  lbl_dealer_3_name;
	private: System::Windows::Forms::Label^  lbl_dealer_4_name;
	private: System::Windows::Forms::Label^  lbl_dealer_5_name;
	private: System::Windows::Forms::Label^  lbl_player1_handValue;
	private: System::Windows::Forms::Label^  lbl_player2_handValue;
	private: System::Windows::Forms::Label^  lbl_player3_handValue;
	private: System::Windows::Forms::Label^  lbl_player1_handValueTitle;
	private: System::Windows::Forms::Label^  lbl_player2_handValueTitle;
	private: System::Windows::Forms::Label^  lbl_player3_handValueTitle;
	private: System::Windows::Forms::Label^  lbl_player1_handStatus;
	private: System::Windows::Forms::Label^  lbl_player2_handStatus;
	private: System::Windows::Forms::Label^  lbl_player3_handStatus;
	private: System::Windows::Forms::Label^  lbl_dealer_handValue;
	private: System::Windows::Forms::Label^  lbl_dealer_handValueTitle;
	private: System::Windows::Forms::Label^  lbl_gameOver;
	private: System::Windows::Forms::Button^  btn_player1_stand;
	private: System::Windows::Forms::Button^  btn_player1_hit;
	private: System::Windows::Forms::Button^  btn_player2_stand;
	private: System::Windows::Forms::Button^  btn_player3_stand;
	private: System::Windows::Forms::Button^  btn_player2_hit;
	private: System::Windows::Forms::Button^  btn_player3_hit;
	private: System::Windows::Forms::Label^  lbl_dealer_handStatus;
	private: System::Windows::Forms::Button^  btn_stats;
	private: System::Windows::Forms::Button^  btn_darkGreen;
	private: System::Windows::Forms::Button^  btn_mediumGreen;
	private: System::Windows::Forms::Button^  btn_lightGreen;
	private: System::Windows::Forms::Timer^  timer_btnDeal;
	private: System::Windows::Forms::Timer^  timer_btn_continue;
	private: System::Windows::Forms::Label^  lbl_gameNumber;

/*#############################################################################
###############################################################################
###############################################################################
###
###                  BEGIN: INSTANCE VARIABLE SECTION
###
###############################################################################
###############################################################################
#############################################################################*/
	
	DateTime startTime;
	DateTime currentTime;
	TimeSpan elapsedTime;
	static int gamesPlayedCount = 0;
	static int DECK_SIZE = 52;
	static int MAX_CARDS_IN_HAND = 5;
	static int intAnimationCounter = 0;		// attractor animation loop counter
	static int intErrorCount = 0;
	static int colorID = 0;					// loop index for deal button animation
	static String^ username = "";
	static String^ userFirstName = "";
	static String^ userLastName = "";
	static int nextCardIndex = 0;			// card index for next card to be dealt
	static int activePlayer = 1;
	static int player1_activeCard = 1;
	static int player2_activeCard = 1;
	static int player3_activeCard = 1;
	static int dealer_activeCard = 1;
	static int player1_handValue = 0;
	static int player2_handValue = 0;
	static int player3_handValue = 0;
	static int dealer_handValue = 0;
	
	// variables that hold the player's hand's status
	// true = hand active
	// false = hand inactive
	static bool boolPlayer1_handActive = true;
	static bool boolPlayer2_handActive = true;
	static bool boolPlayer3_handActive = true;
	static bool boolDealer_handActive = true;

	// statistics variables
	static int intGamesPlayedCount = 0;

	static int intPlayer1_gamesWonCount = 0;
	static int intPlayer1_gamesWonCount_blackjack = 0;
	static int intPlayer1_gamesWonCount_21 = 0;
	static int intPlayer1_gamesWonCount_dealerBust = 0;
	static int intPlayer1_gamesWonCount_higherScore = 0;
	static int intPlayer1_gamesWonCount_5cc = 0;

	static int intPlayer1_gamesTiedCount = 0;

	static int intPlayer1_gamesLostCount = 0;
	static int intPlayer1_gamesLostCount_bust = 0;
	static int intPlayer1_gamesLostCount_dealerBlackJack = 0;
	static int intPlayer1_gamesLostCount_lowerScore = 0;

	static int intPlayer2_gamesWonCount = 0;
	static int intPlayer2_gamesWonCount_blackjack = 0;
	static int intPlayer2_gamesWonCount_21 = 0;
	static int intPlayer2_gamesWonCount_dealerBust = 0;
	static int intPlayer2_gamesWonCount_higherScore = 0;
	static int intPlayer2_gamesWonCount_5cc = 0;

	static int intPlayer2_gamesTiedCount = 0;

	static int intPlayer2_gamesLostCount = 0;
	static int intPlayer2_gamesLostCount_bust = 0;
	static int intPlayer2_gamesLostCount_dealerBlackJack = 0;
	static int intPlayer2_gamesLostCount_lowerScore = 0;

	static int intPlayer3_gamesWonCount = 0;
	static int intPlayer3_gamesWonCount_blackjack = 0;
	static int intPlayer3_gamesWonCount_21 = 0;
	static int intPlayer3_gamesWonCount_dealerBust = 0;
	static int intPlayer3_gamesWonCount_higherScore = 0;
	static int intPlayer3_gamesWonCount_5cc = 0;

	static int intPlayer3_gamesTiedCount = 0;

	static int intPlayer3_gamesLostCount = 0;
	static int intPlayer3_gamesLostCount_bust = 0;
	static int intPlayer3_gamesLostCount_dealerBlackJack = 0;
	static int intPlayer3_gamesLostCount_lowerScore = 0;

	// Card information arrays
	static int* intCardIndex	          = new int[DECK_SIZE];
		// This array has a location for each physical card in the
		// deck which holds the randomized card index for the physical location
		// eg.  first card dealt = index 0 might be card value 10 -- which relates
		// to the Jack of Clubs, etc.
		
	static int* intCardPointValue         = new int[DECK_SIZE];
		// This array holds the point value for each card. Index 0(Ace of Clubs) = 11,
		// 1(Two of Clubs) = 2, 2(Three of Clubs) = 3, etc.

	static array<String ^> ^ strCardName  = gcnew array<String ^>(DECK_SIZE);
		// This array holds the Name of the card. Index 0 = Ace of Clubs; 1 = Two of Clubs,
		// 2 = Three of Clubs, etc.

	// now for the arrays to hold the 4 different hand's card IDs (up to 5).
	static int* intPlayer1Cards	= new int[MAX_CARDS_IN_HAND];
	static int* intPlayer2Cards = new int[MAX_CARDS_IN_HAND];
	static int* intPlayer3Cards = new int[MAX_CARDS_IN_HAND];
	static int* intDealersCards = new int[MAX_CARDS_IN_HAND];

	// now for the arrays to hold the 4 different hand's card values (up to 5).
	// this is needed to handle bust hands (with 2 or more aces)
	static int* intPlayer1CardValues = new int[MAX_CARDS_IN_HAND];
	static int* intPlayer2CardValues = new int[MAX_CARDS_IN_HAND];
	static int* intPlayer3CardValues = new int[MAX_CARDS_IN_HAND];
	static int* intDealersCardValues = new int[MAX_CARDS_IN_HAND];

/*#############################################################################
###############################################################################
###############################################################################
###
###                     END: INSTANCE VARIABLE SECTION
###
###############################################################################
###############################################################################
#############################################################################*/


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->lbl_pg1_header = (gcnew System::Windows::Forms::Label());
			this->lbl_startTime = (gcnew System::Windows::Forms::Label());
			this->lbl_startTime_title = (gcnew System::Windows::Forms::Label());
			this->lbl_currentTime_title = (gcnew System::Windows::Forms::Label());
			this->lbl_currentTime = (gcnew System::Windows::Forms::Label());
			this->lbl_elapsedTime_title = (gcnew System::Windows::Forms::Label());
			this->lbl_elapsedTime = (gcnew System::Windows::Forms::Label());
			this->timer_currentTime = (gcnew System::Windows::Forms::Timer(this->components));
			this->btn_showCurrentTime = (gcnew System::Windows::Forms::Button());
			this->pb_ace = (gcnew System::Windows::Forms::PictureBox());
			this->pb_queen = (gcnew System::Windows::Forms::PictureBox());
			this->pb_deckUp = (gcnew System::Windows::Forms::PictureBox());
			this->pb_deckDown = (gcnew System::Windows::Forms::PictureBox());
			this->timer_animationLoop = (gcnew System::Windows::Forms::Timer(this->components));
			this->il_deck = (gcnew System::Windows::Forms::ImageList(this->components));
			this->btn_rules = (gcnew System::Windows::Forms::Button());
			this->lbl_pg1_instructions = (gcnew System::Windows::Forms::Label());
			this->btn_login = (gcnew System::Windows::Forms::Button());
			this->tb_userName = (gcnew System::Windows::Forms::TextBox());
			this->btn_continue = (gcnew System::Windows::Forms::Button());
			this->lbl_pg1_instructions2 = (gcnew System::Windows::Forms::Label());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->pb_player1_1 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_player1_2 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_player1_3 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_player1_4 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_player1_5 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_player2_1 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_player2_2 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_player2_3 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_player2_4 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_player2_5 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_player3_1 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_player3_2 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_player3_3 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_player3_4 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_player3_5 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_dealer_1 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_dealer_2 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_dealer_3 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_dealer_4 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_dealer_5 = (gcnew System::Windows::Forms::PictureBox());
			this->pb_deckImage = (gcnew System::Windows::Forms::PictureBox());
			this->pb_dealtCard = (gcnew System::Windows::Forms::PictureBox());
			this->btn_deal = (gcnew System::Windows::Forms::Button());
			this->lbl_testRandomness = (gcnew System::Windows::Forms::Label());
			this->timer_dealCard = (gcnew System::Windows::Forms::Timer(this->components));
			this->lbl_player1_1_name = (gcnew System::Windows::Forms::Label());
			this->lbl_player1_2_name = (gcnew System::Windows::Forms::Label());
			this->lbl_player1_3_name = (gcnew System::Windows::Forms::Label());
			this->lbl_player1_4_name = (gcnew System::Windows::Forms::Label());
			this->lbl_player1_5_name = (gcnew System::Windows::Forms::Label());
			this->lbl_player2_1_name = (gcnew System::Windows::Forms::Label());
			this->lbl_player2_2_name = (gcnew System::Windows::Forms::Label());
			this->lbl_player2_3_name = (gcnew System::Windows::Forms::Label());
			this->lbl_player2_4_name = (gcnew System::Windows::Forms::Label());
			this->lbl_player2_5_name = (gcnew System::Windows::Forms::Label());
			this->lbl_player3_1_name = (gcnew System::Windows::Forms::Label());
			this->lbl_player3_2_name = (gcnew System::Windows::Forms::Label());
			this->lbl_player3_3_name = (gcnew System::Windows::Forms::Label());
			this->lbl_player3_4_name = (gcnew System::Windows::Forms::Label());
			this->lbl_player3_5_name = (gcnew System::Windows::Forms::Label());
			this->lbl_dealer_1_name = (gcnew System::Windows::Forms::Label());
			this->lbl_dealer_2_name = (gcnew System::Windows::Forms::Label());
			this->lbl_dealer_3_name = (gcnew System::Windows::Forms::Label());
			this->lbl_dealer_4_name = (gcnew System::Windows::Forms::Label());
			this->lbl_dealer_5_name = (gcnew System::Windows::Forms::Label());
			this->lbl_player1_handValue = (gcnew System::Windows::Forms::Label());
			this->lbl_player2_handValue = (gcnew System::Windows::Forms::Label());
			this->lbl_player3_handValue = (gcnew System::Windows::Forms::Label());
			this->lbl_player1_handValueTitle = (gcnew System::Windows::Forms::Label());
			this->lbl_player2_handValueTitle = (gcnew System::Windows::Forms::Label());
			this->lbl_player3_handValueTitle = (gcnew System::Windows::Forms::Label());
			this->lbl_player1_handStatus = (gcnew System::Windows::Forms::Label());
			this->lbl_player2_handStatus = (gcnew System::Windows::Forms::Label());
			this->lbl_player3_handStatus = (gcnew System::Windows::Forms::Label());
			this->lbl_dealer_handValue = (gcnew System::Windows::Forms::Label());
			this->lbl_dealer_handValueTitle = (gcnew System::Windows::Forms::Label());
			this->lbl_gameOver = (gcnew System::Windows::Forms::Label());
			this->btn_player1_stand = (gcnew System::Windows::Forms::Button());
			this->btn_player1_hit = (gcnew System::Windows::Forms::Button());
			this->btn_player2_stand = (gcnew System::Windows::Forms::Button());
			this->btn_player3_stand = (gcnew System::Windows::Forms::Button());
			this->btn_player2_hit = (gcnew System::Windows::Forms::Button());
			this->btn_player3_hit = (gcnew System::Windows::Forms::Button());
			this->lbl_dealer_handStatus = (gcnew System::Windows::Forms::Label());
			this->btn_stats = (gcnew System::Windows::Forms::Button());
			this->btn_darkGreen = (gcnew System::Windows::Forms::Button());
			this->btn_mediumGreen = (gcnew System::Windows::Forms::Button());
			this->btn_lightGreen = (gcnew System::Windows::Forms::Button());
			this->timer_btnDeal = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer_btn_continue = (gcnew System::Windows::Forms::Timer(this->components));
			this->lbl_gameNumber = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_ace))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_queen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_deckUp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_deckDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player1_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player1_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player1_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player1_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player1_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player2_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player2_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player2_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player2_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player2_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player3_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player3_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player3_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player3_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player3_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_dealer_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_dealer_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_dealer_3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_dealer_4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_dealer_5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_deckImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_dealtCard))->BeginInit();
			this->SuspendLayout();
			// 
			// lbl_pg1_header
			// 
			this->lbl_pg1_header->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_pg1_header->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_pg1_header->ForeColor = System::Drawing::Color::White;
			this->lbl_pg1_header->Location = System::Drawing::Point(0, 0);
			this->lbl_pg1_header->Name = L"lbl_pg1_header";
			this->lbl_pg1_header->Size = System::Drawing::Size(1024, 80);
			this->lbl_pg1_header->TabIndex = 0;
			this->lbl_pg1_header->Text = L"Welcome to Robert\'s Black Jack Parlor";
			this->lbl_pg1_header->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl_pg1_header->Click += gcnew System::EventHandler(this, &Form1::lbl_pg1_header_Click);
			// 
			// lbl_startTime
			// 
			this->lbl_startTime->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_startTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_startTime->ForeColor = System::Drawing::Color::White;
			this->lbl_startTime->Location = System::Drawing::Point(10, 110);
			this->lbl_startTime->Name = L"lbl_startTime";
			this->lbl_startTime->Size = System::Drawing::Size(220, 25);
			this->lbl_startTime->TabIndex = 1;
			this->lbl_startTime->Text = L"Start Time";
			this->lbl_startTime->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl_startTime_title
			// 
			this->lbl_startTime_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_startTime_title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_startTime_title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_startTime_title->Location = System::Drawing::Point(10, 90);
			this->lbl_startTime_title->Name = L"lbl_startTime_title";
			this->lbl_startTime_title->Size = System::Drawing::Size(220, 20);
			this->lbl_startTime_title->TabIndex = 2;
			this->lbl_startTime_title->Text = L"Start Time";
			this->lbl_startTime_title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl_currentTime_title
			// 
			this->lbl_currentTime_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_currentTime_title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_currentTime_title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_currentTime_title->Location = System::Drawing::Point(10, 145);
			this->lbl_currentTime_title->Name = L"lbl_currentTime_title";
			this->lbl_currentTime_title->Size = System::Drawing::Size(220, 20);
			this->lbl_currentTime_title->TabIndex = 3;
			this->lbl_currentTime_title->Text = L"Current Time";
			this->lbl_currentTime_title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl_currentTime_title->Visible = false;
			// 
			// lbl_currentTime
			// 
			this->lbl_currentTime->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_currentTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_currentTime->ForeColor = System::Drawing::Color::White;
			this->lbl_currentTime->Location = System::Drawing::Point(10, 165);
			this->lbl_currentTime->Name = L"lbl_currentTime";
			this->lbl_currentTime->Size = System::Drawing::Size(220, 25);
			this->lbl_currentTime->TabIndex = 4;
			this->lbl_currentTime->Text = L"Current Time";
			this->lbl_currentTime->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl_currentTime->Visible = false;
			// 
			// lbl_elapsedTime_title
			// 
			this->lbl_elapsedTime_title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_elapsedTime_title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_elapsedTime_title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_elapsedTime_title->Location = System::Drawing::Point(10, 200);
			this->lbl_elapsedTime_title->Name = L"lbl_elapsedTime_title";
			this->lbl_elapsedTime_title->Size = System::Drawing::Size(220, 20);
			this->lbl_elapsedTime_title->TabIndex = 5;
			this->lbl_elapsedTime_title->Text = L"Elapsed Time";
			this->lbl_elapsedTime_title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl_elapsedTime_title->Visible = false;
			// 
			// lbl_elapsedTime
			// 
			this->lbl_elapsedTime->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_elapsedTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_elapsedTime->ForeColor = System::Drawing::Color::White;
			this->lbl_elapsedTime->Location = System::Drawing::Point(10, 220);
			this->lbl_elapsedTime->Name = L"lbl_elapsedTime";
			this->lbl_elapsedTime->Size = System::Drawing::Size(220, 25);
			this->lbl_elapsedTime->TabIndex = 6;
			this->lbl_elapsedTime->Text = L"Elapsed Time";
			this->lbl_elapsedTime->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl_elapsedTime->Visible = false;
			// 
			// timer_currentTime
			// 
			this->timer_currentTime->Enabled = true;
			this->timer_currentTime->Interval = 1000;
			this->timer_currentTime->Tick += gcnew System::EventHandler(this, &Form1::timer_currentTime_Tick);
			// 
			// btn_showCurrentTime
			// 
			this->btn_showCurrentTime->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_showCurrentTime->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_showCurrentTime->FlatAppearance->BorderSize = 4;
			this->btn_showCurrentTime->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_showCurrentTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_showCurrentTime->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_showCurrentTime->Location = System::Drawing::Point(10, 255);
			this->btn_showCurrentTime->Name = L"btn_showCurrentTime";
			this->btn_showCurrentTime->Size = System::Drawing::Size(220, 45);
			this->btn_showCurrentTime->TabIndex = 7;
			this->btn_showCurrentTime->Text = L"Show Current Time";
			this->btn_showCurrentTime->UseVisualStyleBackColor = false;
			this->btn_showCurrentTime->Click += gcnew System::EventHandler(this, &Form1::btn_showCurrentTime_Click);
			// 
			// pb_ace
			// 
			this->pb_ace->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_ace.Image")));
			this->pb_ace->Location = System::Drawing::Point(571, 297);
			this->pb_ace->Name = L"pb_ace";
			this->pb_ace->Size = System::Drawing::Size(61, 107);
			this->pb_ace->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_ace->TabIndex = 8;
			this->pb_ace->TabStop = false;
			// 
			// pb_queen
			// 
			this->pb_queen->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_queen.Image")));
			this->pb_queen->Location = System::Drawing::Point(632, 297);
			this->pb_queen->Name = L"pb_queen";
			this->pb_queen->Size = System::Drawing::Size(61, 105);
			this->pb_queen->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_queen->TabIndex = 9;
			this->pb_queen->TabStop = false;
			// 
			// pb_deckUp
			// 
			this->pb_deckUp->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_deckUp.Image")));
			this->pb_deckUp->Location = System::Drawing::Point(480, 302);
			this->pb_deckUp->Name = L"pb_deckUp";
			this->pb_deckUp->Size = System::Drawing::Size(71, 96);
			this->pb_deckUp->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_deckUp->TabIndex = 10;
			this->pb_deckUp->TabStop = false;
			// 
			// pb_deckDown
			// 
			this->pb_deckDown->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_deckDown.Image")));
			this->pb_deckDown->Location = System::Drawing::Point(713, 302);
			this->pb_deckDown->Name = L"pb_deckDown";
			this->pb_deckDown->Size = System::Drawing::Size(71, 96);
			this->pb_deckDown->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_deckDown->TabIndex = 11;
			this->pb_deckDown->TabStop = false;
			// 
			// timer_animationLoop
			// 
			this->timer_animationLoop->Enabled = true;
			this->timer_animationLoop->Interval = 400;
			this->timer_animationLoop->Tick += gcnew System::EventHandler(this, &Form1::timer_animationLoop_Tick);
			// 
			// il_deck
			// 
			this->il_deck->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"il_deck.ImageStream")));
			this->il_deck->TransparentColor = System::Drawing::Color::Transparent;
			this->il_deck->Images->SetKeyName(0, L"c1.png");
			this->il_deck->Images->SetKeyName(1, L"c2.png");
			this->il_deck->Images->SetKeyName(2, L"c3.png");
			this->il_deck->Images->SetKeyName(3, L"c4.png");
			this->il_deck->Images->SetKeyName(4, L"c5.png");
			this->il_deck->Images->SetKeyName(5, L"c6.png");
			this->il_deck->Images->SetKeyName(6, L"c7.png");
			this->il_deck->Images->SetKeyName(7, L"c8.png");
			this->il_deck->Images->SetKeyName(8, L"c9.png");
			this->il_deck->Images->SetKeyName(9, L"c10.png");
			this->il_deck->Images->SetKeyName(10, L"cj.png");
			this->il_deck->Images->SetKeyName(11, L"cq.png");
			this->il_deck->Images->SetKeyName(12, L"ck.png");
			this->il_deck->Images->SetKeyName(13, L"d1.png");
			this->il_deck->Images->SetKeyName(14, L"d2.png");
			this->il_deck->Images->SetKeyName(15, L"d3.png");
			this->il_deck->Images->SetKeyName(16, L"d4.png");
			this->il_deck->Images->SetKeyName(17, L"d5.png");
			this->il_deck->Images->SetKeyName(18, L"d6.png");
			this->il_deck->Images->SetKeyName(19, L"d7.png");
			this->il_deck->Images->SetKeyName(20, L"d8.png");
			this->il_deck->Images->SetKeyName(21, L"d9.png");
			this->il_deck->Images->SetKeyName(22, L"d10.png");
			this->il_deck->Images->SetKeyName(23, L"dj.png");
			this->il_deck->Images->SetKeyName(24, L"dq.png");
			this->il_deck->Images->SetKeyName(25, L"dk.png");
			this->il_deck->Images->SetKeyName(26, L"h1.png");
			this->il_deck->Images->SetKeyName(27, L"h2.png");
			this->il_deck->Images->SetKeyName(28, L"h3.png");
			this->il_deck->Images->SetKeyName(29, L"h4.png");
			this->il_deck->Images->SetKeyName(30, L"h5.png");
			this->il_deck->Images->SetKeyName(31, L"h6.png");
			this->il_deck->Images->SetKeyName(32, L"h7.png");
			this->il_deck->Images->SetKeyName(33, L"h8.png");
			this->il_deck->Images->SetKeyName(34, L"h9.png");
			this->il_deck->Images->SetKeyName(35, L"h10.png");
			this->il_deck->Images->SetKeyName(36, L"hj.png");
			this->il_deck->Images->SetKeyName(37, L"hq.png");
			this->il_deck->Images->SetKeyName(38, L"hk.png");
			this->il_deck->Images->SetKeyName(39, L"s1.png");
			this->il_deck->Images->SetKeyName(40, L"s2.png");
			this->il_deck->Images->SetKeyName(41, L"s3.png");
			this->il_deck->Images->SetKeyName(42, L"s4.png");
			this->il_deck->Images->SetKeyName(43, L"s5.png");
			this->il_deck->Images->SetKeyName(44, L"s6.png");
			this->il_deck->Images->SetKeyName(45, L"s7.png");
			this->il_deck->Images->SetKeyName(46, L"s8.png");
			this->il_deck->Images->SetKeyName(47, L"s9.png");
			this->il_deck->Images->SetKeyName(48, L"s10.png");
			this->il_deck->Images->SetKeyName(49, L"sj.png");
			this->il_deck->Images->SetKeyName(50, L"sq.png");
			this->il_deck->Images->SetKeyName(51, L"sk.png");
			this->il_deck->Images->SetKeyName(52, L"b2fv.png");
			// 
			// btn_rules
			// 
			this->btn_rules->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_rules->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_rules->Location = System::Drawing::Point(15, 519);
			this->btn_rules->Name = L"btn_rules";
			this->btn_rules->Size = System::Drawing::Size(220, 80);
			this->btn_rules->TabIndex = 12;
			this->btn_rules->Text = L"Rules";
			this->btn_rules->UseVisualStyleBackColor = false;
			this->btn_rules->Click += gcnew System::EventHandler(this, &Form1::btn_rules_Click);
			// 
			// lbl_pg1_instructions
			// 
			this->lbl_pg1_instructions->BackColor = System::Drawing::Color::Transparent;
			this->lbl_pg1_instructions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_pg1_instructions->Location = System::Drawing::Point(240, 80);
			this->lbl_pg1_instructions->Name = L"lbl_pg1_instructions";
			this->lbl_pg1_instructions->Size = System::Drawing::Size(784, 140);
			this->lbl_pg1_instructions->TabIndex = 13;
			this->lbl_pg1_instructions->Text = L"Click the \'Login\' button to begin!";
			this->lbl_pg1_instructions->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_login
			// 
			this->btn_login->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_login->Location = System::Drawing::Point(552, 550);
			this->btn_login->Name = L"btn_login";
			this->btn_login->Size = System::Drawing::Size(160, 80);
			this->btn_login->TabIndex = 14;
			this->btn_login->Text = L"Login";
			this->btn_login->UseVisualStyleBackColor = false;
			this->btn_login->Click += gcnew System::EventHandler(this, &Form1::btn_login_Click);
			// 
			// tb_userName
			// 
			this->tb_userName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tb_userName->Location = System::Drawing::Point(382, 450);
			this->tb_userName->Name = L"tb_userName";
			this->tb_userName->Size = System::Drawing::Size(500, 44);
			this->tb_userName->TabIndex = 1;
			this->tb_userName->Visible = false;
			// 
			// btn_continue
			// 
			this->btn_continue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_continue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_continue->Location = System::Drawing::Point(552, 550);
			this->btn_continue->Name = L"btn_continue";
			this->btn_continue->Size = System::Drawing::Size(160, 80);
			this->btn_continue->TabIndex = 16;
			this->btn_continue->Text = L"Continue";
			this->btn_continue->UseVisualStyleBackColor = false;
			this->btn_continue->Visible = false;
			this->btn_continue->Click += gcnew System::EventHandler(this, &Form1::btn_continue_Click);
			// 
			// lbl_pg1_instructions2
			// 
			this->lbl_pg1_instructions2->BackColor = System::Drawing::Color::Transparent;
			this->lbl_pg1_instructions2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_pg1_instructions2->Location = System::Drawing::Point(240, 231);
			this->lbl_pg1_instructions2->Name = L"lbl_pg1_instructions2";
			this->lbl_pg1_instructions2->Size = System::Drawing::Size(784, 40);
			this->lbl_pg1_instructions2->TabIndex = 17;
			this->lbl_pg1_instructions2->Text = L"(Don\'t forget a space between the names!)";
			this->lbl_pg1_instructions2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl_pg1_instructions2->Visible = false;
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::Red;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_exit->Location = System::Drawing::Point(15, 615);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(220, 80);
			this->btn_exit->TabIndex = 18;
			this->btn_exit->Text = L"Exit";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &Form1::btn_exit_Click);
			// 
			// pb_player1_1
			// 
			this->pb_player1_1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_player1_1.Image")));
			this->pb_player1_1->Location = System::Drawing::Point(740, 430);
			this->pb_player1_1->Name = L"pb_player1_1";
			this->pb_player1_1->Size = System::Drawing::Size(71, 96);
			this->pb_player1_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_player1_1->TabIndex = 19;
			this->pb_player1_1->TabStop = false;
			this->pb_player1_1->Visible = false;
			// 
			// pb_player1_2
			// 
			this->pb_player1_2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_player1_2.Image")));
			this->pb_player1_2->Location = System::Drawing::Point(755, 460);
			this->pb_player1_2->Name = L"pb_player1_2";
			this->pb_player1_2->Size = System::Drawing::Size(71, 96);
			this->pb_player1_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_player1_2->TabIndex = 20;
			this->pb_player1_2->TabStop = false;
			this->pb_player1_2->Visible = false;
			// 
			// pb_player1_3
			// 
			this->pb_player1_3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_player1_3.Image")));
			this->pb_player1_3->Location = System::Drawing::Point(770, 490);
			this->pb_player1_3->Name = L"pb_player1_3";
			this->pb_player1_3->Size = System::Drawing::Size(71, 96);
			this->pb_player1_3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_player1_3->TabIndex = 21;
			this->pb_player1_3->TabStop = false;
			this->pb_player1_3->Visible = false;
			// 
			// pb_player1_4
			// 
			this->pb_player1_4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_player1_4.Image")));
			this->pb_player1_4->Location = System::Drawing::Point(785, 520);
			this->pb_player1_4->Name = L"pb_player1_4";
			this->pb_player1_4->Size = System::Drawing::Size(71, 96);
			this->pb_player1_4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_player1_4->TabIndex = 22;
			this->pb_player1_4->TabStop = false;
			this->pb_player1_4->Visible = false;
			// 
			// pb_player1_5
			// 
			this->pb_player1_5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_player1_5.Image")));
			this->pb_player1_5->Location = System::Drawing::Point(800, 550);
			this->pb_player1_5->Name = L"pb_player1_5";
			this->pb_player1_5->Size = System::Drawing::Size(71, 96);
			this->pb_player1_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_player1_5->TabIndex = 23;
			this->pb_player1_5->TabStop = false;
			this->pb_player1_5->Visible = false;
			// 
			// pb_player2_1
			// 
			this->pb_player2_1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_player2_1.Image")));
			this->pb_player2_1->Location = System::Drawing::Point(510, 430);
			this->pb_player2_1->Name = L"pb_player2_1";
			this->pb_player2_1->Size = System::Drawing::Size(71, 96);
			this->pb_player2_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_player2_1->TabIndex = 24;
			this->pb_player2_1->TabStop = false;
			this->pb_player2_1->Visible = false;
			// 
			// pb_player2_2
			// 
			this->pb_player2_2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_player2_2.Image")));
			this->pb_player2_2->Location = System::Drawing::Point(525, 460);
			this->pb_player2_2->Name = L"pb_player2_2";
			this->pb_player2_2->Size = System::Drawing::Size(71, 96);
			this->pb_player2_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_player2_2->TabIndex = 25;
			this->pb_player2_2->TabStop = false;
			this->pb_player2_2->Visible = false;
			// 
			// pb_player2_3
			// 
			this->pb_player2_3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_player2_3.Image")));
			this->pb_player2_3->Location = System::Drawing::Point(540, 490);
			this->pb_player2_3->Name = L"pb_player2_3";
			this->pb_player2_3->Size = System::Drawing::Size(71, 96);
			this->pb_player2_3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_player2_3->TabIndex = 26;
			this->pb_player2_3->TabStop = false;
			this->pb_player2_3->Visible = false;
			// 
			// pb_player2_4
			// 
			this->pb_player2_4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_player2_4.Image")));
			this->pb_player2_4->Location = System::Drawing::Point(555, 520);
			this->pb_player2_4->Name = L"pb_player2_4";
			this->pb_player2_4->Size = System::Drawing::Size(71, 96);
			this->pb_player2_4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_player2_4->TabIndex = 27;
			this->pb_player2_4->TabStop = false;
			this->pb_player2_4->Visible = false;
			// 
			// pb_player2_5
			// 
			this->pb_player2_5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_player2_5.Image")));
			this->pb_player2_5->Location = System::Drawing::Point(570, 550);
			this->pb_player2_5->Name = L"pb_player2_5";
			this->pb_player2_5->Size = System::Drawing::Size(71, 96);
			this->pb_player2_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_player2_5->TabIndex = 28;
			this->pb_player2_5->TabStop = false;
			this->pb_player2_5->Visible = false;
			// 
			// pb_player3_1
			// 
			this->pb_player3_1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_player3_1.Image")));
			this->pb_player3_1->Location = System::Drawing::Point(260, 430);
			this->pb_player3_1->Name = L"pb_player3_1";
			this->pb_player3_1->Size = System::Drawing::Size(71, 96);
			this->pb_player3_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_player3_1->TabIndex = 29;
			this->pb_player3_1->TabStop = false;
			this->pb_player3_1->Visible = false;
			// 
			// pb_player3_2
			// 
			this->pb_player3_2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_player3_2.Image")));
			this->pb_player3_2->Location = System::Drawing::Point(275, 460);
			this->pb_player3_2->Name = L"pb_player3_2";
			this->pb_player3_2->Size = System::Drawing::Size(71, 96);
			this->pb_player3_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_player3_2->TabIndex = 30;
			this->pb_player3_2->TabStop = false;
			this->pb_player3_2->Visible = false;
			// 
			// pb_player3_3
			// 
			this->pb_player3_3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_player3_3.Image")));
			this->pb_player3_3->Location = System::Drawing::Point(290, 490);
			this->pb_player3_3->Name = L"pb_player3_3";
			this->pb_player3_3->Size = System::Drawing::Size(71, 96);
			this->pb_player3_3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_player3_3->TabIndex = 31;
			this->pb_player3_3->TabStop = false;
			this->pb_player3_3->Visible = false;
			// 
			// pb_player3_4
			// 
			this->pb_player3_4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_player3_4.Image")));
			this->pb_player3_4->Location = System::Drawing::Point(305, 520);
			this->pb_player3_4->Name = L"pb_player3_4";
			this->pb_player3_4->Size = System::Drawing::Size(71, 96);
			this->pb_player3_4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_player3_4->TabIndex = 32;
			this->pb_player3_4->TabStop = false;
			this->pb_player3_4->Visible = false;
			// 
			// pb_player3_5
			// 
			this->pb_player3_5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_player3_5.Image")));
			this->pb_player3_5->Location = System::Drawing::Point(320, 550);
			this->pb_player3_5->Name = L"pb_player3_5";
			this->pb_player3_5->Size = System::Drawing::Size(71, 96);
			this->pb_player3_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_player3_5->TabIndex = 33;
			this->pb_player3_5->TabStop = false;
			this->pb_player3_5->Visible = false;
			// 
			// pb_dealer_1
			// 
			this->pb_dealer_1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_dealer_1.Image")));
			this->pb_dealer_1->Location = System::Drawing::Point(700, 110);
			this->pb_dealer_1->Name = L"pb_dealer_1";
			this->pb_dealer_1->Size = System::Drawing::Size(71, 96);
			this->pb_dealer_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_dealer_1->TabIndex = 34;
			this->pb_dealer_1->TabStop = false;
			this->pb_dealer_1->Visible = false;
			// 
			// pb_dealer_2
			// 
			this->pb_dealer_2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_dealer_2.Image")));
			this->pb_dealer_2->Location = System::Drawing::Point(715, 140);
			this->pb_dealer_2->Name = L"pb_dealer_2";
			this->pb_dealer_2->Size = System::Drawing::Size(71, 96);
			this->pb_dealer_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_dealer_2->TabIndex = 35;
			this->pb_dealer_2->TabStop = false;
			this->pb_dealer_2->Visible = false;
			// 
			// pb_dealer_3
			// 
			this->pb_dealer_3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_dealer_3.Image")));
			this->pb_dealer_3->Location = System::Drawing::Point(730, 170);
			this->pb_dealer_3->Name = L"pb_dealer_3";
			this->pb_dealer_3->Size = System::Drawing::Size(71, 96);
			this->pb_dealer_3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_dealer_3->TabIndex = 36;
			this->pb_dealer_3->TabStop = false;
			this->pb_dealer_3->Visible = false;
			// 
			// pb_dealer_4
			// 
			this->pb_dealer_4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_dealer_4.Image")));
			this->pb_dealer_4->Location = System::Drawing::Point(745, 200);
			this->pb_dealer_4->Name = L"pb_dealer_4";
			this->pb_dealer_4->Size = System::Drawing::Size(71, 96);
			this->pb_dealer_4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_dealer_4->TabIndex = 37;
			this->pb_dealer_4->TabStop = false;
			this->pb_dealer_4->Visible = false;
			// 
			// pb_dealer_5
			// 
			this->pb_dealer_5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_dealer_5.Image")));
			this->pb_dealer_5->Location = System::Drawing::Point(760, 230);
			this->pb_dealer_5->Name = L"pb_dealer_5";
			this->pb_dealer_5->Size = System::Drawing::Size(71, 96);
			this->pb_dealer_5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_dealer_5->TabIndex = 38;
			this->pb_dealer_5->TabStop = false;
			this->pb_dealer_5->Visible = false;
			// 
			// pb_deckImage
			// 
			this->pb_deckImage->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_deckImage.Image")));
			this->pb_deckImage->Location = System::Drawing::Point(550, 110);
			this->pb_deckImage->Name = L"pb_deckImage";
			this->pb_deckImage->Size = System::Drawing::Size(71, 96);
			this->pb_deckImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_deckImage->TabIndex = 39;
			this->pb_deckImage->TabStop = false;
			this->pb_deckImage->Visible = false;
			// 
			// pb_dealtCard
			// 
			this->pb_dealtCard->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pb_dealtCard.Image")));
			this->pb_dealtCard->Location = System::Drawing::Point(550, 110);
			this->pb_dealtCard->Name = L"pb_dealtCard";
			this->pb_dealtCard->Size = System::Drawing::Size(71, 96);
			this->pb_dealtCard->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pb_dealtCard->TabIndex = 40;
			this->pb_dealtCard->TabStop = false;
			this->pb_dealtCard->Visible = false;
			// 
			// btn_deal
			// 
			this->btn_deal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_deal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_deal->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_deal->Location = System::Drawing::Point(350, 110);
			this->btn_deal->Name = L"btn_deal";
			this->btn_deal->Size = System::Drawing::Size(150, 96);
			this->btn_deal->TabIndex = 41;
			this->btn_deal->Text = L"Deal\r\nAgain";
			this->btn_deal->UseVisualStyleBackColor = false;
			this->btn_deal->Visible = false;
			this->btn_deal->Click += gcnew System::EventHandler(this, &Form1::btn_deal_Click);
			// 
			// lbl_testRandomness
			// 
			this->lbl_testRandomness->AutoSize = true;
			this->lbl_testRandomness->Location = System::Drawing::Point(1, 694);
			this->lbl_testRandomness->Name = L"lbl_testRandomness";
			this->lbl_testRandomness->Size = System::Drawing::Size(35, 13);
			this->lbl_testRandomness->TabIndex = 42;
			this->lbl_testRandomness->Text = L"label1";
			this->lbl_testRandomness->Visible = false;
			// 
			// timer_dealCard
			// 
			this->timer_dealCard->Tick += gcnew System::EventHandler(this, &Form1::timer_dealCard_Tick);
			// 
			// lbl_player1_1_name
			// 
			this->lbl_player1_1_name->AutoSize = true;
			this->lbl_player1_1_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_player1_1_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_player1_1_name->Location = System::Drawing::Point(815, 430);
			this->lbl_player1_1_name->Name = L"lbl_player1_1_name";
			this->lbl_player1_1_name->Size = System::Drawing::Size(0, 13);
			this->lbl_player1_1_name->TabIndex = 43;
			this->lbl_player1_1_name->Visible = false;
			// 
			// lbl_player1_2_name
			// 
			this->lbl_player1_2_name->AutoSize = true;
			this->lbl_player1_2_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_player1_2_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_player1_2_name->Location = System::Drawing::Point(830, 460);
			this->lbl_player1_2_name->Name = L"lbl_player1_2_name";
			this->lbl_player1_2_name->Size = System::Drawing::Size(0, 13);
			this->lbl_player1_2_name->TabIndex = 44;
			this->lbl_player1_2_name->Visible = false;
			// 
			// lbl_player1_3_name
			// 
			this->lbl_player1_3_name->AutoSize = true;
			this->lbl_player1_3_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_player1_3_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_player1_3_name->Location = System::Drawing::Point(845, 490);
			this->lbl_player1_3_name->Name = L"lbl_player1_3_name";
			this->lbl_player1_3_name->Size = System::Drawing::Size(0, 13);
			this->lbl_player1_3_name->TabIndex = 45;
			this->lbl_player1_3_name->Visible = false;
			// 
			// lbl_player1_4_name
			// 
			this->lbl_player1_4_name->AutoSize = true;
			this->lbl_player1_4_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_player1_4_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_player1_4_name->Location = System::Drawing::Point(860, 520);
			this->lbl_player1_4_name->Name = L"lbl_player1_4_name";
			this->lbl_player1_4_name->Size = System::Drawing::Size(0, 13);
			this->lbl_player1_4_name->TabIndex = 46;
			this->lbl_player1_4_name->Visible = false;
			// 
			// lbl_player1_5_name
			// 
			this->lbl_player1_5_name->AutoSize = true;
			this->lbl_player1_5_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_player1_5_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_player1_5_name->Location = System::Drawing::Point(875, 550);
			this->lbl_player1_5_name->Name = L"lbl_player1_5_name";
			this->lbl_player1_5_name->Size = System::Drawing::Size(0, 13);
			this->lbl_player1_5_name->TabIndex = 47;
			this->lbl_player1_5_name->Visible = false;
			// 
			// lbl_player2_1_name
			// 
			this->lbl_player2_1_name->AutoSize = true;
			this->lbl_player2_1_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_player2_1_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_player2_1_name->Location = System::Drawing::Point(585, 430);
			this->lbl_player2_1_name->Name = L"lbl_player2_1_name";
			this->lbl_player2_1_name->Size = System::Drawing::Size(0, 13);
			this->lbl_player2_1_name->TabIndex = 48;
			this->lbl_player2_1_name->Visible = false;
			// 
			// lbl_player2_2_name
			// 
			this->lbl_player2_2_name->AutoSize = true;
			this->lbl_player2_2_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_player2_2_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_player2_2_name->Location = System::Drawing::Point(600, 460);
			this->lbl_player2_2_name->Name = L"lbl_player2_2_name";
			this->lbl_player2_2_name->Size = System::Drawing::Size(0, 13);
			this->lbl_player2_2_name->TabIndex = 49;
			this->lbl_player2_2_name->Visible = false;
			// 
			// lbl_player2_3_name
			// 
			this->lbl_player2_3_name->AutoSize = true;
			this->lbl_player2_3_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_player2_3_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_player2_3_name->Location = System::Drawing::Point(615, 490);
			this->lbl_player2_3_name->Name = L"lbl_player2_3_name";
			this->lbl_player2_3_name->Size = System::Drawing::Size(0, 13);
			this->lbl_player2_3_name->TabIndex = 50;
			this->lbl_player2_3_name->Visible = false;
			// 
			// lbl_player2_4_name
			// 
			this->lbl_player2_4_name->AutoSize = true;
			this->lbl_player2_4_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_player2_4_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_player2_4_name->Location = System::Drawing::Point(630, 520);
			this->lbl_player2_4_name->Name = L"lbl_player2_4_name";
			this->lbl_player2_4_name->Size = System::Drawing::Size(0, 13);
			this->lbl_player2_4_name->TabIndex = 51;
			this->lbl_player2_4_name->Visible = false;
			// 
			// lbl_player2_5_name
			// 
			this->lbl_player2_5_name->AutoSize = true;
			this->lbl_player2_5_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_player2_5_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_player2_5_name->Location = System::Drawing::Point(645, 550);
			this->lbl_player2_5_name->Name = L"lbl_player2_5_name";
			this->lbl_player2_5_name->Size = System::Drawing::Size(0, 13);
			this->lbl_player2_5_name->TabIndex = 52;
			this->lbl_player2_5_name->Visible = false;
			// 
			// lbl_player3_1_name
			// 
			this->lbl_player3_1_name->AutoSize = true;
			this->lbl_player3_1_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_player3_1_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_player3_1_name->Location = System::Drawing::Point(335, 434);
			this->lbl_player3_1_name->Name = L"lbl_player3_1_name";
			this->lbl_player3_1_name->Size = System::Drawing::Size(0, 13);
			this->lbl_player3_1_name->TabIndex = 53;
			this->lbl_player3_1_name->Visible = false;
			// 
			// lbl_player3_2_name
			// 
			this->lbl_player3_2_name->AutoSize = true;
			this->lbl_player3_2_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_player3_2_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_player3_2_name->Location = System::Drawing::Point(350, 460);
			this->lbl_player3_2_name->Name = L"lbl_player3_2_name";
			this->lbl_player3_2_name->Size = System::Drawing::Size(0, 13);
			this->lbl_player3_2_name->TabIndex = 54;
			this->lbl_player3_2_name->Visible = false;
			// 
			// lbl_player3_3_name
			// 
			this->lbl_player3_3_name->AutoSize = true;
			this->lbl_player3_3_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_player3_3_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_player3_3_name->Location = System::Drawing::Point(365, 490);
			this->lbl_player3_3_name->Name = L"lbl_player3_3_name";
			this->lbl_player3_3_name->Size = System::Drawing::Size(0, 13);
			this->lbl_player3_3_name->TabIndex = 55;
			this->lbl_player3_3_name->Visible = false;
			// 
			// lbl_player3_4_name
			// 
			this->lbl_player3_4_name->AutoSize = true;
			this->lbl_player3_4_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_player3_4_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_player3_4_name->Location = System::Drawing::Point(380, 520);
			this->lbl_player3_4_name->Name = L"lbl_player3_4_name";
			this->lbl_player3_4_name->Size = System::Drawing::Size(0, 13);
			this->lbl_player3_4_name->TabIndex = 56;
			this->lbl_player3_4_name->Visible = false;
			// 
			// lbl_player3_5_name
			// 
			this->lbl_player3_5_name->AutoSize = true;
			this->lbl_player3_5_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_player3_5_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_player3_5_name->Location = System::Drawing::Point(395, 550);
			this->lbl_player3_5_name->Name = L"lbl_player3_5_name";
			this->lbl_player3_5_name->Size = System::Drawing::Size(0, 13);
			this->lbl_player3_5_name->TabIndex = 57;
			this->lbl_player3_5_name->Visible = false;
			// 
			// lbl_dealer_1_name
			// 
			this->lbl_dealer_1_name->AutoSize = true;
			this->lbl_dealer_1_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_dealer_1_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_dealer_1_name->Location = System::Drawing::Point(777, 110);
			this->lbl_dealer_1_name->Name = L"lbl_dealer_1_name";
			this->lbl_dealer_1_name->Size = System::Drawing::Size(0, 13);
			this->lbl_dealer_1_name->TabIndex = 58;
			this->lbl_dealer_1_name->Visible = false;
			// 
			// lbl_dealer_2_name
			// 
			this->lbl_dealer_2_name->AutoSize = true;
			this->lbl_dealer_2_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_dealer_2_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_dealer_2_name->Location = System::Drawing::Point(792, 145);
			this->lbl_dealer_2_name->Name = L"lbl_dealer_2_name";
			this->lbl_dealer_2_name->Size = System::Drawing::Size(0, 13);
			this->lbl_dealer_2_name->TabIndex = 59;
			this->lbl_dealer_2_name->Visible = false;
			// 
			// lbl_dealer_3_name
			// 
			this->lbl_dealer_3_name->AutoSize = true;
			this->lbl_dealer_3_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_dealer_3_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_dealer_3_name->Location = System::Drawing::Point(807, 175);
			this->lbl_dealer_3_name->Name = L"lbl_dealer_3_name";
			this->lbl_dealer_3_name->Size = System::Drawing::Size(0, 13);
			this->lbl_dealer_3_name->TabIndex = 60;
			this->lbl_dealer_3_name->Visible = false;
			// 
			// lbl_dealer_4_name
			// 
			this->lbl_dealer_4_name->AutoSize = true;
			this->lbl_dealer_4_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_dealer_4_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_dealer_4_name->Location = System::Drawing::Point(822, 204);
			this->lbl_dealer_4_name->Name = L"lbl_dealer_4_name";
			this->lbl_dealer_4_name->Size = System::Drawing::Size(0, 13);
			this->lbl_dealer_4_name->TabIndex = 61;
			this->lbl_dealer_4_name->Visible = false;
			// 
			// lbl_dealer_5_name
			// 
			this->lbl_dealer_5_name->AutoSize = true;
			this->lbl_dealer_5_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_dealer_5_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_dealer_5_name->Location = System::Drawing::Point(836, 232);
			this->lbl_dealer_5_name->Name = L"lbl_dealer_5_name";
			this->lbl_dealer_5_name->Size = System::Drawing::Size(0, 13);
			this->lbl_dealer_5_name->TabIndex = 62;
			this->lbl_dealer_5_name->Visible = false;
			// 
			// lbl_player1_handValue
			// 
			this->lbl_player1_handValue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_player1_handValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_player1_handValue->ForeColor = System::Drawing::Color::White;
			this->lbl_player1_handValue->Location = System::Drawing::Point(740, 375);
			this->lbl_player1_handValue->Name = L"lbl_player1_handValue";
			this->lbl_player1_handValue->Size = System::Drawing::Size(71, 50);
			this->lbl_player1_handValue->TabIndex = 63;
			this->lbl_player1_handValue->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl_player1_handValue->Visible = false;
			// 
			// lbl_player2_handValue
			// 
			this->lbl_player2_handValue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_player2_handValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_player2_handValue->ForeColor = System::Drawing::Color::White;
			this->lbl_player2_handValue->Location = System::Drawing::Point(510, 375);
			this->lbl_player2_handValue->Name = L"lbl_player2_handValue";
			this->lbl_player2_handValue->Size = System::Drawing::Size(71, 50);
			this->lbl_player2_handValue->TabIndex = 64;
			this->lbl_player2_handValue->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl_player2_handValue->Visible = false;
			// 
			// lbl_player3_handValue
			// 
			this->lbl_player3_handValue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_player3_handValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_player3_handValue->ForeColor = System::Drawing::Color::White;
			this->lbl_player3_handValue->Location = System::Drawing::Point(260, 375);
			this->lbl_player3_handValue->Name = L"lbl_player3_handValue";
			this->lbl_player3_handValue->Size = System::Drawing::Size(71, 50);
			this->lbl_player3_handValue->TabIndex = 65;
			this->lbl_player3_handValue->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl_player3_handValue->Visible = false;
			// 
			// lbl_player1_handValueTitle
			// 
			this->lbl_player1_handValueTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_player1_handValueTitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_player1_handValueTitle->Location = System::Drawing::Point(740, 345);
			this->lbl_player1_handValueTitle->Name = L"lbl_player1_handValueTitle";
			this->lbl_player1_handValueTitle->Size = System::Drawing::Size(71, 30);
			this->lbl_player1_handValueTitle->TabIndex = 66;
			this->lbl_player1_handValueTitle->Text = L"Player 1\r\nHand Value";
			this->lbl_player1_handValueTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl_player1_handValueTitle->Visible = false;
			// 
			// lbl_player2_handValueTitle
			// 
			this->lbl_player2_handValueTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_player2_handValueTitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_player2_handValueTitle->Location = System::Drawing::Point(510, 345);
			this->lbl_player2_handValueTitle->Name = L"lbl_player2_handValueTitle";
			this->lbl_player2_handValueTitle->Size = System::Drawing::Size(71, 30);
			this->lbl_player2_handValueTitle->TabIndex = 67;
			this->lbl_player2_handValueTitle->Text = L"Player 2\r\nHand Value";
			this->lbl_player2_handValueTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl_player2_handValueTitle->Visible = false;
			// 
			// lbl_player3_handValueTitle
			// 
			this->lbl_player3_handValueTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_player3_handValueTitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_player3_handValueTitle->Location = System::Drawing::Point(260, 345);
			this->lbl_player3_handValueTitle->Name = L"lbl_player3_handValueTitle";
			this->lbl_player3_handValueTitle->Size = System::Drawing::Size(71, 30);
			this->lbl_player3_handValueTitle->TabIndex = 68;
			this->lbl_player3_handValueTitle->Text = L"Player 3\r\nHand Value";
			this->lbl_player3_handValueTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl_player3_handValueTitle->Visible = false;
			// 
			// lbl_player1_handStatus
			// 
			this->lbl_player1_handStatus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_player1_handStatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_player1_handStatus->ForeColor = System::Drawing::Color::White;
			this->lbl_player1_handStatus->Location = System::Drawing::Point(818, 360);
			this->lbl_player1_handStatus->Name = L"lbl_player1_handStatus";
			this->lbl_player1_handStatus->Size = System::Drawing::Size(140, 65);
			this->lbl_player1_handStatus->TabIndex = 69;
			this->lbl_player1_handStatus->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->lbl_player1_handStatus->Visible = false;
			// 
			// lbl_player2_handStatus
			// 
			this->lbl_player2_handStatus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_player2_handStatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_player2_handStatus->ForeColor = System::Drawing::Color::White;
			this->lbl_player2_handStatus->Location = System::Drawing::Point(587, 360);
			this->lbl_player2_handStatus->Name = L"lbl_player2_handStatus";
			this->lbl_player2_handStatus->Size = System::Drawing::Size(140, 65);
			this->lbl_player2_handStatus->TabIndex = 70;
			this->lbl_player2_handStatus->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->lbl_player2_handStatus->Visible = false;
			// 
			// lbl_player3_handStatus
			// 
			this->lbl_player3_handStatus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_player3_handStatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_player3_handStatus->ForeColor = System::Drawing::Color::White;
			this->lbl_player3_handStatus->Location = System::Drawing::Point(337, 360);
			this->lbl_player3_handStatus->Name = L"lbl_player3_handStatus";
			this->lbl_player3_handStatus->Size = System::Drawing::Size(140, 65);
			this->lbl_player3_handStatus->TabIndex = 71;
			this->lbl_player3_handStatus->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->lbl_player3_handStatus->Visible = false;
			// 
			// lbl_dealer_handValue
			// 
			this->lbl_dealer_handValue->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_dealer_handValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_dealer_handValue->ForeColor = System::Drawing::Color::White;
			this->lbl_dealer_handValue->Location = System::Drawing::Point(550, 247);
			this->lbl_dealer_handValue->Name = L"lbl_dealer_handValue";
			this->lbl_dealer_handValue->Size = System::Drawing::Size(71, 50);
			this->lbl_dealer_handValue->TabIndex = 72;
			this->lbl_dealer_handValue->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl_dealer_handValue->Visible = false;
			// 
			// lbl_dealer_handValueTitle
			// 
			this->lbl_dealer_handValueTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_dealer_handValueTitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_dealer_handValueTitle->Location = System::Drawing::Point(549, 217);
			this->lbl_dealer_handValueTitle->Name = L"lbl_dealer_handValueTitle";
			this->lbl_dealer_handValueTitle->Size = System::Drawing::Size(71, 30);
			this->lbl_dealer_handValueTitle->TabIndex = 73;
			this->lbl_dealer_handValueTitle->Text = L"Dealer\'s\r\nHand Value";
			this->lbl_dealer_handValueTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl_dealer_handValueTitle->Visible = false;
			// 
			// lbl_gameOver
			// 
			this->lbl_gameOver->BackColor = System::Drawing::Color::Red;
			this->lbl_gameOver->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_gameOver->Location = System::Drawing::Point(500, 297);
			this->lbl_gameOver->Name = L"lbl_gameOver";
			this->lbl_gameOver->Size = System::Drawing::Size(194, 50);
			this->lbl_gameOver->TabIndex = 74;
			this->lbl_gameOver->Text = L"Game Over. ";
			this->lbl_gameOver->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl_gameOver->Visible = false;
			// 
			// btn_player1_stand
			// 
			this->btn_player1_stand->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_player1_stand->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_player1_stand->Location = System::Drawing::Point(740, 660);
			this->btn_player1_stand->Name = L"btn_player1_stand";
			this->btn_player1_stand->Size = System::Drawing::Size(50, 30);
			this->btn_player1_stand->TabIndex = 76;
			this->btn_player1_stand->Text = L"Stand";
			this->btn_player1_stand->UseVisualStyleBackColor = false;
			this->btn_player1_stand->Visible = false;
			this->btn_player1_stand->Click += gcnew System::EventHandler(this, &Form1::btn_player1_stand_Click);
			// 
			// btn_player1_hit
			// 
			this->btn_player1_hit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_player1_hit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_player1_hit->Location = System::Drawing::Point(811, 660);
			this->btn_player1_hit->Name = L"btn_player1_hit";
			this->btn_player1_hit->Size = System::Drawing::Size(50, 30);
			this->btn_player1_hit->TabIndex = 77;
			this->btn_player1_hit->Text = L"Hit";
			this->btn_player1_hit->UseVisualStyleBackColor = false;
			this->btn_player1_hit->Visible = false;
			this->btn_player1_hit->Click += gcnew System::EventHandler(this, &Form1::btn_player1_hit_Click);
			// 
			// btn_player2_stand
			// 
			this->btn_player2_stand->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_player2_stand->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_player2_stand->Location = System::Drawing::Point(510, 660);
			this->btn_player2_stand->Name = L"btn_player2_stand";
			this->btn_player2_stand->Size = System::Drawing::Size(50, 30);
			this->btn_player2_stand->TabIndex = 78;
			this->btn_player2_stand->Text = L"Stand";
			this->btn_player2_stand->UseVisualStyleBackColor = false;
			this->btn_player2_stand->Visible = false;
			this->btn_player2_stand->Click += gcnew System::EventHandler(this, &Form1::btn_player2_stand_Click);
			// 
			// btn_player3_stand
			// 
			this->btn_player3_stand->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_player3_stand->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_player3_stand->Location = System::Drawing::Point(260, 660);
			this->btn_player3_stand->Name = L"btn_player3_stand";
			this->btn_player3_stand->Size = System::Drawing::Size(50, 30);
			this->btn_player3_stand->TabIndex = 79;
			this->btn_player3_stand->Text = L"Stand";
			this->btn_player3_stand->UseVisualStyleBackColor = false;
			this->btn_player3_stand->Visible = false;
			this->btn_player3_stand->Click += gcnew System::EventHandler(this, &Form1::btn_player3_stand_Click);
			// 
			// btn_player2_hit
			// 
			this->btn_player2_hit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_player2_hit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_player2_hit->Location = System::Drawing::Point(576, 660);
			this->btn_player2_hit->Name = L"btn_player2_hit";
			this->btn_player2_hit->Size = System::Drawing::Size(50, 30);
			this->btn_player2_hit->TabIndex = 80;
			this->btn_player2_hit->Text = L"Hit";
			this->btn_player2_hit->UseVisualStyleBackColor = false;
			this->btn_player2_hit->Visible = false;
			this->btn_player2_hit->Click += gcnew System::EventHandler(this, &Form1::btn_player2_hit_Click);
			// 
			// btn_player3_hit
			// 
			this->btn_player3_hit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_player3_hit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btn_player3_hit->Location = System::Drawing::Point(326, 660);
			this->btn_player3_hit->Name = L"btn_player3_hit";
			this->btn_player3_hit->Size = System::Drawing::Size(50, 30);
			this->btn_player3_hit->TabIndex = 81;
			this->btn_player3_hit->Text = L"Hit";
			this->btn_player3_hit->UseVisualStyleBackColor = false;
			this->btn_player3_hit->Visible = false;
			this->btn_player3_hit->Click += gcnew System::EventHandler(this, &Form1::btn_player3_hit_Click);
			// 
			// lbl_dealer_handStatus
			// 
			this->lbl_dealer_handStatus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_dealer_handStatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_dealer_handStatus->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_dealer_handStatus->Location = System::Drawing::Point(325, 247);
			this->lbl_dealer_handStatus->Name = L"lbl_dealer_handStatus";
			this->lbl_dealer_handStatus->Size = System::Drawing::Size(225, 50);
			this->lbl_dealer_handStatus->TabIndex = 82;
			this->lbl_dealer_handStatus->Text = L"Dealer stands with";
			this->lbl_dealer_handStatus->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lbl_dealer_handStatus->Visible = false;
			// 
			// btn_stats
			// 
			this->btn_stats->BackColor = System::Drawing::Color::Yellow;
			this->btn_stats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_stats->Location = System::Drawing::Point(14, 423);
			this->btn_stats->Name = L"btn_stats";
			this->btn_stats->Size = System::Drawing::Size(220, 80);
			this->btn_stats->TabIndex = 83;
			this->btn_stats->Text = L"Statistics";
			this->btn_stats->UseVisualStyleBackColor = false;
			this->btn_stats->Visible = false;
			this->btn_stats->Click += gcnew System::EventHandler(this, &Form1::btn_stats_Click);
			// 
			// btn_darkGreen
			// 
			this->btn_darkGreen->BackColor = System::Drawing::Color::DarkGreen;
			this->btn_darkGreen->Location = System::Drawing::Point(30, 321);
			this->btn_darkGreen->Name = L"btn_darkGreen";
			this->btn_darkGreen->Size = System::Drawing::Size(20, 20);
			this->btn_darkGreen->TabIndex = 84;
			this->btn_darkGreen->UseVisualStyleBackColor = false;
			this->btn_darkGreen->Visible = false;
			// 
			// btn_mediumGreen
			// 
			this->btn_mediumGreen->BackColor = System::Drawing::Color::ForestGreen;
			this->btn_mediumGreen->Location = System::Drawing::Point(56, 321);
			this->btn_mediumGreen->Name = L"btn_mediumGreen";
			this->btn_mediumGreen->Size = System::Drawing::Size(20, 20);
			this->btn_mediumGreen->TabIndex = 85;
			this->btn_mediumGreen->UseVisualStyleBackColor = false;
			this->btn_mediumGreen->Visible = false;
			// 
			// btn_lightGreen
			// 
			this->btn_lightGreen->BackColor = System::Drawing::Color::LightGreen;
			this->btn_lightGreen->Location = System::Drawing::Point(82, 321);
			this->btn_lightGreen->Name = L"btn_lightGreen";
			this->btn_lightGreen->Size = System::Drawing::Size(20, 20);
			this->btn_lightGreen->TabIndex = 86;
			this->btn_lightGreen->UseVisualStyleBackColor = false;
			this->btn_lightGreen->Visible = false;
			// 
			// timer_btnDeal
			// 
			this->timer_btnDeal->Interval = 400;
			this->timer_btnDeal->Tick += gcnew System::EventHandler(this, &Form1::timer_btnDeal_Tick);
			// 
			// timer_btn_continue
			// 
			this->timer_btn_continue->Interval = 400;
			this->timer_btn_continue->Tick += gcnew System::EventHandler(this, &Form1::timer_btn_continue_Tick);
			// 
			// lbl_gameNumber
			// 
			this->lbl_gameNumber->AutoSize = true;
			this->lbl_gameNumber->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_gameNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_gameNumber->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->lbl_gameNumber->Location = System::Drawing::Point(245, 84);
			this->lbl_gameNumber->Name = L"lbl_gameNumber";
			this->lbl_gameNumber->Size = System::Drawing::Size(51, 16);
			this->lbl_gameNumber->TabIndex = 87;
			this->lbl_gameNumber->Text = L"label1";
			this->lbl_gameNumber->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1008, 707);
			this->Controls->Add(this->lbl_gameNumber);
			this->Controls->Add(this->btn_lightGreen);
			this->Controls->Add(this->btn_mediumGreen);
			this->Controls->Add(this->btn_darkGreen);
			this->Controls->Add(this->btn_stats);
			this->Controls->Add(this->lbl_dealer_handStatus);
			this->Controls->Add(this->btn_player3_hit);
			this->Controls->Add(this->btn_player2_hit);
			this->Controls->Add(this->btn_player3_stand);
			this->Controls->Add(this->btn_player2_stand);
			this->Controls->Add(this->btn_player1_hit);
			this->Controls->Add(this->btn_player1_stand);
			this->Controls->Add(this->lbl_gameOver);
			this->Controls->Add(this->lbl_dealer_handValueTitle);
			this->Controls->Add(this->lbl_dealer_handValue);
			this->Controls->Add(this->lbl_player3_handStatus);
			this->Controls->Add(this->lbl_player2_handStatus);
			this->Controls->Add(this->lbl_player1_handStatus);
			this->Controls->Add(this->lbl_player3_handValueTitle);
			this->Controls->Add(this->lbl_player2_handValueTitle);
			this->Controls->Add(this->lbl_player1_handValueTitle);
			this->Controls->Add(this->lbl_player3_handValue);
			this->Controls->Add(this->lbl_player2_handValue);
			this->Controls->Add(this->lbl_player1_handValue);
			this->Controls->Add(this->lbl_dealer_5_name);
			this->Controls->Add(this->lbl_dealer_4_name);
			this->Controls->Add(this->lbl_dealer_3_name);
			this->Controls->Add(this->lbl_dealer_2_name);
			this->Controls->Add(this->lbl_dealer_1_name);
			this->Controls->Add(this->lbl_player3_5_name);
			this->Controls->Add(this->lbl_player3_4_name);
			this->Controls->Add(this->lbl_player3_3_name);
			this->Controls->Add(this->lbl_player3_2_name);
			this->Controls->Add(this->lbl_player3_1_name);
			this->Controls->Add(this->lbl_player2_5_name);
			this->Controls->Add(this->lbl_player2_4_name);
			this->Controls->Add(this->lbl_player2_3_name);
			this->Controls->Add(this->lbl_player2_2_name);
			this->Controls->Add(this->lbl_player2_1_name);
			this->Controls->Add(this->lbl_player1_5_name);
			this->Controls->Add(this->lbl_player1_4_name);
			this->Controls->Add(this->lbl_player1_3_name);
			this->Controls->Add(this->lbl_player1_2_name);
			this->Controls->Add(this->lbl_player1_1_name);
			this->Controls->Add(this->lbl_testRandomness);
			this->Controls->Add(this->btn_deal);
			this->Controls->Add(this->pb_dealtCard);
			this->Controls->Add(this->pb_deckImage);
			this->Controls->Add(this->pb_dealer_5);
			this->Controls->Add(this->pb_dealer_4);
			this->Controls->Add(this->pb_dealer_3);
			this->Controls->Add(this->pb_dealer_2);
			this->Controls->Add(this->pb_dealer_1);
			this->Controls->Add(this->pb_player3_5);
			this->Controls->Add(this->pb_player3_4);
			this->Controls->Add(this->pb_player3_3);
			this->Controls->Add(this->pb_player3_2);
			this->Controls->Add(this->pb_player3_1);
			this->Controls->Add(this->pb_player2_5);
			this->Controls->Add(this->pb_player2_4);
			this->Controls->Add(this->pb_player2_3);
			this->Controls->Add(this->pb_player2_2);
			this->Controls->Add(this->pb_player2_1);
			this->Controls->Add(this->pb_player1_5);
			this->Controls->Add(this->pb_player1_4);
			this->Controls->Add(this->pb_player1_3);
			this->Controls->Add(this->pb_player1_2);
			this->Controls->Add(this->pb_player1_1);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->lbl_pg1_instructions2);
			this->Controls->Add(this->btn_continue);
			this->Controls->Add(this->tb_userName);
			this->Controls->Add(this->btn_login);
			this->Controls->Add(this->lbl_pg1_instructions);
			this->Controls->Add(this->btn_rules);
			this->Controls->Add(this->pb_deckDown);
			this->Controls->Add(this->pb_deckUp);
			this->Controls->Add(this->pb_queen);
			this->Controls->Add(this->pb_ace);
			this->Controls->Add(this->btn_showCurrentTime);
			this->Controls->Add(this->lbl_elapsedTime);
			this->Controls->Add(this->lbl_elapsedTime_title);
			this->Controls->Add(this->lbl_currentTime);
			this->Controls->Add(this->lbl_currentTime_title);
			this->Controls->Add(this->lbl_startTime_title);
			this->Controls->Add(this->lbl_startTime);
			this->Controls->Add(this->lbl_pg1_header);
			this->Name = L"Form1";
			this->Text = L"Robert\'s Black Jack Parlor";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_ace))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_queen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_deckUp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_deckDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player1_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player1_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player1_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player1_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player1_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player2_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player2_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player2_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player2_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player2_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player3_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player3_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player3_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player3_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_player3_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_dealer_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_dealer_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_dealer_3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_dealer_4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_dealer_5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_deckImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pb_dealtCard))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

/*#############################################################################
###############################################################################
###############################################################################
###
###                    BEGIN: CUSTOM-BUILT FUNCTIONS
###
###############################################################################
###############################################################################
#############################################################################*/

	/**************************************************************************
	***************************************************************************
	***
	*** checkForBlackJack()
	***
	*** Determine if any of the players have 21 with only 2 cards
	***
	***************************************************************************
	**************************************************************************/
	void checkForBlackJack()
	{
		const int BLACK_JACK = 21;

		if ( player1_handValue == BLACK_JACK )
		{
			boolPlayer1_handActive = false;
			intPlayer1_gamesWonCount++;
			intPlayer1_gamesWonCount_blackjack++;
			lbl_player1_handStatus->Text = "Black Jack!";
			lbl_player1_handStatus->Visible = true;
			activePlayer++;
		}
		if ( player2_handValue == BLACK_JACK )
		{
			boolPlayer2_handActive = false;
			intPlayer2_gamesWonCount++;
			intPlayer2_gamesWonCount_blackjack++;
			lbl_player2_handStatus->Text = "Black Jack!";
			lbl_player2_handStatus->Visible = true;
			activePlayer++;
		}
		if ( player3_handValue == BLACK_JACK )
		{
			boolPlayer3_handActive = false;
			intPlayer3_gamesWonCount++;
			intPlayer3_gamesWonCount_blackjack++;
			lbl_player3_handStatus->Text = "Black Jack!";
			lbl_player3_handStatus->Visible = true;
			activePlayer++;
		}
	}

	/**************************************************************************
	***************************************************************************
	***
	*** checkForDealerBlackJack()
	***
	*** Check to see if dealer has blackjack with only 2 cards
	***
	***************************************************************************
	**************************************************************************/
	void checkForDealerBlackJack()
	{
		const int BLACK_JACK = 21;

		if ( dealer_handValue == BLACK_JACK )
		{
			pb_dealer_1->Image = il_deck->Images[intDealersCards[0]];
			lbl_dealer_1_name->Visible = true;
			lbl_dealer_handStatus->Text = "Dealer wins with";
			lbl_dealer_handValueTitle->Visible = true;
			lbl_dealer_handValue->Visible = true;
			lbl_dealer_handStatus->Visible = true;

			if ( boolPlayer1_handActive )
			{
				boolPlayer1_handActive = false;
				lbl_player1_handStatus->Text = "House Wins!";
				intPlayer1_gamesLostCount++;
				intPlayer1_gamesLostCount_dealerBlackJack++;
				lbl_player1_handStatus->Visible = true;
			}
		
			if ( boolPlayer2_handActive )
			{
				boolPlayer2_handActive = false;
				lbl_player2_handStatus->Text = "House Wins!";
				intPlayer2_gamesLostCount++;
				intPlayer2_gamesLostCount_dealerBlackJack++;
				lbl_player2_handStatus->Visible = true;
			}

			if ( boolPlayer3_handActive )
			{
				boolPlayer3_handActive = false;
				lbl_player3_handStatus->Text = "House Wins!";
				intPlayer3_gamesLostCount++;
				intPlayer3_gamesLostCount_dealerBlackJack++;
				lbl_player3_handStatus->Visible = true;
			}
			lbl_gameOver->Visible = true;
			btn_deal->Visible = true;
			timer_btnDeal->Enabled = true;
		}
		else
		{
		}
	}

	/**************************************************************************
	***************************************************************************
	***
	*** startDeal()
	***
	*** Initialize 'new hand' values before starting the deal
	***
	***************************************************************************
	**************************************************************************/
	void startDeal()
	{
		gamesPlayedCount++;
		btn_deal->Visible = false;
		btn_deal->Text = "Deal Again";
		initializeScreen2();
		lbl_gameNumber->Text = "Game #" + gamesPlayedCount.ToString();
		lbl_gameNumber->Visible = true;

		// variable used in DEBUG function
		String^ message = "";

		// initialize each player's hands to NULL values (-1)
		for ( int count = 0; count < MAX_CARDS_IN_HAND; count++ )
		{
			intPlayer1Cards[count] = -1;
			intPlayer2Cards[count] = -1;
			intPlayer3Cards[count] = -1;
			intDealersCards[count] = -1;
		}

		// Set each player's next card slot to 1
		player1_activeCard = 1;
		player2_activeCard = 1;
		player3_activeCard = 1;
		dealer_activeCard = 1;

		// re-initialize each hands value
		player1_handValue = 0;
		player2_handValue = 0;
		player3_handValue = 0;
		dealer_handValue = 0;

		// set each player to active status
		boolPlayer1_handActive = true;
		boolPlayer2_handActive = true;
		boolPlayer3_handActive = true;
		boolDealer_handActive = true;

		// Set the active player to "before" the first one
		activePlayer = 0;

		// Set the first card to be dealt as physical card #1
		nextCardIndex = 0;

		// shuffle
		randomizeDeck();

		/**********************************************************************
		***********************************************************************
		***
		*** BEGIN: DEBUG FUNCTION
		***
		***********************************************************************
		**********************************************************************/
		// create and show debug list of card values
		//for ( int count = 0; count < DECK_SIZE; count++ )
		//{
		//	message = message + intCardIndex[count].ToString() + ", ";
		//}
		//lbl_testRandomness->Text = message;
		//lbl_testRandomness->Visible = true;
		/**********************************************************************
		***********************************************************************
		***
		*** END: DEBUG FUNCTION
		***
		***********************************************************************
		**********************************************************************/

		determineNextPlayer();
	}

	/**************************************************************************
	***************************************************************************
	***
	*** dealCard()
	***
	*** Creates the animation of the card being dealt to a player's hand
	***
	***************************************************************************
	**************************************************************************/
	void dealCard()
	{
		switch ( activePlayer )
		{
		case 1:
			{
				if ( pb_dealtCard->Location.Y + pb_dealtCard->Height >= pb_player1_1->Location.Y )
				{
					timer_dealCard->Enabled = false;
					pb_dealtCard->Location = pb_deckImage->Location;
					switch ( player1_activeCard )
					{
					case 1:
						{
							intPlayer1Cards[player1_activeCard-1] = intCardIndex[nextCardIndex];
							pb_player1_1->Image = il_deck->Images[intPlayer1Cards[player1_activeCard-1]];
							intPlayer1CardValues[player1_activeCard-1] = intCardPointValue[intPlayer1Cards[player1_activeCard-1]];
							lbl_player1_1_name->Text = strCardName[intPlayer1Cards[player1_activeCard-1]] + " = " +
													   intPlayer1CardValues[player1_activeCard-1].ToString();
							player1_handValue = player1_handValue + intPlayer1CardValues[player1_activeCard-1];
							testForAceInBustedHand();
							lbl_player1_handValue->Text = player1_handValue.ToString();
							pb_player1_1->BringToFront();
							pb_player1_1->Visible = true;
							lbl_player1_1_name->Visible = true;
							lbl_player1_handValue->Visible = true;
							lbl_player1_handValueTitle->Visible = true;
							player1_activeCard++;
							nextCardIndex++;
							determineNextPlayer();
							break;
						}
					case 2:
						{
							intPlayer1Cards[player1_activeCard-1] = intCardIndex[nextCardIndex];
							pb_player1_2->Image = il_deck->Images[intPlayer1Cards[player1_activeCard-1]];
							intPlayer1CardValues[player1_activeCard-1] = intCardPointValue[intPlayer1Cards[player1_activeCard-1]];
							lbl_player1_2_name->Text = strCardName[intPlayer1Cards[player1_activeCard-1]] + " = " +
													   intPlayer1CardValues[player1_activeCard-1].ToString();
							player1_handValue = player1_handValue + intPlayer1CardValues[player1_activeCard-1];
							testForAceInBustedHand();
							lbl_player1_handValue->Text = player1_handValue.ToString();
							pb_player1_2->BringToFront();
							pb_player1_2->Visible = true;
							lbl_player1_2_name->Visible = true;
							lbl_player1_handValue->Visible = true;
							lbl_player1_handValueTitle->Visible = true;
							player1_activeCard++;
							nextCardIndex++;
							determineNextPlayer();
							break;
						}
					case 3:
						{
							intPlayer1Cards[player1_activeCard-1] = intCardIndex[nextCardIndex];
							pb_player1_3->Image = il_deck->Images[intPlayer1Cards[player1_activeCard-1]];
							intPlayer1CardValues[player1_activeCard-1] = intCardPointValue[intPlayer1Cards[player1_activeCard-1]];
							lbl_player1_3_name->Text = strCardName[intPlayer1Cards[player1_activeCard-1]] + " = " +
													   intPlayer1CardValues[player1_activeCard-1].ToString();
							player1_handValue = player1_handValue + intPlayer1CardValues[player1_activeCard-1];
							testForAceInBustedHand();
							lbl_player1_handValue->Text = player1_handValue.ToString();
							pb_player1_3->BringToFront();
							pb_player1_3->Visible = true;
							lbl_player1_3_name->Visible = true;
							lbl_player1_handValue->Visible = true;
							lbl_player1_handValueTitle->Visible = true;
							testForBustedHand();
							player1_activeCard++;
							nextCardIndex++;
							determineNextPlayer();
							break;
						}
					case 4:
						{
							intPlayer1Cards[player1_activeCard-1] = intCardIndex[nextCardIndex];
							pb_player1_4->Image = il_deck->Images[intPlayer1Cards[player1_activeCard-1]];
							intPlayer1CardValues[player1_activeCard-1] = intCardPointValue[intPlayer1Cards[player1_activeCard-1]];
							lbl_player1_4_name->Text = strCardName[intPlayer1Cards[player1_activeCard-1]] + " = " +
													   intPlayer1CardValues[player1_activeCard-1].ToString();
							player1_handValue = player1_handValue + intPlayer1CardValues[player1_activeCard-1];
							testForAceInBustedHand();
							lbl_player1_handValue->Text = player1_handValue.ToString();
							pb_player1_4->BringToFront();
							pb_player1_4->Visible = true;
							lbl_player1_4_name->Visible = true;
							lbl_player1_handValue->Visible = true;
							lbl_player1_handValueTitle->Visible = true;
							testForBustedHand();
							player1_activeCard++;
							nextCardIndex++;
							determineNextPlayer();
							break;
						}
					case 5:
						{
							intPlayer1Cards[player1_activeCard-1] = intCardIndex[nextCardIndex];
							pb_player1_5->Image = il_deck->Images[intPlayer1Cards[player1_activeCard-1]];
							intPlayer1CardValues[player1_activeCard-1] = intCardPointValue[intPlayer1Cards[player1_activeCard-1]];
							lbl_player1_5_name->Text = strCardName[intPlayer1Cards[player1_activeCard-1]] + " = " +
													   intPlayer1CardValues[player1_activeCard-1].ToString();
							player1_handValue = player1_handValue + intPlayer1CardValues[player1_activeCard-1];
							testForAceInBustedHand();
							lbl_player1_handValue->Text = player1_handValue.ToString();
							pb_player1_5->BringToFront();
							pb_player1_5->Visible = true;
							lbl_player1_5_name->Visible = true;
							lbl_player1_handValue->Visible = true;
							lbl_player1_handValueTitle->Visible = true;
							testForBustedHand();
							player1_activeCard++;
							nextCardIndex++;
							determineNextPlayer();
							break;
						}
					}
				}
				else
				{
					pb_dealtCard->BringToFront();
					pb_dealtCard->SetBounds(pb_dealtCard->Location.X + 30,
											pb_dealtCard->Location.Y + 48,
											pb_dealtCard->Width,
											pb_dealtCard->Height );
				}
			break;
			}
		case 2:
			{
				if ( pb_dealtCard->Location.Y + pb_dealtCard->Height >= pb_player2_1->Location.Y )
				{
					timer_dealCard->Enabled = false;
					pb_dealtCard->Location = pb_deckImage->Location;
					switch ( player2_activeCard )
					{
					case 1:
						{
							intPlayer2Cards[player2_activeCard-1] = intCardIndex[nextCardIndex];
							pb_player2_1->Image = il_deck->Images[intPlayer2Cards[player2_activeCard-1]];
							intPlayer2CardValues[player2_activeCard-1] = intCardPointValue[intPlayer2Cards[player2_activeCard-1]];
							lbl_player2_1_name->Text = strCardName[intPlayer2Cards[player2_activeCard-1]] + " = " +
													   intPlayer2CardValues[player2_activeCard-1].ToString();
							player2_handValue = player2_handValue + intPlayer2CardValues[player2_activeCard-1];
							testForAceInBustedHand();
							lbl_player2_handValue->Text = player2_handValue.ToString();
							pb_player2_1->BringToFront();
							pb_player2_1->Visible = true;
							lbl_player2_1_name->Visible = true;
							lbl_player2_handValue->Visible = true;
							lbl_player2_handValueTitle->Visible = true;
							player2_activeCard++;
							nextCardIndex++;
							determineNextPlayer();
							break;
						}
					case 2:
						{
							intPlayer2Cards[player2_activeCard-1] = intCardIndex[nextCardIndex];
							pb_player2_2->Image = il_deck->Images[intPlayer2Cards[player2_activeCard-1]];
							intPlayer2CardValues[player2_activeCard-1] = intCardPointValue[intPlayer2Cards[player2_activeCard-1]];
							lbl_player2_2_name->Text = strCardName[intPlayer2Cards[player2_activeCard-1]] + " = " +
													   intPlayer2CardValues[player2_activeCard-1].ToString();
							player2_handValue = player2_handValue + intPlayer2CardValues[player2_activeCard-1];
							testForAceInBustedHand();
							lbl_player2_handValue->Text = player2_handValue.ToString();
							pb_player2_2->BringToFront();
							pb_player2_2->Visible = true;
							lbl_player2_2_name->Visible = true;
							lbl_player2_handValue->Visible = true;
							lbl_player2_handValueTitle->Visible = true;
							player2_activeCard++;
							nextCardIndex++;
							determineNextPlayer();
							break;
						}
					case 3:
						{
							intPlayer2Cards[player2_activeCard-1] = intCardIndex[nextCardIndex];
							pb_player2_3->Image = il_deck->Images[intPlayer2Cards[player2_activeCard-1]];
							intPlayer2CardValues[player2_activeCard-1] = intCardPointValue[intPlayer2Cards[player2_activeCard-1]];
							lbl_player2_3_name->Text = strCardName[intPlayer2Cards[player2_activeCard-1]] + " = " +
													   intPlayer2CardValues[player2_activeCard-1].ToString();
							player2_handValue = player2_handValue + intPlayer2CardValues[player2_activeCard-1];
							testForAceInBustedHand();
							lbl_player2_handValue->Text = player2_handValue.ToString();
							pb_player2_3->BringToFront();
							pb_player2_3->Visible = true;
							lbl_player2_3_name->Visible = true;
							lbl_player2_handValue->Visible = true;
							lbl_player2_handValueTitle->Visible = true;
							testForBustedHand();
							player2_activeCard++;
							nextCardIndex++;
							determineNextPlayer();
							break;
						}
					case 4:
						{
							intPlayer2Cards[player2_activeCard-1] = intCardIndex[nextCardIndex];
							pb_player2_4->Image = il_deck->Images[intPlayer2Cards[player2_activeCard-1]];
							intPlayer2CardValues[player2_activeCard-1] = intCardPointValue[intPlayer2Cards[player2_activeCard-1]];
							lbl_player2_4_name->Text = strCardName[intPlayer2Cards[player2_activeCard-1]] + " = " +
													   intPlayer2CardValues[player2_activeCard-1].ToString();
							player2_handValue = player2_handValue + intPlayer2CardValues[player2_activeCard-1];
							testForAceInBustedHand();
							lbl_player2_handValue->Text = player2_handValue.ToString();
							pb_player2_4->BringToFront();
							pb_player2_4->Visible = true;
							lbl_player2_4_name->Visible = true;
							lbl_player2_handValue->Visible = true;
							lbl_player2_handValueTitle->Visible = true;
							testForBustedHand();
							player2_activeCard++;
							nextCardIndex++;
							determineNextPlayer();
							break;
						}
					case 5:
						{
							intPlayer2Cards[player2_activeCard-1] = intCardIndex[nextCardIndex];
							pb_player2_5->Image = il_deck->Images[intPlayer2Cards[player2_activeCard-1]];
							intPlayer2CardValues[player2_activeCard-1] = intCardPointValue[intPlayer2Cards[player2_activeCard-1]];
							lbl_player2_5_name->Text = strCardName[intPlayer2Cards[player2_activeCard-1]] + " = " +
													   intPlayer2CardValues[player2_activeCard-1].ToString();
							player2_handValue = player2_handValue + intPlayer2CardValues[player2_activeCard-1];
							testForAceInBustedHand();
							lbl_player2_handValue->Text = player2_handValue.ToString();
							pb_player2_5->BringToFront();
							pb_player2_5->Visible = true;
							lbl_player2_5_name->Visible = true;
							lbl_player2_handValue->Visible = true;
							lbl_player2_handValueTitle->Visible = true;
							testForBustedHand();
							player2_activeCard++;
							nextCardIndex++;
							determineNextPlayer();
							break;
						}
					}
				}
				else
				{
					pb_dealtCard->BringToFront();
					pb_dealtCard->SetBounds(pb_dealtCard->Location.X,
											pb_dealtCard->Location.Y + 48,
											pb_dealtCard->Width,
											pb_dealtCard->Height );
				}
				break;
			}
		case 3:
			{
				if ( pb_dealtCard->Location.Y + pb_dealtCard->Height >= pb_player3_1->Location.Y )
				{
					timer_dealCard->Enabled = false;
					pb_dealtCard->Location = pb_deckImage->Location;
					switch ( player3_activeCard )
					{
					case 1:
						{
							intPlayer3Cards[player3_activeCard-1] = intCardIndex[nextCardIndex];
							pb_player3_1->Image = il_deck->Images[intPlayer3Cards[player3_activeCard-1]];
							intPlayer3CardValues[player3_activeCard-1] = intCardPointValue[intPlayer3Cards[player3_activeCard-1]];
							lbl_player3_1_name->Text = strCardName[intPlayer3Cards[player3_activeCard-1]] + " = " +
													   intPlayer3CardValues[player3_activeCard-1].ToString();
							player3_handValue = player3_handValue + intPlayer3CardValues[player3_activeCard-1];
							testForAceInBustedHand();
							lbl_player3_handValue->Text = player3_handValue.ToString();
							pb_player3_1->BringToFront();
							pb_player3_1->Visible = true;
							lbl_player3_1_name->Visible = true;
							lbl_player3_handValue->Visible = true;
							lbl_player3_handValueTitle->Visible = true;
							player3_activeCard++;
							nextCardIndex++;
							determineNextPlayer();
							break;
						}
					case 2:
						{
							intPlayer3Cards[player3_activeCard-1] = intCardIndex[nextCardIndex];
							pb_player3_2->Image = il_deck->Images[intPlayer3Cards[player3_activeCard-1]];
							intPlayer3CardValues[player3_activeCard-1] = intCardPointValue[intPlayer3Cards[player3_activeCard-1]];
							lbl_player3_2_name->Text = strCardName[intPlayer3Cards[player3_activeCard-1]] + " = " +
													   intPlayer3CardValues[player3_activeCard-1].ToString();
							player3_handValue = player3_handValue + intPlayer3CardValues[player3_activeCard-1];
							testForAceInBustedHand();
							lbl_player3_handValue->Text = player3_handValue.ToString();
							pb_player3_2->BringToFront();
							pb_player3_2->Visible = true;
							lbl_player3_2_name->Visible = true;
							lbl_player3_handValue->Visible = true;
							lbl_player3_handValueTitle->Visible = true;
							player3_activeCard++;
							nextCardIndex++;
							determineNextPlayer();
							break;
						}
					case 3:
						{
							intPlayer3Cards[player3_activeCard-1] = intCardIndex[nextCardIndex];
							pb_player3_3->Image = il_deck->Images[intPlayer3Cards[player3_activeCard-1]];
							intPlayer3CardValues[player3_activeCard-1] = intCardPointValue[intPlayer3Cards[player3_activeCard-1]];
							lbl_player3_3_name->Text = strCardName[intPlayer3Cards[player3_activeCard-1]] + " = " +
													   intPlayer3CardValues[player3_activeCard-1].ToString();
							player3_handValue = player3_handValue + intPlayer3CardValues[player3_activeCard-1];
							testForAceInBustedHand();
							lbl_player3_handValue->Text = player3_handValue.ToString();
							pb_player3_3->BringToFront();
							pb_player3_3->Visible = true;
							lbl_player3_3_name->Visible = true;
							lbl_player3_handValue->Visible = true;
							lbl_player3_handValueTitle->Visible = true;
							testForBustedHand();
							player3_activeCard++;
							nextCardIndex++;
							determineNextPlayer();
							break;
						}
					case 4:
						{
							intPlayer3Cards[player3_activeCard-1] = intCardIndex[nextCardIndex];
							pb_player3_4->Image = il_deck->Images[intPlayer3Cards[player3_activeCard-1]];
							intPlayer3CardValues[player3_activeCard-1] = intCardPointValue[intPlayer3Cards[player3_activeCard-1]];
							lbl_player3_4_name->Text = strCardName[intPlayer3Cards[player3_activeCard-1]] + " = " +
													   intPlayer3CardValues[player3_activeCard-1].ToString();
							player3_handValue = player3_handValue + intPlayer3CardValues[player3_activeCard-1];
							testForAceInBustedHand();
							lbl_player3_handValue->Text = player3_handValue.ToString();
							pb_player3_4->BringToFront();
							pb_player3_4->Visible = true;
							lbl_player3_4_name->Visible = true;
							lbl_player3_handValue->Visible = true;
							lbl_player3_handValueTitle->Visible = true;
							testForBustedHand();
							player3_activeCard++;
							nextCardIndex++;
							determineNextPlayer();
							break;
						}
					case 5:
						{
							intPlayer3Cards[player3_activeCard-1] = intCardIndex[nextCardIndex];
							pb_player3_5->Image = il_deck->Images[intPlayer3Cards[player3_activeCard-1]];
							intPlayer3CardValues[player3_activeCard-1] = intCardPointValue[intPlayer3Cards[player3_activeCard-1]];
							lbl_player3_5_name->Text = strCardName[intPlayer3Cards[player3_activeCard-1]] + " = " +
													   intPlayer3CardValues[player3_activeCard-1].ToString();
							player3_handValue = player3_handValue + intPlayer3CardValues[player3_activeCard-1];
							testForAceInBustedHand();
							lbl_player3_handValue->Text = player3_handValue.ToString();
							pb_player3_5->BringToFront();
							pb_player3_5->Visible = true;
							lbl_player3_5_name->Visible = true;
							lbl_player3_handValue->Visible = true;
							lbl_player3_handValueTitle->Visible = true;
							testForBustedHand();
							player3_activeCard++;
							nextCardIndex++;
							determineNextPlayer();
							break;
						}
					}
				}
				else
				{
					pb_dealtCard->BringToFront();
					pb_dealtCard->SetBounds(pb_dealtCard->Location.X - 45,
											pb_dealtCard->Location.Y + 48,
											pb_dealtCard->Width,
											pb_dealtCard->Height );
				}
				break;
			}
		case 4:					// dealer's hand
			{
				const int COVERED_CARD = 52;

				if ( pb_dealtCard->Location.X + pb_dealtCard->Width >= pb_dealer_1->Location.X )
				{
					timer_dealCard->Enabled = false;
					pb_dealtCard->Location = pb_deckImage->Location;
					switch ( dealer_activeCard )
					{
					case 1:
						{
							intDealersCards[dealer_activeCard-1] = intCardIndex[nextCardIndex];
							pb_dealer_1->Image = il_deck->Images[52];
							intDealersCardValues[dealer_activeCard-1] = intCardPointValue[intDealersCards[dealer_activeCard-1]];
							lbl_dealer_1_name->Text = strCardName[intDealersCards[dealer_activeCard-1]] + " = " +
													   intDealersCardValues[dealer_activeCard-1].ToString();
							dealer_handValue = dealer_handValue + intDealersCardValues[dealer_activeCard-1];
							testForAceInBustedHand();
							lbl_dealer_handValue->Text = dealer_handValue.ToString();
							pb_dealer_1->BringToFront();
							pb_dealer_1->Visible = true;
							
							dealer_activeCard++;
							nextCardIndex++;
							determineNextPlayer();
							break;
						}
					case 2:
						{
							intDealersCards[dealer_activeCard-1] = intCardIndex[nextCardIndex];
							pb_dealer_2->Image = il_deck->Images[intDealersCards[dealer_activeCard-1]];
							intDealersCardValues[dealer_activeCard-1] = intCardPointValue[intDealersCards[dealer_activeCard-1]];
							lbl_dealer_2_name->Text = strCardName[intDealersCards[dealer_activeCard-1]] + " = " +
													   intDealersCardValues[dealer_activeCard-1].ToString();
							dealer_handValue = dealer_handValue + intDealersCardValues[dealer_activeCard-1];
							testForAceInBustedHand();
							lbl_dealer_handValue->Text = dealer_handValue.ToString();
							pb_dealer_2->BringToFront();
							pb_dealer_2->Visible = true;
							lbl_dealer_2_name->Visible = true;
							dealer_activeCard++;
							nextCardIndex++;
							determineNextPlayer();
							break;
						}
					case 3:
						{
							intDealersCards[dealer_activeCard-1] = intCardIndex[nextCardIndex];
							pb_dealer_3->Image = il_deck->Images[intDealersCards[dealer_activeCard-1]];
							intDealersCardValues[dealer_activeCard-1] = intCardPointValue[intDealersCards[dealer_activeCard-1]];
							lbl_dealer_3_name->Text = strCardName[intDealersCards[dealer_activeCard-1]] + " = " +
													   intDealersCardValues[dealer_activeCard-1].ToString();
							dealer_handValue = dealer_handValue + intDealersCardValues[dealer_activeCard-1];
							testForAceInBustedHand();
							lbl_dealer_handValue->Text = dealer_handValue.ToString();
							pb_dealer_3->BringToFront();
							pb_dealer_3->Visible = true;
							lbl_dealer_3_name->Visible = true;
							lbl_dealer_handValue->Visible = true;
							lbl_dealer_handValueTitle->Visible = true;
							testForBustedHand();
							dealer_activeCard++;
							nextCardIndex++;
							determineNextPlayer();
							break;
						}
					case 4:
						{
							intDealersCards[dealer_activeCard-1] = intCardIndex[nextCardIndex];
							pb_dealer_4->Image = il_deck->Images[intDealersCards[dealer_activeCard-1]];
							intDealersCardValues[dealer_activeCard-1] = intCardPointValue[intDealersCards[dealer_activeCard-1]];
							lbl_dealer_4_name->Text = strCardName[intDealersCards[dealer_activeCard-1]] + " = " +
													   intDealersCardValues[dealer_activeCard-1].ToString();
							dealer_handValue = dealer_handValue + intDealersCardValues[dealer_activeCard-1];
							testForAceInBustedHand();
							lbl_dealer_handValue->Text = dealer_handValue.ToString();
							pb_dealer_4->BringToFront();
							pb_dealer_4->Visible = true;
							lbl_dealer_4_name->Visible = true;
							lbl_dealer_handValue->Visible = true;
							lbl_dealer_handValueTitle->Visible = true;
							testForBustedHand();
							dealer_activeCard++;
							nextCardIndex++;
							determineNextPlayer();
							break;
						}
					case 5:
						{
							intDealersCards[dealer_activeCard-1] = intCardIndex[nextCardIndex];
							pb_dealer_5->Image = il_deck->Images[intDealersCards[dealer_activeCard-1]];
							intDealersCardValues[dealer_activeCard-1] = intCardPointValue[intDealersCards[dealer_activeCard-1]];
							lbl_dealer_5_name->Text = strCardName[intDealersCards[dealer_activeCard-1]] + " = " +
													   intDealersCardValues[dealer_activeCard-1].ToString();
							dealer_handValue = dealer_handValue + intDealersCardValues[dealer_activeCard-1];
							testForAceInBustedHand();
							lbl_dealer_handValue->Text = dealer_handValue.ToString();
							pb_dealer_5->BringToFront();
							pb_dealer_5->Visible = true;
							lbl_dealer_5_name->Visible = true;
							lbl_dealer_handValue->Visible = true;
							lbl_dealer_handValueTitle->Visible = true;
							testForBustedHand();
							dealer_activeCard++;
							nextCardIndex++;
							determineNextPlayer();
							break;
						}
					}
				}
				else
				{
					pb_dealtCard->BringToFront();
					pb_dealtCard->SetBounds(pb_dealtCard->Location.X + 30,
											pb_dealtCard->Location.Y,
											pb_dealtCard->Width,
											pb_dealtCard->Height );
				}
				break;
			}
		}
	}

	/**************************************************************************
	***************************************************************************
	***
	*** determineNextPlayer()
	***
	*** Determines which player is to receive the next card dealt
	***
	***************************************************************************
	**************************************************************************/ 
	void determineNextPlayer()
	{
		const int MAX_CARDS_IN_INITIAL_DEAL = 8;
		const int MAX_PLAYER_COUNT = 4;
		int activePlayerCount = 0;

		// check to see if still dealing first 2 cards each player
		// Continue dealing until initial deal is done
		if ( nextCardIndex < MAX_CARDS_IN_INITIAL_DEAL )
		{
			activePlayer++;
			if ( activePlayer > MAX_PLAYER_COUNT )
			{
				activePlayer = 1;
			}
			timer_dealCard->Enabled = true;
		}
		// check to see if initial deal (of 2 cards) is JUST completed
		// If it it, check players for blackjack, then check dealer for black jack
		else if ( nextCardIndex == MAX_CARDS_IN_INITIAL_DEAL && activePlayer == 4 )
		{
			checkForBlackJack();
			checkForDealerBlackJack();
			activePlayer = 1;
		}
		else
		{
			// do nothing
		}
		
		// for all deals outside of the initial 2 card deal 
		// start evaluating the hands
		if ( nextCardIndex >= MAX_CARDS_IN_INITIAL_DEAL )
		{
			// if any hands are still active...
			if ( boolPlayer1_handActive || boolPlayer2_handActive || boolPlayer3_handActive )
			{
				// check to see if the current player is still active
				// if they are, turn on the "hit" and "stand" buttons for the player
				if ( activePlayer == 1 && boolPlayer1_handActive )
				{
					btn_player1_stand->Visible = true;
					btn_player1_hit->Visible = true;
				}
				else if ( activePlayer == 2 && boolPlayer2_handActive )
				{
					btn_player2_stand->Visible = true;
					btn_player2_hit->Visible = true;
				}
				else if ( activePlayer == 3 && boolPlayer3_handActive )
				{
					btn_player3_stand->Visible = true;
					btn_player3_hit->Visible = true;
				}
				else
				{
					// Incase the active player before 
					if ( activePlayer == 1 && !boolPlayer1_handActive )
					{
						activePlayer++;
						determineNextPlayer();
					}
					else if ( activePlayer == 2 && !boolPlayer2_handActive )
					{
						activePlayer++;
						determineNextPlayer();
					}
					else if ( activePlayer == 3 && !boolPlayer3_handActive )
					{
						activePlayer++;
						determineNextPlayer();
					}
					else
					{
						// Do nothing
					}
				}
			}
			else 
			{
				// find if there are any hands with status of "Stand"
				if ( lbl_player1_handStatus->Text->Equals( "Stand" ) ||
					 lbl_player2_handStatus->Text->Equals( "Stand" ) ||
					 lbl_player3_handStatus->Text->Equals( "Stand" ) )
				{
					evaluateDealersHand();
				}
				else
				{
					pb_dealer_1->Image = il_deck->Images[intDealersCards[0]];
					lbl_dealer_1_name->Visible = true;
					lbl_dealer_handValueTitle->Visible = true;
					lbl_dealer_handValue->Visible = true;
					lbl_gameOver->Visible = true;
					btn_deal->Visible = true;
					timer_btnDeal->Enabled = true;
				}
			}
			
		}
	}

	/**************************************************************************
	***************************************************************************
	***
	*** displayCurrentTime()
	***
	*** Captures the current system time and displays it in a label.
	*** Also, calculates the elapsed time ( current time - start time )
	*** and displays it in another label.
	*** NOTE: This function is triggered by a timer every second so the
	***       current time and elapsed time is kept current. However, the 
	***       labels are not shown initially. There is a button to make the
	***       2 labels visible or not.
	***
	***************************************************************************
	**************************************************************************/
	void displayCurrentTime()
	{
		int elapsedDays, elapsedHours, elapsedMinutes, elapsedSeconds;
		String^ message = "";

		// Get the current system time and display it
		currentTime = DateTime::Now;
		lbl_currentTime->Text = currentTime.ToShortDateString() + "  "
			                  + currentTime.ToLongTimeString();

		// determine the elapsed time since the program's start time
		elapsedTime = currentTime.Subtract( startTime );

		// format a string to show the elapsed time and display it
		elapsedDays    = elapsedTime.Days;
		elapsedHours   = elapsedTime.Hours;
		elapsedMinutes = elapsedTime.Minutes;
		elapsedSeconds = elapsedTime.Seconds;

		// If there are days, format them into the string
		if ( elapsedDays > 0 )
		{
			message = elapsedDays.ToString() + " Day";
			if ( elapsedDays > 1 )
			{
				message = message + "s";
			}
			message = message + "  ";
		}

		// if "hours" is single digit, left pad a zero
		if ( elapsedHours < 10 )
		{
			message = message + "0";
		}
		message = message + elapsedHours.ToString() + ":";

		// if "minutes" is a single digit, left pad a zero
		if ( elapsedMinutes < 10 )
		{
			message = message + "0";
		}
		message = message + elapsedMinutes.ToString() + ":";

		// if "seconds" is a single digit, left pad a zero
		if (elapsedSeconds < 10 )
		{
			message = message + "0";
		}
		message = message + elapsedSeconds.ToString();

		// place the formatted elapsed time string into the 
		// label, but don't necessarily show the label.
		lbl_elapsedTime->Text = message;
	}

	/**************************************************************************
	***************************************************************************
	***
	*** displayExit_message()
	***
	*** generates a "friendly" farewell message with the user's name and the
	*** game session's statistics.
	***
	***************************************************************************
	**************************************************************************/
	void displayExit_message()
	{
		String^ message        = gcnew String("");
		String^ strHandsPlayed = gcnew String("");
		String^ strHandsWon    = gcnew String("");
		String^ strHandsLost   = gcnew String("");
		int intHandsPlayed = gamesPlayedCount * 3;
		int intHandsWon = 0;
		int intHandsLost = 0;

		// create the '# game(s)' phrase
		if ( intHandsPlayed > 0 )
		{
			strHandsPlayed = intHandsPlayed + " games";
		}

		intHandsWon =  intPlayer1_gamesWonCount + intPlayer2_gamesWonCount + intPlayer3_gamesWonCount;
		intHandsLost = intPlayer1_gamesLostCount + intPlayer2_gamesLostCount + intPlayer3_gamesLostCount
			+ intPlayer1_gamesTiedCount + intPlayer2_gamesTiedCount + intPlayer3_gamesTiedCount;

		// create the phrase for # of games won
		if ( intHandsWon < 1 )
		{
			strHandsWon = "No Hands! (Ouch!) ";
		}
		else if ( intHandsWon == 1 )
		{
			strHandsWon = "1 hand";
		}
		else 
		{
			strHandsWon = intHandsWon + " hands";
		}

		// create the phrase for # of games lost
		if ( intHandsLost < 1 )
		{
			strHandsWon = "Every hand! (Incredible!) ";
		}
		else if ( intHandsLost == 1 )
		{
			strHandsLost = "1 Game.";
		}
		else 
		{
			strHandsLost = intHandsLost + " hands.";
		}

		message = userFirstName + ", thank you for visiting Robert's " +
			"Black Jack Parlor.\n\n";

		if ( gamesPlayedCount < 1 )
		{
			message = message + "You haven't played any games. Well, " +
				"thanks for visiting anyway.";
		}
		else
		{
			message = message + "Of the " + strHandsPlayed + " played " +
				"( 3 hands per deal ), the players won " + strHandsWon + "\n\n";

			if ( intHandsWon > intHandsLost )
			{
				message = message + "Congratulations on beating the house!\n\n";
			}
			else if ( intHandsWon == intHandsLost )
			{
				message = message + "You broke even with the house. That's better than most people!";
			}
			else
			{
				message = message + "You come back, soon. (Looks like you need the practice!)";
			}
		}
		MessageBox::Show( message, "Thanks for stopping by!");
	}

	/**************************************************************************
	***************************************************************************
	***
	*** displayLoginConfirmation_message
	***
	*** generates a message box with a "friendly" thank you message for 
	*** logging into the game.  Upon "OK", initialize screen 2 (game screen)
	***
	***************************************************************************
	**************************************************************************/
	void displayLoginConfirmation_message()
	{
			 const int MAX_ERRORS = 3;

			 username = tb_userName->Text->Trim();
			 int spaceIndex = username->IndexOf(" ");
			 if( username->Length <= 0 || spaceIndex < 0 )
			 {
				 intErrorCount++;
				 if ( intErrorCount == MAX_ERRORS )
				 {
					MessageBox::Show("The maximum numbers of errors has "     +
					                 "occured. If another error occurs, the " +
									 "program will be ended.\n\n"             +
								     "Both first and last name are "          +
									 "required.\nPlease try again.","Error");
					tb_userName->Text = "";
					tb_userName->Focus();
				 }
				 else if ( intErrorCount > MAX_ERRORS )
				 { 
					 MessageBox::Show("The maximum number of errors has "     +
						              "been exceeded.\n\nThis program is "    +
									  "now terminated.\n\nGood bye!", "Error");
					 Close();
				 }
				 else
				 {
					 MessageBox::Show("Both first and last name are required. " +
						              "\nPlease try again.","Error");
					tb_userName->Text = "";
					tb_userName->Focus();
				 }
			 }
			 else
			 {
				 initializeScreen2();
				 userFirstName = username->Substring(0,spaceIndex);
				 userLastName = username->Substring(spaceIndex+1);
				 MessageBox::Show( String::Concat("Thank you, ", username, ".\n\nEnjoy the game!"), "Login Confirmation");
				 btn_deal->Text = "Deal";
		 		 btn_deal->Visible = true;
				 timer_btnDeal->Enabled = true;
			 }	
	}
	/**************************************************************************
	***************************************************************************
	***
	*** displayProgramIdInfo_message()
	***
	*** generates a message box with the program's ID INFO & CREDITS
	***
	***************************************************************************
	**************************************************************************/
	void displayProgramIdInfo_message()
	{ 
			 //Show message box with ID INFO and credits
			 MessageBox::Show("ID INFORMATION:\n\nProgrammer:"
				 "\t\tRobert Gunnlaugsson\nAssignment #:\t\tProgram 2\n"
				 "Assignment Name:\t\tBlack Jack\n"
				 "Course # & Title:\t\tCISC 192 - C++ Programming\n"
				 "Class Meeting Times:\tMW 9:35 AM - 12:35 PM\n"
				 "Instructor:\t\t\tProfessor Forman\n"
				 "Project Hours:\t\t30\n"
				 "Difficulty:\t\t\t5\n"
				 "Completion Date:\t\t11/17/2009\n"
				 "Due Date:\t\t\t11/30/2009\n\n"
				 "CREDITS:\n\nI wish to thank Professor Forman for his exellent "
				 "hand-outs and support in learning C++.\n\n"
				 "Collateral came from:\n\n:"
				 "Card table felt background:\n"
				 "http://ecx.images-amazon.com/images/I/51BMFuBVHLL._SL500_AA280_.jpg\n\n"
				 "Card images:\n"  
				 "http://www.jfitz.com/cards/\n\n"
				 "Card Shuffle sound effect:\n"
				 "http://www.pacdv.com/sounds/miscellaneous_sounds.html\n"
				 "http://www.soundjay.com/card-sounds-1.html\n\n"
				 "Card dealt sound effect:\n"
				 "http://www.soundjay.com/player-recorder-sounds.html\n\n"
				 "revolving cards animations:\n"
				 "http://www.sevenoaksart.co.uk/casino.htm" );
	}

	/**************************************************************************
	***************************************************************************
	***
	*** displaySessionStatistics_message()
	***
	*** generates a message box with the game statistics for the current
	*** session, including session length, number of games played, and then
	*** for each player: games won, games tied, games lost.
	***
	***************************************************************************
	**************************************************************************/
	void displaySessionStatistics_message()
	{
		String^ message = gcnew String("");
		String^ gamesPlayed = gcnew String("");
		int handsPlayed = gamesPlayedCount * 3;

		String^ elapsedDays = gcnew String("");
		String^ elapsedHours = gcnew String("");
		String^ elapsedMinutes = gcnew String("");
		String^ elapsedSeconds = gcnew String("");
		String^ strSessionElapsedTime = gcnew String("");

		// build the components for the time string
		if ( elapsedTime.Days > 0 )
		{
			elapsedDays = elapsedTime.Days.ToString() + " Day";
			if ( elapsedTime.Days > 1 )
			{
				elapsedDays = elapsedDays + "s";
			}
			elapsedDays = elapsedDays + " ";
		}

		if ( elapsedTime.Hours > 0 )
		{
			elapsedHours = elapsedTime.Hours.ToString() + " Hour";
			if ( elapsedTime.Hours > 1 )
			{
				elapsedHours = elapsedHours + "s";
			}
			elapsedHours = elapsedHours + " ";
		}

		if ( elapsedTime.Minutes > 0 )
		{
			elapsedMinutes = elapsedTime.Minutes.ToString() + " Minute";
			if ( elapsedTime.Minutes > 1 )
			{
				elapsedMinutes = elapsedMinutes + "s";
			}
			elapsedMinutes = elapsedMinutes + " ";
		}

		if ( elapsedTime.Seconds > 0 )
		{
			elapsedSeconds = elapsedTime.Seconds.ToString() + " Second";
			if ( elapsedTime.Seconds > 1 )
			{
				elapsedSeconds = elapsedSeconds + "s";
			}
			elapsedSeconds = elapsedSeconds + " ";
		}
		strSessionElapsedTime = elapsedDays + elapsedHours + elapsedMinutes + elapsedSeconds;
		
		if (gamesPlayedCount < 1)
		{
			gamesPlayed = "you have yet to play a game. ";
		}
		else
		{
			gamesPlayed = "you have played " + handsPlayed + " hands. (3 hands per game)";
		}

		message = "Well, " + userFirstName + ",\n\n" +
			"Your session has lasted " + strSessionElapsedTime + ", during which " + gamesPlayed;
		if ( gamesPlayedCount > 0 )
		{ 
			message = message + "\n\n" +
					"Of those games, \n\n" +
					"player1 has: \n" +
					"\tWon " + intPlayer1_gamesWonCount + " \n" +
					"\t\t- " + intPlayer1_gamesWonCount_blackjack + " Black Jack!\n" + 
					"\t\t- " + intPlayer1_gamesWonCount_21 + " Hand Value 21 (3+ cards)\n" + 
					"\t\t- " + intPlayer1_gamesWonCount_dealerBust + " Dealer Busted\n" + 
					"\t\t- " + intPlayer1_gamesWonCount_higherScore + " Higher Score than dealer\n" + 
					"\tTied " + intPlayer1_gamesTiedCount + " \n" +
					"\tLost " + intPlayer1_gamesLostCount + " \n" +
					"\t\t- " + intPlayer1_gamesLostCount_bust + " Busted\n" +
					"\t\t- " + intPlayer1_gamesLostCount_dealerBlackJack + " Dealer Black Jack!\n" +
					"\t\t- " + intPlayer1_gamesLostCount_lowerScore + " Lower Score than dealer\n" +
					"player2 has: \n" +
					"\tWon " + intPlayer2_gamesWonCount + " \n" +
					"\t\t- " + intPlayer2_gamesWonCount_blackjack + " Black Jack!\n" + 
					"\t\t- " + intPlayer2_gamesWonCount_21 + " Hand Value 21 (3+ cards)\n" + 
					"\t\t- " + intPlayer2_gamesWonCount_dealerBust + " Dealer Busted\n" + 
					"\t\t- " + intPlayer2_gamesWonCount_higherScore + " Higher Score than dealer\n" + 
					"\tTied " + intPlayer2_gamesTiedCount + " \n" +
					"\tLost " + intPlayer2_gamesLostCount + " \n" +
					"\t\t- " + intPlayer2_gamesLostCount_bust + " Busted\n" +
					"\t\t- " + intPlayer2_gamesLostCount_dealerBlackJack + " Dealer Black Jack!\n" +
					"\t\t- " + intPlayer2_gamesLostCount_lowerScore + " Lower Score than dealer\n" +
					"player3 has: \n" +
					"\tWon " + intPlayer3_gamesWonCount + " \n" +
					"\t\t- " + intPlayer3_gamesWonCount_blackjack + " Black Jack!\n" + 
					"\t\t- " + intPlayer3_gamesWonCount_21 + " Hand Value 21 (3+ cards)\n" + 
					"\t\t- " + intPlayer3_gamesWonCount_dealerBust + " Dealer Busted\n" + 
					"\t\t- " + intPlayer3_gamesWonCount_higherScore + " Higher Score than dealer\n" + 
					"\tTied " + intPlayer3_gamesTiedCount + " \n" +
					"\tLost " + intPlayer3_gamesLostCount + " \n" +
					"\t\t- " + intPlayer3_gamesLostCount_bust + " Busted\n" +
					"\t\t- " + intPlayer3_gamesLostCount_dealerBlackJack + " Dealer Black Jack!\n" +
					"\t\t- " + intPlayer3_gamesLostCount_lowerScore + " Lower Score than dealer" ;
		}
		message = message + "\n\n" + "I hope you have enjoyed using Robert's Black Jack Parlor.";

		MessageBox::Show( message, "Game Session Statistics");
	}


	/**************************************************************************
	***************************************************************************
	***
	*** displayStartTime()
	***
	*** Captures and displays the system time when progam was started
	***
	***************************************************************************
	**************************************************************************/
	void displayStartTime()
	{
		startTime = DateTime::Now;
		lbl_startTime->Text = startTime.ToShortDateString() + "  "
			                + startTime.ToLongTimeString();
	}

	/**************************************************************************
	***************************************************************************
	***
	*** evaluateDealersHand()
	***
	*** Display both of the dealer's cards, along with the hands value.
	***
	*** If there are no player hands with a status of "Stand", 
	***		display the "game over" label and make the "deal" button appear.
	***
	*** If there is at least 1 player hand with status of "Stand"
	***		* if the dealer's hand evaluates to < 16 (hit) and eval. again.
	***		* if the dealer's hand evaluates to > 16 && <= 21 (stand)
	***		* if the dealer's hand evaluates to > 21 (bust)
	***
	*** If (bust)
	***		for each player hand with status "Stand", change to "WIN!"
	***		and display "game over" label and "deal" button
	***
	*** if (Stand)
	***		for each player hand with status of "Stand"
	***			if (player hand value > dealer hand value)
	***				change player status to "WIN!"
	***
	***			else if (player hand value = dealer hand value)
	***				change player status to "Tied"
	***
	***			else
	***				change player statsu to "Lost"
	***
	***************************************************************************
	**************************************************************************/
	void evaluateDealersHand()
	{
		const int MINIMUM_HAND_VALUE_FOR_STAND = 16;
		const int MAXIMUM_GOOD_HAND_VALUE = 21;

		// Show dealer's cards and hand value
		pb_dealer_1->Image = il_deck->Images[intDealersCards[0]];
		lbl_dealer_1_name->Visible = true;
		lbl_dealer_handValueTitle->Visible = true;
		//lbl_dealer_handStatus->Visible = true;

		// Don't deal the dealer another card if the dealer's hand already 
		// beats all the players hands that haven't already "won" or "lost".
		if ( dealer_handValue <= MAXIMUM_GOOD_HAND_VALUE 
			&&
		      (lbl_player1_handStatus->Text != "Stand" 
			   ||
			      (dealer_handValue > player1_handValue 
				   &&
				   lbl_player1_handStatus->Text == "Stand")
			  )
		   &&
		      (lbl_player2_handStatus->Text != "Stand" 
			   ||
			      (dealer_handValue > player2_handValue 
				  &&
				  lbl_player2_handStatus->Text == "Stand")
			  )
		   &&
		      (lbl_player3_handStatus->Text != "Stand" 
			   ||
			      (dealer_handValue > player3_handValue 
				  &&
				  lbl_player3_handStatus->Text == "Stand")
			  )
		   )
		{
			pb_dealer_1->Image = il_deck->Images[intDealersCards[0]];
			lbl_dealer_1_name->Visible = true;
			lbl_dealer_handValueTitle->Visible = true;
			lbl_dealer_handValue->Visible = true;
			lbl_dealer_handStatus->Text = "Dealer Stands with";
			lbl_dealer_handStatus->Visible = true;

			if( lbl_player1_handStatus->Text == "Stand")
			{
				lbl_player1_handStatus->Text = "You Lose";
				intPlayer1_gamesLostCount++;
				intPlayer1_gamesLostCount_lowerScore++;
			}
			if( lbl_player2_handStatus->Text == "Stand")
			{
				lbl_player2_handStatus->Text = "You Lose";
				intPlayer2_gamesLostCount++;
				intPlayer2_gamesLostCount_lowerScore++;
			}
			if( lbl_player3_handStatus->Text == "Stand")
			{
				lbl_player3_handStatus->Text = "You Lose";
				intPlayer3_gamesLostCount++;
				intPlayer3_gamesLostCount_lowerScore++;
			}
			lbl_gameOver->Visible = true;
			btn_deal->Visible = true;
			timer_btnDeal->Enabled = true;
		}
		// But, if the hand is below "stand" count, hit it.
		else if ( dealer_handValue < MINIMUM_HAND_VALUE_FOR_STAND )
		{
			activePlayer = 4;
			timer_dealCard->Enabled = true;
		}
		// Otherwise, it's time to evaluate the player's hands against
		// the dealer's hand.
		else
		{
			// if dealer's hand is bust -- all "stand" hands are winners
			if ( dealer_handValue > MAXIMUM_GOOD_HAND_VALUE )
			{
				if( lbl_player1_handStatus->Text == "Stand")
				{
					lbl_player1_handStatus->Text = "You Win!";
					intPlayer1_gamesWonCount++;
					intPlayer1_gamesWonCount_dealerBust++;
				}
				if( lbl_player2_handStatus->Text == "Stand")
				{
					lbl_player2_handStatus->Text = "You Win!";
					intPlayer2_gamesWonCount++;
					intPlayer2_gamesWonCount_dealerBust++;
				}
				if( lbl_player3_handStatus->Text == "Stand")
				{
					lbl_player3_handStatus->Text = "You Win!";
					intPlayer3_gamesWonCount++;
					intPlayer3_gamesWonCount_dealerBust++;
				}
				lbl_dealer_handValue->Visible = true;
				lbl_dealer_handStatus->Text = "Dealer busts with";
				lbl_dealer_handStatus->Visible = true;
				lbl_gameOver->Visible = true;
				btn_deal->Visible = true;
				timer_btnDeal->Enabled = true;
			}
			else
			{
				// If player1's hand has a status of stand 
				// evaluate it against the dealer's hand
				lbl_dealer_handValue->Visible = true;
				lbl_dealer_handStatus->Text = "Dealer stands with";
				lbl_dealer_handStatus->Visible = true;
				if ( lbl_player1_handStatus->Text == "Stand" )
				{
					if ( dealer_handValue > player1_handValue )
					{
					lbl_player1_handStatus->Text = "House Wins!";
					intPlayer1_gamesLostCount++;
					intPlayer1_gamesLostCount_lowerScore++;
					}
					else if ( dealer_handValue == player1_handValue )
					{
					lbl_player1_handStatus->Text = "Push!";
					intPlayer1_gamesTiedCount++;
					}
					else
					{
					lbl_player1_handStatus->Text = "You Win!";
					intPlayer1_gamesWonCount++;
					intPlayer1_gamesWonCount_higherScore++;
					}
				}

				// If player2's hand has a status of stand 
				// evaluate it against the dealer's hand
				if ( lbl_player2_handStatus->Text == "Stand" )
				{
					if ( dealer_handValue > player2_handValue )
					{
					lbl_player2_handStatus->Text = "House Wins!";
					intPlayer2_gamesLostCount++;
					intPlayer2_gamesLostCount_lowerScore++;
					}
					else if ( dealer_handValue == player2_handValue )
					{
					lbl_player2_handStatus->Text = "Push!";
					intPlayer2_gamesTiedCount++;
					}
					else
					{
					lbl_player2_handStatus->Text = "You Win!";
					intPlayer2_gamesWonCount++;
					intPlayer2_gamesWonCount_higherScore++;
					}
				}

				// If player1's hand has a status of stand 
				// evaluate it against the dealer's hand
				if ( lbl_player3_handStatus->Text == "Stand" )
				{
					if ( dealer_handValue > player3_handValue )
					{
					lbl_player3_handStatus->Text = "House Wins!";
					intPlayer3_gamesLostCount++;
					intPlayer3_gamesLostCount_lowerScore++;
					}
					else if ( dealer_handValue == player3_handValue )
					{
					lbl_player3_handStatus->Text = "Push!";
					intPlayer3_gamesTiedCount++;
					}
					else
					{
					lbl_player3_handStatus->Text = "You Win!";
					intPlayer3_gamesWonCount++;
					intPlayer3_gamesWonCount_higherScore++;
					}
				}
			}
			lbl_gameOver->Visible = true;
			btn_deal->Visible = true;
			timer_btnDeal->Enabled = true;
		}
	}


	/**************************************************************************
	***************************************************************************
	***
	*** initializeScreen2()
	***
	*** Make unwanted objects from "welcome" page disappear.
	*** Also, disappear any labels, btns, etc from the previous game.
	***
	***************************************************************************
	**************************************************************************/
	void initializeScreen2()
	{
		// disappear screen 1 objects
		lbl_pg1_instructions->Visible = false;
		lbl_pg1_instructions2->Visible = false;
		pb_deckUp->Visible = false;
		pb_ace->Visible = false;
		pb_queen->Visible = false;
		pb_deckDown->Visible = false;
		tb_userName->Visible = false;
		btn_continue->Visible = false;

		// DEBUG label
		lbl_testRandomness->Visible = false;

		pb_player1_1->Visible = false;
		pb_player1_2->Visible = false;
		pb_player1_3->Visible = false;
		pb_player1_4->Visible = false;
		pb_player1_5->Visible = false;
		lbl_player1_1_name->Visible = false;
		lbl_player1_2_name->Visible = false;
		lbl_player1_3_name->Visible = false;
		lbl_player1_4_name->Visible = false;
		lbl_player1_5_name->Visible = false;
		lbl_player1_handValue->Visible = false;
		lbl_player1_handValueTitle->Visible = false;
		lbl_player1_handStatus->Visible = false;
		btn_player1_hit->Visible = false;
		btn_player1_stand->Visible = false;

		pb_player2_1->Visible = false;
		pb_player2_2->Visible = false;
		pb_player2_3->Visible = false;
		pb_player2_4->Visible = false;
		pb_player2_5->Visible = false;
		lbl_player2_1_name->Visible = false;
		lbl_player2_2_name->Visible = false;
		lbl_player2_3_name->Visible = false;
		lbl_player2_4_name->Visible = false;
		lbl_player2_5_name->Visible = false;
		lbl_player2_handValue->Visible = false;
		lbl_player2_handValueTitle->Visible = false;
		lbl_player2_handStatus->Visible = false;
		btn_player2_hit->Visible = false;
		btn_player2_stand->Visible = false;

		pb_player3_1->Visible = false;
		pb_player3_2->Visible = false;
		pb_player3_3->Visible = false;
		pb_player3_4->Visible = false;
		pb_player3_5->Visible = false;
		lbl_player3_1_name->Visible = false;
		lbl_player3_2_name->Visible = false;
		lbl_player3_3_name->Visible = false;
		lbl_player3_4_name->Visible = false;
		lbl_player3_5_name->Visible = false;
		lbl_player3_handValue->Visible = false;
		lbl_player3_handValueTitle->Visible = false;
		lbl_player3_handStatus->Visible = false;
		btn_player3_hit->Visible = false;
		btn_player3_stand->Visible = false;

		pb_dealer_1->Visible = false;
		pb_dealer_2->Visible = false;
		pb_dealer_3->Visible = false;
		pb_dealer_4->Visible = false;
		pb_dealer_5->Visible = false;
		lbl_dealer_1_name->Visible = false;
		lbl_dealer_2_name->Visible = false;
		lbl_dealer_3_name->Visible = false;
		lbl_dealer_4_name->Visible = false;
		lbl_dealer_5_name->Visible = false;
		lbl_dealer_handValueTitle->Visible = false;
		lbl_dealer_handValue->Visible = false;

		lbl_dealer_handStatus->Visible = false;
		lbl_gameOver->Visible = false;
		lbl_gameNumber->Visible = false;

		// make screen 2 objects appear
		pb_deckImage->Visible = true;
		pb_dealtCard->Visible = true;
		btn_stats->Visible = true;
	}

	/**************************************************************************
	***************************************************************************
	***
	*** loadCardNames()
	***
	*** Fill the array that holds the name values for each card in the deck
	***
	***************************************************************************
	**************************************************************************/
	void loadCardNames()
	{
		// Load the names of each card
		strCardName[0]   = "Ace of Clubs";
		strCardName[1]   = "Two of Clubs";
		strCardName[2]   = "Three of Clubs";
		strCardName[3]   = "Four of Clubs";
		strCardName[4]   = "Five of Clubs";
		strCardName[5]   = "Six of Clubs";
		strCardName[6]   = "Seven of Clubs";
		strCardName[7]   = "Eight of Clubs";
		strCardName[8]   = "Nine of Clubs";
		strCardName[9]   = "Ten of Clubs";
		strCardName[10]   = "Jack of Clubs";
		strCardName[11]   = "Queen of Clubs";
		strCardName[12]   = "King of Clubs";

		strCardName[13]   = "Ace of Diamonds";
		strCardName[14]   = "Two of Diamonds";
		strCardName[15]   = "Three of Diamonds";
		strCardName[16]   = "Four of Diamonds";
		strCardName[17]   = "Five of Diamonds";
		strCardName[18]   = "Six of Diamonds";
		strCardName[19]   = "Seven of Diamonds";
		strCardName[20]   = "Eight of Diamonds";
		strCardName[21]   = "Nine of Diamonds";
		strCardName[22]   = "Ten of Diamonds";
		strCardName[23]   = "Jack of Diamonds";
		strCardName[24]   = "Queen of Diamonds";
		strCardName[25]   = "King of Diamonds";

		strCardName[26]   = "Ace of Hearts";
		strCardName[27]   = "Two of Hearts";
		strCardName[28]   = "Three of Hearts";
		strCardName[29]   = "Four of Hearts";
		strCardName[30]   = "Five of Hearts";
		strCardName[31]   = "Six of Hearts";
		strCardName[32]   = "Seven of Hearts";
		strCardName[33]   = "Eight of Hearts";
		strCardName[34]   = "Nine of Hearts";
		strCardName[35]   = "Ten of Hearts";
		strCardName[36]   = "Jack of Hearts";
		strCardName[37]   = "Queen of Hearts";
		strCardName[38]   = "King of Hearts";

		strCardName[39]   = "Ace of Spades";
		strCardName[40]   = "Two of Spades";
		strCardName[41]   = "Three of Spades";
		strCardName[42]   = "Four of Spades";
		strCardName[43]   = "Five of Spades";
		strCardName[44]   = "Six of Spades";
		strCardName[45]   = "Seven of Spades";
		strCardName[46]   = "Eight of Spades";
		strCardName[47]   = "Nine of Spades";
		strCardName[48]   = "Ten of Spades";
		strCardName[49]   = "Jack of Spades";
		strCardName[50]   = "Queen of Spades";
		strCardName[51]   = "King of Spades";
	}

	/**************************************************************************
	***************************************************************************
	***
	*** loadCardValues()
	***
	*** populate the array that holds the point value for each card
	***
	***************************************************************************
	**************************************************************************/
	void loadCardValues()
	{
		// clubs
		intCardPointValue[0] = 11;
		intCardPointValue[1] = 2;
		intCardPointValue[2] = 3;
		intCardPointValue[3] = 4;
		intCardPointValue[4] = 5;
		intCardPointValue[5] = 6;
		intCardPointValue[6] = 7;
		intCardPointValue[7] = 8;
		intCardPointValue[8] = 9;
		intCardPointValue[9] = 10;
		intCardPointValue[10] = 10;
		intCardPointValue[11] = 10;
		intCardPointValue[12] = 10;

		// diamonds
		intCardPointValue[13] = 11;
		intCardPointValue[14] = 2;
		intCardPointValue[15] = 3;
		intCardPointValue[16] = 4;
		intCardPointValue[17] = 5;
		intCardPointValue[18] = 6;
		intCardPointValue[19] = 7;
		intCardPointValue[20] = 8;
		intCardPointValue[21] = 9;
		intCardPointValue[22] = 10;
		intCardPointValue[23] = 10;
		intCardPointValue[24] = 10;
		intCardPointValue[25] = 10;

		// hearts
		intCardPointValue[26] = 11;
		intCardPointValue[27] = 2;
		intCardPointValue[28] = 3;
		intCardPointValue[29] = 4;
		intCardPointValue[30] = 5;
		intCardPointValue[31] = 6;
		intCardPointValue[32] = 7;
		intCardPointValue[33] = 8;
		intCardPointValue[34] = 9;
		intCardPointValue[35] = 10;
		intCardPointValue[36] = 10;
		intCardPointValue[37] = 10;
		intCardPointValue[38] = 10;

		// spades
		intCardPointValue[39] = 11;
		intCardPointValue[40] = 2;
		intCardPointValue[41] = 3;
		intCardPointValue[42] = 4;
		intCardPointValue[43] = 5;
		intCardPointValue[44] = 6;
		intCardPointValue[45] = 7;
		intCardPointValue[46] = 8;
		intCardPointValue[47] = 9;
		intCardPointValue[48] = 10;
		intCardPointValue[49] = 10;
		intCardPointValue[50] = 10;
		intCardPointValue[51] = 10;
	}

	/**************************************************************************
	***************************************************************************
	***
	*** randomizeDeck()
	***
	*** Shuffle the deck values so that a new game can begin
	***
	***************************************************************************
	**************************************************************************/
	void randomizeDeck()
	{
		int* intBaseCardDeck = new int[DECK_SIZE];
		int intRandomIndex;

		// populate the base deck with randomized start values
		// ... just to ensure the next shuffles are more random seeming
		intBaseCardDeck[0]  = 8;
		intBaseCardDeck[1]  = 3;
		intBaseCardDeck[2]  = 13;
		intBaseCardDeck[3]  = 17;
		intBaseCardDeck[4]  = 2;
		intBaseCardDeck[5]  = 32;
		intBaseCardDeck[6]  = 42;
		intBaseCardDeck[7]  = 33;
		intBaseCardDeck[8]  = 14;
		intBaseCardDeck[9]  = 20;
		intBaseCardDeck[10] = 25;
		intBaseCardDeck[11] = 12;
		intBaseCardDeck[12] = 46;
		intBaseCardDeck[13] = 51;
		intBaseCardDeck[14] = 31;
		intBaseCardDeck[15] = 1;
		intBaseCardDeck[16] = 30;
		intBaseCardDeck[17] = 21;
		intBaseCardDeck[18] = 9;
		intBaseCardDeck[19] = 47;
		intBaseCardDeck[20] = 10;
		intBaseCardDeck[21] = 0;
		intBaseCardDeck[22] = 49;
		intBaseCardDeck[23] = 39;
		intBaseCardDeck[24] = 4;
		intBaseCardDeck[25] = 22;
		intBaseCardDeck[26] = 26;
		intBaseCardDeck[27] = 48;
		intBaseCardDeck[28] = 7;
		intBaseCardDeck[29] = 23;
		intBaseCardDeck[30] = 11;
		intBaseCardDeck[31] = 18;
		intBaseCardDeck[32] = 50;
		intBaseCardDeck[33] = 19;
		intBaseCardDeck[34] = 44;
		intBaseCardDeck[35] = 41;
		intBaseCardDeck[36] = 34;
		intBaseCardDeck[37] = 45;
		intBaseCardDeck[38] = 29;
		intBaseCardDeck[39] = 43;
		intBaseCardDeck[40] = 40;
		intBaseCardDeck[41] = 36;
		intBaseCardDeck[42] = 6;
		intBaseCardDeck[43] = 5;
		intBaseCardDeck[44] = 15;
		intBaseCardDeck[45] = 27;
		intBaseCardDeck[46] = 24;
		intBaseCardDeck[47] = 16;
		intBaseCardDeck[48] = 37;
		intBaseCardDeck[49] = 35;
		intBaseCardDeck[50] = 28;
		intBaseCardDeck[51] = 38;

		// shuffle the deck
		for ( int count = 0; count < DECK_SIZE; count++ )
		{
			// generate a "random" index (range is 1 less for each loop)
			DateTime now = DateTime::Now;
			//Random^ getRandom = gcnew Random( now.Millisecond );
			Random^ getRandom = gcnew Random( );
			intRandomIndex = getRandom->Next(0, (DECK_SIZE - count));

			// move the index from the base array with the random index number
			intCardIndex[count] = intBaseCardDeck[intRandomIndex];

			// move the last entry value in the base deck into the just given entry
			intBaseCardDeck[intRandomIndex] = intBaseCardDeck[DECK_SIZE - count - 1];
		}
		
		// shuffle it again, just to make sure...
		
		// place the shuffled card values back into the base array
		for ( int count = 0; count < DECK_SIZE; count++ )
		{
			intBaseCardDeck[count] = intCardIndex[DECK_SIZE - 1 - count];
		}

		// and then run the randomize again!
		for ( int count = 0; count < DECK_SIZE; count++ )
		{
			// generate a "random" index (range is 1 less for each loop)
			DateTime now = DateTime::Now;
			Random^ getRandom = gcnew Random( now.Millisecond );
			intRandomIndex = getRandom->Next(0, (DECK_SIZE - count));

			// move the index from the base array with the random index number
			intCardIndex[count] = intBaseCardDeck[intRandomIndex];

			// move the last entry value in the base deck into the just given entry
			intBaseCardDeck[intRandomIndex] = intBaseCardDeck[DECK_SIZE - count - 1];
		}
	}

	/**************************************************************************
	***************************************************************************
	*** testForAceInBustedHand()
	***
	*** If a hand evaluates to > 21, check for Aces in the hand. If there is
	*** an Ace, reduce the hand's value by 10 and re-evalutate it.
	***
	***************************************************************************
	**************************************************************************/
	void testForAceInBustedHand()
	{
		const int MAX_GOOD_HAND_VALUE = 21;
		const int ACE = 11;

		if ( activePlayer == 1 && player1_handValue > MAX_GOOD_HAND_VALUE )
		{
			for ( int count = 0; count < player1_activeCard; count++ )
			{
				if ( intPlayer1CardValues[count] == ACE )
				{
					intPlayer1CardValues[count] = intPlayer1CardValues[count] - 10;
					player1_handValue = player1_handValue - 10;
					
					switch ( count )
					{
					case 0:
						{
						lbl_player1_1_name->Text = strCardName[intPlayer1Cards[count]] + " = " +
												   intPlayer1CardValues[count].ToString();
						
						count = player1_activeCard;
						break;
						}
					case 1:
						{
						lbl_player1_2_name->Text = strCardName[intPlayer1Cards[count]] + " = " +
												   intPlayer1CardValues[count].ToString();
						
						count = player1_activeCard;
						break;
						}
					case 2:
						{
						lbl_player1_3_name->Text = strCardName[intPlayer1Cards[count]] + " = " +
												   intPlayer1CardValues[count].ToString();
						
						count = player1_activeCard;
						break;
						}
					case 3:
						{
						lbl_player1_4_name->Text = strCardName[intPlayer1Cards[count]] + " = " +
												   intPlayer1CardValues[count].ToString();
						
						count = player1_activeCard;
						break;
						}
					case 4:
						{
						lbl_player1_5_name->Text = strCardName[intPlayer1Cards[count]] + " = " +
												   intPlayer1CardValues[count].ToString();
						
						count = player1_activeCard;
						break;
						}
					}
					testForAceInBustedHand();
				}
				
			}
		}
		else if ( activePlayer == 2 && player2_handValue > MAX_GOOD_HAND_VALUE )
		{
			for ( int count = 0; count < player2_activeCard; count++ )
			{
				if ( intPlayer2CardValues[count] == ACE )
				{
					intPlayer2CardValues[count] = intPlayer2CardValues[count] - 10;
					player2_handValue = player2_handValue - 10;

					switch ( count )
					{
					case 0:
						{
						lbl_player2_1_name->Text = strCardName[intPlayer2Cards[count]] + " = " +
												   intPlayer2CardValues[count].ToString();
						count = player2_activeCard;
						break;
						}
					case 1:
						{
						lbl_player2_2_name->Text = strCardName[intPlayer2Cards[count]] + " = " +
												   intPlayer2CardValues[count].ToString();
						count = player2_activeCard;
						break;
						}
					case 2:
						{
						lbl_player2_3_name->Text = strCardName[intPlayer2Cards[count]] + " = " +
												   intPlayer2CardValues[count].ToString();
						count = player2_activeCard;
						break;
						}
					case 3:
						{
						lbl_player2_4_name->Text = strCardName[intPlayer2Cards[count]] + " = " +
												   intPlayer2CardValues[count].ToString();
						count = player2_activeCard;
						break;
						}
					case 4:
						{
						lbl_player2_5_name->Text = strCardName[intPlayer2Cards[count]] + " = " +
												   intPlayer2CardValues[count].ToString();
						count = player2_activeCard;
						break;
						}
					}
					testForAceInBustedHand();
				}
				
			}
		}
		else if ( activePlayer == 3 && player3_handValue > MAX_GOOD_HAND_VALUE )
		{
			for ( int count = 0; count < player3_activeCard; count++ )
			{
				if ( intPlayer3CardValues[count] == ACE )
				{
					intPlayer3CardValues[count] = intPlayer3CardValues[count] - 10;
					player3_handValue = player3_handValue - 10;

					switch ( count )
					{
					case 0:
						{
						lbl_player3_1_name->Text = strCardName[intPlayer3Cards[count]] + " = " +
												   intPlayer3CardValues[count].ToString();
						count = player3_activeCard;
						break;
						}
					case 1:
						{
						lbl_player3_2_name->Text = strCardName[intPlayer3Cards[count]] + " = " +
												   intPlayer3CardValues[count].ToString();
						count = player3_activeCard;
						break;
						}
					case 2:
						{
						lbl_player3_3_name->Text = strCardName[intPlayer3Cards[count]] + " = " +
												   intPlayer3CardValues[count].ToString();
						count = player3_activeCard;
						break;
						}
					case 3:
						{
						lbl_player3_4_name->Text = strCardName[intPlayer3Cards[count]] + " = " +
												   intPlayer3CardValues[count].ToString();
						count = player3_activeCard;
						break;
						}
					case 4:
						{
						lbl_player3_5_name->Text = strCardName[intPlayer3Cards[count]] + " = " +
												   intPlayer3CardValues[count].ToString();
						count = player3_activeCard;
						break;
						}
					}
					testForAceInBustedHand();
				}
			}
		}
		else if ( activePlayer == 4 && dealer_handValue > MAX_GOOD_HAND_VALUE )
		{
			for ( int count = 0; count < dealer_activeCard; count++ )
			{
				if ( intDealersCardValues[count] == ACE )
				{
					intDealersCardValues[count] = intDealersCardValues[count] - 10;
					dealer_handValue = dealer_handValue - 10;

					switch ( count )
					{
					case 0:
						{
						lbl_dealer_1_name->Text = strCardName[intDealersCards[count]] + " = " +
												   intDealersCardValues[count].ToString();
						count = dealer_activeCard;
						break;
						}
					case 1:
						{
						lbl_dealer_2_name->Text = strCardName[intDealersCards[count]] + " = " +
												   intDealersCardValues[count].ToString();
						count = dealer_activeCard;
						break;
						}
					case 2:
						{
						lbl_dealer_3_name->Text = strCardName[intDealersCards[count]] + " = " +
												   intDealersCardValues[count].ToString();
						count = dealer_activeCard;
						break;
						}
					case 3:
						{
						lbl_dealer_4_name->Text = strCardName[intDealersCards[count]] + " = " +
												   intDealersCardValues[count].ToString();
						count = dealer_activeCard;
						break;
						}
					case 4:
						{
						lbl_dealer_5_name->Text = strCardName[intDealersCards[count]] + " = " +
												   intDealersCardValues[count].ToString();
						count = dealer_activeCard;
						break;
						}
					}
					testForAceInBustedHand();
				}
			}
		}
	}

	/**************************************************************************
	***************************************************************************
	***
	*** testForBustedHand()
	***
	*** Checks active player's hand value to see if it's busted
	***
	***************************************************************************
	**************************************************************************/
	void testForBustedHand()
	{
		const int MAX_GOOD_HAND_VALUE = 21;
		const int MAX_CARDS_IN_HAND = 5;

		if ( activePlayer == 1 )
		{
			if ( player1_handValue > MAX_GOOD_HAND_VALUE )
			{
				boolPlayer1_handActive = false;
				lbl_player1_handStatus->Text = "Bust!";
				intPlayer1_gamesLostCount++;
				intPlayer1_gamesLostCount_bust++;
				lbl_player1_handStatus->Visible = true;
				btn_player1_stand->Visible = false;
				btn_player1_hit->Visible = false;
				activePlayer++;
			}
			else if ( player1_handValue == MAX_GOOD_HAND_VALUE )
			{
				boolPlayer1_handActive = false;
				lbl_player1_handStatus->Text = "You Win!";
				intPlayer1_gamesWonCount++;
				intPlayer1_gamesWonCount_21++;
				lbl_player1_handStatus->Visible = true;
				btn_player1_stand->Visible = false;
				btn_player1_hit->Visible = false;
				activePlayer++;
			}
			else if ( player1_activeCard >= MAX_CARDS_IN_HAND )
			{
				boolPlayer1_handActive = false;
				lbl_player1_handStatus->Text = "5 Card Charlie!";
				intPlayer1_gamesWonCount++;
				intPlayer1_gamesWonCount_5cc++;
				lbl_player1_handStatus->Visible = true;
				btn_player1_stand->Visible = false;
				btn_player1_hit->Visible = false;
				activePlayer++;
			}
			else
			{
				// do nothing
			}
		}
		else if ( activePlayer == 2 )
		{
			if ( player2_handValue > MAX_GOOD_HAND_VALUE )
			{
				boolPlayer2_handActive = false;
				lbl_player2_handStatus->Text = "Bust!";
				intPlayer2_gamesLostCount++;
				intPlayer2_gamesLostCount_bust++;
				lbl_player2_handStatus->Visible = true;
				btn_player2_stand->Visible = false;
				btn_player2_hit->Visible = false;
				activePlayer++;
			}
			else if ( player2_handValue == MAX_GOOD_HAND_VALUE )
			{
				boolPlayer2_handActive = false;
				lbl_player2_handStatus->Text = "You Win!";
				intPlayer2_gamesWonCount++;
				intPlayer2_gamesWonCount_21++;
				lbl_player2_handStatus->Visible = true;
				btn_player2_stand->Visible = false;
				btn_player2_hit->Visible = false;
				activePlayer++;
			}
			else if ( player2_activeCard >= MAX_CARDS_IN_HAND )
			{
				boolPlayer2_handActive = false;
				lbl_player2_handStatus->Text = "5 Card Charlie!";
				intPlayer2_gamesWonCount++;
				intPlayer2_gamesWonCount_5cc++;
				lbl_player2_handStatus->Visible = true;
				btn_player2_stand->Visible = false;
				btn_player2_hit->Visible = false;
				activePlayer++;
			}			
			else
			{
				// Do nothing
			}
		}
		else if ( activePlayer == 3 )
		{
			if ( player3_handValue > MAX_GOOD_HAND_VALUE )
			{
				boolPlayer3_handActive = false;
				lbl_player3_handStatus->Text = "Bust!";
				intPlayer3_gamesLostCount++;
				intPlayer3_gamesLostCount_bust++;
				lbl_player3_handStatus->Visible = true;
				btn_player3_stand->Visible = false;
				btn_player3_hit->Visible = false;
				activePlayer++;
			}
			else if ( player3_handValue == MAX_GOOD_HAND_VALUE )
			{
				boolPlayer3_handActive = false;
				lbl_player3_handStatus->Text = "You Win!";
				intPlayer3_gamesWonCount++;
				intPlayer3_gamesWonCount_21++;
				lbl_player3_handStatus->Visible = true;
				btn_player3_stand->Visible = false;
				btn_player3_hit->Visible = false;
				activePlayer++;
			}
			else if ( player3_activeCard >= MAX_CARDS_IN_HAND )
			{
				boolPlayer3_handActive = false;
				lbl_player3_handStatus->Text = "5 Card Charlie!";
				intPlayer3_gamesWonCount++;
				intPlayer3_gamesWonCount_5cc++;
				lbl_player3_handStatus->Visible = true;
				btn_player3_stand->Visible = false;
				btn_player3_hit->Visible = false;
				activePlayer++;
			}			
			else
			{
				// do nothing
			}
		}
		else
		{
			// Do nothing
		}

	}

/*#############################################################################
###############################################################################
###############################################################################
###
###                      END: CUSTOM-BUILT FUNCTIONS
###
###############################################################################
###############################################################################
#############################################################################*/


/*#############################################################################
###############################################################################
###############################################################################
###
###                     BEGIN: EVENT-DRIVEN FUNCTIONS
###
###############################################################################
###############################################################################
#############################################################################*/

private: System::Void timer_currentTime_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
			 displayCurrentTime();
		 }

private: System::Void btn_showCurrentTime_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if ( lbl_currentTime_title->Visible == true )
			 {
				lbl_currentTime_title->Visible = false;
				lbl_currentTime->Visible = false;
				lbl_elapsedTime_title->Visible = false;
				lbl_elapsedTime->Visible = false;
				btn_showCurrentTime->Text = "Show Current Time";
			 }
			 else
			 {
				lbl_currentTime_title->Visible = true;
				lbl_currentTime->Visible = true;
				lbl_elapsedTime_title->Visible = true;
				lbl_elapsedTime->Visible = true;
				btn_showCurrentTime->Text = "Hide Current Time";
			 }
		 }
private: System::Void timer_animationLoop_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
			 const int suitLength = 13;
			 const int clubStartIndex = 0;
			 const int heartEndIndex = 38;

			 // Change the animation frame to next image (both up and down sequence).
			 pb_deckUp->Image = il_deck->Images[clubStartIndex + intAnimationCounter];
			 pb_deckDown->Image = il_deck->Images[heartEndIndex - intAnimationCounter];

			 // increment counter to point to next image index
			 intAnimationCounter++;

			 // If all 13 cards have been shown, reset the counter.
			 if (intAnimationCounter >= suitLength )
			 {
				 intAnimationCounter = 0;
			 }
		 }
private: System::Void btn_rules_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 MessageBox::Show(
				 "The basic premise of Black Jack is that you want to have a hand "  +
				 "value that is closer to 21 than that of the dealer, without "      +
				 "going over 21. Other players at the table are of no concern. "     +
				 "Your hand is strictly played out against the hand of the "         +
				 "dealer.\n\n"                                                       +
				 "The cards are valued as follows:\n"                                +
				 "\t• Aces are valued at either 1 or 11, whichever is best for "     +
				 "the player.\n"                                                     + 
                 "\t• Cards 2-10 are valued at their face value.\n"                  +
				 "\t• Face cards (Jack, Queen, and King) are all valued at "         +
				 "10.\n\n"                                                           +
				 "The value of a hand is simply the sum of the point count of "      +
				 "each card in the hand. For example, a hand containing (5,7,9) "    +
				 "has the value of 21. The Ace can be counted as either 1 or 11. "   +
				 "You need not specify which value the Ace has. It's assumed to "    +
				 "always have the value that makes the best hand.\n\n"               +
				 "The Deal of the Cards:\n"                                          +
                 "The dealer will deal the cards,making two passes around the "      +
				 "table starting at his left (your right) so that the players "      +
				 "and the dealer have two cards each. The player's cards are both "  +
				 "dealt face-up, but only the second of the dealer's cards will be " +
				 "shown at this time.\n\n"                                           +
				 "Play of the hand:\n"                                               +
				 "If a player's hand has a value of 21 points with 2 cards, they "   +
				 "automatically win. Otherwise, the players, one-by-one, starting "  + 
				 "from dealer's left, decide if they wish to have another card "     +
				 "dealt to them (hit) or would rather stop with what they have "     +
				 "(stand). They may ask for up to 3 additional cards unless "        +
				 "their hand's value exceeds 21 points (busts).\n\n"                 +
				 "After all player's hands have either 'Stood' or 'Busted', the "    +
				 "dealer plays their hand. Both of their cards are now revealed. "   +
				 "If their hand evaluates to 15 points or less, they must take "     +
				 "another card (hit). If their hand is valued at 16 points or "      +
				 "more, they must 'stand'.  The dealer repeats this until their "    +
				 "hand value is equal or greater than 16 or their hand exceeds 21 "  +
				 "(busts).\n\n"                                                      +
				 "Player's hands with a value greater than what the dealer's hand "  +
				 "is worth without having gone 'bust', win.",
				 "Rules of the Game" );
		 }
private: System::Void btn_login_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 btn_login->Visible = false;
			 lbl_pg1_instructions->Text = "Type in your first and last name,\n" +
				                          "then click the 'Continue' button.";
			 lbl_pg1_instructions2->Visible = true;
			 tb_userName->Text = "";
			 tb_userName->Visible = true;
			 tb_userName->Focus();
			 btn_continue->Visible = true;
			 timer_btn_continue->Enabled = true;
		 }
private: System::Void btn_continue_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 timer_btn_continue->Enabled = false;
			 displayLoginConfirmation_message();
		 }
private: System::Void btn_exit_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 displayExit_message();
			 displayProgramIdInfo_message();
			 Close();
		 }
private: System::Void btn_deal_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 startDeal();
			 timer_btnDeal->Enabled = false;
		 }
private: System::Void timer_dealCard_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
			 dealCard();
		 }
private: System::Void btn_player1_stand_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 lbl_player1_handStatus->Text = "Stand";
			 lbl_player1_handStatus->Visible = true;
			 boolPlayer1_handActive = false;
			 btn_player1_stand->Visible = false;
			 btn_player1_hit->Visible = false;
			 activePlayer++;
			 determineNextPlayer();
		 }
private: System::Void btn_player1_hit_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			timer_dealCard->Enabled = true;
		 }
private: System::Void btn_player2_stand_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 lbl_player2_handStatus->Text = "Stand";
			 lbl_player2_handStatus->Visible = true;
			 boolPlayer2_handActive = false;
			 btn_player2_stand->Visible = false;
			 btn_player2_hit->Visible = false;
			 activePlayer++;
			 determineNextPlayer();
		 }
private: System::Void btn_player2_hit_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			timer_dealCard->Enabled = true;
		 }
private: System::Void btn_player3_stand_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 lbl_player3_handStatus->Text = "Stand";
			 lbl_player3_handStatus->Visible = true;
			 boolPlayer3_handActive = false;
			 btn_player3_stand->Visible = false;
			 btn_player3_hit->Visible = false;
			 activePlayer++;
			 determineNextPlayer();
		 }
private: System::Void btn_player3_hit_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			timer_dealCard->Enabled = true;
		 }
private: System::Void btn_stats_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 displaySessionStatistics_message();
		 }


private: System::Void timer_btnDeal_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if ( colorID%2 == 0)
			 {
				 btn_deal->BackColor = btn_darkGreen->BackColor;
				 colorID++;
			 }
			 else
			 {
				 btn_deal->BackColor = btn_mediumGreen->BackColor;
				 colorID++;
			 }
		 }
private: System::Void timer_btn_continue_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if ( colorID%2 == 0)
			 {
				 btn_continue->BackColor = btn_darkGreen->BackColor;
				 colorID++;
			 }
			 else
			 {
				 btn_continue->BackColor = btn_mediumGreen->BackColor;
				 colorID++;
			 }
		 }

/*#############################################################################
###############################################################################
###############################################################################
###
###                         END: EVENT-DRIVEN FUNCTIONS
###
###############################################################################
###############################################################################
#############################################################################*/
private: System::Void lbl_pg1_header_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

