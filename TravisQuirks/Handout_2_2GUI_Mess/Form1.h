/**************************************************************
*************************************************************** 
***************************************************************
***                                            	    		***
***			   HANDOUT #2.GUI_MESS --  GUI MESS			    ***
***                                                 		***
***                     CISC 192 -- C++                     ***
***                  Professor Larry Forman                 ***
***                     LForman@sdccd.edu                   ***
***                        619.388.3666                     ***
**                                                   		***
***************************************************************
***************************************************************
***                                                			***
***                   	  KEY CONCEPTS                      ***
***                                                			***
***				Global variables, static variables			***
***			DateTime, String^, functions with parameters	***
***				bool, if, if-else, ToString(), Parse        ***
***                  timer, pictureBox, MessageBox          ***
***					  DialogResult, Threads/Sleep           ***
***                                                			***
***************************************************************
**************************************************************/

#pragma once

namespace Handout_2_2GUI_Mess 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;		//NOTE:  I added this namespace to play sound!!

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
			//A custom-defined, non-event-driven function
			displayDateAndTime();
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
	private: System::Windows::Forms::Button^  buttonElapsedTime;
	private: System::Windows::Forms::Button^  buttonDateTime;
	private: System::Windows::Forms::Label^  labelDateTime;
	private: System::Windows::Forms::PictureBox^  pictureBoxAce;
	private: System::Windows::Forms::PictureBox^  pictureBoxTen;
	private: System::Windows::Forms::PictureBox^  pictureBoxFive;
	private: System::Windows::Forms::Label^  labelFirstCardValue;
	private: System::Windows::Forms::Label^  labelFirstCard;
	private: System::Windows::Forms::Label^  labelFirstCardName;
	private: System::Windows::Forms::Label^  labelNextCardName;
	private: System::Windows::Forms::Label^  labelNextCardValue;
	private: System::Windows::Forms::Label^  labelNextCard;
	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

	private: System::Windows::Forms::Button^  buttonAddCards;
	private: System::Windows::Forms::PictureBox^  pictureBoxCardAnimation;
	private: System::Windows::Forms::Timer^  timerCardAnimation;
	private: System::Windows::Forms::Button^  buttonExit;

	//Global variables -- when initialized they MUST be declared static
	static bool firstCardSelected = false;
	private: System::Windows::Forms::Button^  buttonPlayOn;
			 static int  counter			  = 0;

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
			this->buttonElapsedTime = (gcnew System::Windows::Forms::Button());
			this->buttonDateTime = (gcnew System::Windows::Forms::Button());
			this->labelDateTime = (gcnew System::Windows::Forms::Label());
			this->pictureBoxAce = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxTen = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxFive = (gcnew System::Windows::Forms::PictureBox());
			this->labelFirstCardValue = (gcnew System::Windows::Forms::Label());
			this->labelFirstCard = (gcnew System::Windows::Forms::Label());
			this->labelFirstCardName = (gcnew System::Windows::Forms::Label());
			this->labelNextCardName = (gcnew System::Windows::Forms::Label());
			this->labelNextCardValue = (gcnew System::Windows::Forms::Label());
			this->labelNextCard = (gcnew System::Windows::Forms::Label());
			this->buttonAddCards = (gcnew System::Windows::Forms::Button());
			this->pictureBoxCardAnimation = (gcnew System::Windows::Forms::PictureBox());
			this->timerCardAnimation = (gcnew System::Windows::Forms::Timer(this->components));
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonPlayOn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxAce))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxTen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxFive))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxCardAnimation))->BeginInit();
			this->SuspendLayout();
			// 
			// labelWelcome
			// 
			this->labelWelcome->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->labelWelcome->AutoSize = true;
			this->labelWelcome->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelWelcome->Font = (gcnew System::Drawing::Font(L"Poor Richard", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelWelcome->Location = System::Drawing::Point(179, 34);
			this->labelWelcome->Name = L"labelWelcome";
			this->labelWelcome->Size = System::Drawing::Size(435, 110);
			this->labelWelcome->TabIndex = 2;
			this->labelWelcome->Text = L"Welcome Friends and Neighbors\r\nto\r\nLarry\'s Black Jack Room ";
			this->labelWelcome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonElapsedTime
			// 
			this->buttonElapsedTime->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buttonElapsedTime->FlatAppearance->BorderSize = 4;
			this->buttonElapsedTime->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Lime;
			this->buttonElapsedTime->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Yellow;
			this->buttonElapsedTime->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonElapsedTime->Font = (gcnew System::Drawing::Font(L"Poor Richard", 14.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->buttonElapsedTime->Location = System::Drawing::Point(628, 194);
			this->buttonElapsedTime->Name = L"buttonElapsedTime";
			this->buttonElapsedTime->Size = System::Drawing::Size(123, 70);
			this->buttonElapsedTime->TabIndex = 30;
			this->buttonElapsedTime->Text = L"Elapsed Time";
			this->buttonElapsedTime->UseVisualStyleBackColor = true;
			this->buttonElapsedTime->Visible = false;
			this->buttonElapsedTime->Click += gcnew System::EventHandler(this, &Form1::buttonElapsedTime_Click);
			// 
			// buttonDateTime
			// 
			this->buttonDateTime->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buttonDateTime->FlatAppearance->BorderSize = 4;
			this->buttonDateTime->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Lime;
			this->buttonDateTime->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Yellow;
			this->buttonDateTime->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDateTime->Font = (gcnew System::Drawing::Font(L"Poor Richard", 14.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->buttonDateTime->Location = System::Drawing::Point(628, 145);
			this->buttonDateTime->Name = L"buttonDateTime";
			this->buttonDateTime->Size = System::Drawing::Size(123, 39);
			this->buttonDateTime->TabIndex = 29;
			this->buttonDateTime->Text = L"Date/Time";
			this->buttonDateTime->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->buttonDateTime->UseVisualStyleBackColor = true;
			this->buttonDateTime->Click += gcnew System::EventHandler(this, &Form1::buttonDateTime_Click);
			// 
			// labelDateTime
			// 
			this->labelDateTime->AutoSize = true;
			this->labelDateTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelDateTime->Location = System::Drawing::Point(625, 91);
			this->labelDateTime->Name = L"labelDateTime";
			this->labelDateTime->Size = System::Drawing::Size(79, 26);
			this->labelDateTime->TabIndex = 28;
			this->labelDateTime->Text = L"Current Date\r\nand Time\r\n";
			this->labelDateTime->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBoxAce
			// 
			this->pictureBoxAce->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxAce.Image")));
			this->pictureBoxAce->Location = System::Drawing::Point(376, 246);
			this->pictureBoxAce->Name = L"pictureBoxAce";
			this->pictureBoxAce->Size = System::Drawing::Size(54, 75);
			this->pictureBoxAce->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxAce->TabIndex = 33;
			this->pictureBoxAce->TabStop = false;
			this->pictureBoxAce->Tag = L"Ace 11";
			this->pictureBoxAce->Click += gcnew System::EventHandler(this, &Form1::pictureBoxAce_Click);
			// 
			// pictureBoxTen
			// 
			this->pictureBoxTen->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxTen.Image")));
			this->pictureBoxTen->Location = System::Drawing::Point(348, 223);
			this->pictureBoxTen->Name = L"pictureBoxTen";
			this->pictureBoxTen->Size = System::Drawing::Size(54, 75);
			this->pictureBoxTen->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxTen->TabIndex = 32;
			this->pictureBoxTen->TabStop = false;
			this->pictureBoxTen->Tag = L"Ten";
			this->pictureBoxTen->Click += gcnew System::EventHandler(this, &Form1::pictureBoxTen_Click);
			// 
			// pictureBoxFive
			// 
			this->pictureBoxFive->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxFive.Image")));
			this->pictureBoxFive->Location = System::Drawing::Point(322, 185);
			this->pictureBoxFive->Name = L"pictureBoxFive";
			this->pictureBoxFive->Size = System::Drawing::Size(54, 75);
			this->pictureBoxFive->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxFive->TabIndex = 31;
			this->pictureBoxFive->TabStop = false;
			this->pictureBoxFive->Tag = L"5";
			this->pictureBoxFive->Click += gcnew System::EventHandler(this, &Form1::pictureBoxFive_Click);
			// 
			// labelFirstCardValue
			// 
			this->labelFirstCardValue->AutoSize = true;
			this->labelFirstCardValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelFirstCardValue->Location = System::Drawing::Point(526, 347);
			this->labelFirstCardValue->Name = L"labelFirstCardValue";
			this->labelFirstCardValue->Size = System::Drawing::Size(27, 13);
			this->labelFirstCardValue->TabIndex = 35;
			this->labelFirstCardValue->Text = L". . .";
			this->labelFirstCardValue->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// labelFirstCard
			// 
			this->labelFirstCard->AutoSize = true;
			this->labelFirstCard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelFirstCard->Location = System::Drawing::Point(280, 347);
			this->labelFirstCard->Name = L"labelFirstCard";
			this->labelFirstCard->Size = System::Drawing::Size(119, 13);
			this->labelFirstCard->TabIndex = 34;
			this->labelFirstCard->Text = L"First Selected Card:";
			// 
			// labelFirstCardName
			// 
			this->labelFirstCardName->AutoSize = true;
			this->labelFirstCardName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelFirstCardName->Location = System::Drawing::Point(405, 347);
			this->labelFirstCardName->Name = L"labelFirstCardName";
			this->labelFirstCardName->Size = System::Drawing::Size(105, 13);
			this->labelFirstCardName->TabIndex = 36;
			this->labelFirstCardName->Text = L"(Click on a card!)";
			this->labelFirstCardName->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// labelNextCardName
			// 
			this->labelNextCardName->AutoSize = true;
			this->labelNextCardName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelNextCardName->Location = System::Drawing::Point(405, 379);
			this->labelNextCardName->Name = L"labelNextCardName";
			this->labelNextCardName->Size = System::Drawing::Size(105, 13);
			this->labelNextCardName->TabIndex = 39;
			this->labelNextCardName->Text = L"(Click on a card!)";
			this->labelNextCardName->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// labelNextCardValue
			// 
			this->labelNextCardValue->AutoSize = true;
			this->labelNextCardValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelNextCardValue->Location = System::Drawing::Point(526, 379);
			this->labelNextCardValue->Name = L"labelNextCardValue";
			this->labelNextCardValue->Size = System::Drawing::Size(27, 13);
			this->labelNextCardValue->TabIndex = 38;
			this->labelNextCardValue->Text = L". . .";
			this->labelNextCardValue->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// labelNextCard
			// 
			this->labelNextCard->AutoSize = true;
			this->labelNextCard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelNextCard->Location = System::Drawing::Point(280, 379);
			this->labelNextCard->Name = L"labelNextCard";
			this->labelNextCard->Size = System::Drawing::Size(121, 13);
			this->labelNextCard->TabIndex = 37;
			this->labelNextCard->Text = L"Next Selected Card:";
			// 
			// buttonAddCards
			// 
			this->buttonAddCards->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buttonAddCards->FlatAppearance->BorderSize = 4;
			this->buttonAddCards->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Lime;
			this->buttonAddCards->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Yellow;
			this->buttonAddCards->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAddCards->Font = (gcnew System::Drawing::Font(L"Poor Richard", 14.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->buttonAddCards->Location = System::Drawing::Point(129, 353);
			this->buttonAddCards->Name = L"buttonAddCards";
			this->buttonAddCards->Size = System::Drawing::Size(123, 39);
			this->buttonAddCards->TabIndex = 40;
			this->buttonAddCards->Text = L"Add Cards";
			this->buttonAddCards->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->buttonAddCards->UseVisualStyleBackColor = true;
			this->buttonAddCards->Click += gcnew System::EventHandler(this, &Form1::buttonAddCards_Click);
			// 
			// pictureBoxCardAnimation
			// 
			this->pictureBoxCardAnimation->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxCardAnimation.Image")));
			this->pictureBoxCardAnimation->Location = System::Drawing::Point(165, 223);
			this->pictureBoxCardAnimation->Name = L"pictureBoxCardAnimation";
			this->pictureBoxCardAnimation->Size = System::Drawing::Size(54, 75);
			this->pictureBoxCardAnimation->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBoxCardAnimation->TabIndex = 41;
			this->pictureBoxCardAnimation->TabStop = false;
			this->pictureBoxCardAnimation->Tag = L"Ace 11";
			this->pictureBoxCardAnimation->Visible = false;
			// 
			// timerCardAnimation
			// 
			this->timerCardAnimation->Interval = 250;
			this->timerCardAnimation->Tick += gcnew System::EventHandler(this, &Form1::timerCardAnimation_Tick);
			// 
			// buttonExit
			// 
			this->buttonExit->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buttonExit->FlatAppearance->BorderSize = 4;
			this->buttonExit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Lime;
			this->buttonExit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Yellow;
			this->buttonExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Poor Richard", 14.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->buttonExit->Location = System::Drawing::Point(628, 347);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(123, 39);
			this->buttonExit->TabIndex = 42;
			this->buttonExit->Text = L"Exit";
			this->buttonExit->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &Form1::buttonExit_Click);
			// 
			// buttonPlayOn
			// 
			this->buttonPlayOn->Location = System::Drawing::Point(629, 298);
			this->buttonPlayOn->Name = L"buttonPlayOn";
			this->buttonPlayOn->Size = System::Drawing::Size(75, 23);
			this->buttonPlayOn->TabIndex = 43;
			this->buttonPlayOn->Text = L"Play On!";
			this->buttonPlayOn->UseVisualStyleBackColor = true;
			this->buttonPlayOn->Click += gcnew System::EventHandler(this, &Form1::buttonPlayOn_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(801, 422);
			this->Controls->Add(this->buttonPlayOn);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->pictureBoxCardAnimation);
			this->Controls->Add(this->buttonAddCards);
			this->Controls->Add(this->labelNextCardName);
			this->Controls->Add(this->labelNextCardValue);
			this->Controls->Add(this->labelNextCard);
			this->Controls->Add(this->labelFirstCardName);
			this->Controls->Add(this->labelFirstCardValue);
			this->Controls->Add(this->labelFirstCard);
			this->Controls->Add(this->pictureBoxAce);
			this->Controls->Add(this->pictureBoxTen);
			this->Controls->Add(this->pictureBoxFive);
			this->Controls->Add(this->buttonElapsedTime);
			this->Controls->Add(this->buttonDateTime);
			this->Controls->Add(this->labelDateTime);
			this->Controls->Add(this->labelWelcome);
			this->Name = L"Form1";
			this->Text = L"Handout 2.2GUI Mess";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxAce))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxTen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxFive))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxCardAnimation))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

/**************************************************************
***************************************************************
***                                                			***
***  CUSTOM-DEFINED FUNCTION DECLARATIONS AND DEFINITIONS   ***
***                                                			***
***************************************************************
**************************************************************/


/**************************************************************
***************************************************************
***                                                			***
***   displayDateAndTime()								    ***
***        -- display date and time in Long format          ***
***                                                			***
***************************************************************
**************************************************************/	 

void displayDateAndTime()
	 {
		DateTime dateTimeNow = DateTime::Now;
		//Try ToShort . . .
		labelDateTime->Text  = dateTimeNow.ToLongDateString() 
								+ "\n\n\t"
								+ dateTimeNow.ToLongTimeString();
	 }

/**************************************************************
***************************************************************
***                                                			***
***   cardSelection(String^ stringCardName,int intCardValue)***
***        -- display selected card name and value          ***
***           in appropriate label                                     			***
***                                                			***
***************************************************************
**************************************************************/	 

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
		}
	 }

/**************************************************************
***************************************************************
***                                                			***
***    EVENT-DRIVEN FUNCTION DECLARATIONS AND DEFINITIONS   ***
***                                                			***
***************************************************************
**************************************************************/

private: System::Void buttonDateTime_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		 	 displayDateAndTime();
			 buttonElapsedTime->Visible = true;
		 }

private: System::Void buttonElapsedTime_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
 			 //BTW: With a few modifications, this is useful in computing the elapsed time
			 //		in minutes and seconds of your Black Jack program
 			 DateTime dateTimeNow = DateTime::Now;
			 DateTime dateTimeMilleniumStart;
			 TimeSpan timeSpanDifference;

			 //Start date of the current millenium is January 1, 2001
			 //Convert string into a DateTime object
			 dateTimeMilleniumStart = Convert::ToDateTime("1/1/2001");

			 //Subtract the date the current millenium started from Now
			 timeSpanDifference = dateTimeNow.Subtract( dateTimeMilleniumStart );

			 //TimeSpan offers lots of ways to measure a time span, e.g., in days, etc.
			 //In Show, must use Concat, not +
			 MessageBox::Show(String::Concat("The new millenium is  ", 
				 timeSpanDifference.Days, " days old!"));
			 buttonElapsedTime->Visible = false;
		 }

private: System::Void pictureBoxAce_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			cardSelection("Ace", 11);
		 }

private: System::Void pictureBoxTen_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			cardSelection("Ten", 10);
		 }

private: System::Void pictureBoxFive_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			cardSelection("Five", 5);
		 }

private: System::Void buttonAddCards_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 //Text contains strings, which must be converted to int to do math
			 //QUESTION: How could program crash here?
			 int cardSum = int::Parse( labelFirstCardValue->Text ) 
						 + int::Parse( labelNextCardValue->Text  );

 			 if ( cardSum == 21 )
			 {
				 pictureBoxCardAnimation->Visible = true;
				 timerCardAnimation->Enabled      = true;	//Start the timer animation
			 }

			 //Two arguments: message and title of MessageBox
			 MessageBox::Show(String::Concat("The sum of the 2 cards is ", cardSum, "!"),
								"Here comes the sum . . .");
 			 timerCardAnimation->Enabled      = false;		//Stop the timer animation
 			 pictureBoxCardAnimation->Visible = false;
		 }

private: System::Void timerCardAnimation_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
			//counter is a global variable inititally set to 0
            if (counter == 0)
				//Replace the current Image in the pictureBox 
				//  with an Image from another pictureBox
				pictureBoxCardAnimation->Image = pictureBoxFive->Image;
            else
                if (counter == 1)
					pictureBoxCardAnimation->Image = pictureBoxTen->Image;
                else
                   if (counter == 2)
					pictureBoxCardAnimation->Image = pictureBoxAce->Image;

            counter++;	//Same as counter = counter + 1;
            if (counter > 3) 
				counter = 0;
		 }

private: System::Void buttonExit_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
 				 Windows::Forms::DialogResult buttonClicked;

				 //Store the button clicked in MessageBox by user
				 buttonClicked =  MessageBox::Show("This is a special \nmessage \n\t box \n Wanna stop?", 
					 "You like this title?",
					 MessageBoxButtons::YesNo,
					 MessageBoxIcon::Question,
					 MessageBoxDefaultButton::Button2);

				 //Cannot use + for concatenation:
				 //MessageBox::Show("You clicked on the " + buttonClicked + " button!");
				 //Must do the following:
				 MessageBox::Show(String::Concat("You clicked on the ", buttonClicked, " button!"));
				 
				 //Way to check if user clicked the Yes button in the MessageBox
				 if (buttonClicked == Windows::Forms::DialogResult::Yes)
				 {
					//Relative path of .wav in the program folder
					//gcnew is another way to initialize a string variable via a constructor
				    String^ strMusic = gcnew String("avalanche.wav"); 

					//Using System::Media namespace
					SoundPlayer soundPlayer(strMusic);
					soundPlayer.PlayLooping();
					//soundPlayer.Play(); //Plays sound only once!

					//Sleeps ALMOST everything for 5000 milliseconds
					System::Threading::Thread::Sleep(5000);

					MessageBox::Show("Look out below . . .\n\n\t\tHit ENTER to end . . .",
						"Ta-Ta!");

					Close(); //Or this->Close();
				}
			 }
/**************************************************************
***************************************************************
***                                                			***
***								END                         ***
***    EVENT-DRIVEN FUNCTION DECLARATIONS AND DEFINITIONS   ***
***                                                			***
***************************************************************
**************************************************************/

	 private: System::Void buttonPlayOn_Click(System::Object^  sender, System::EventArgs^  e) 
			  {
				labelFirstCardName->Text = "(Click on Card!)";
			  }
};		//End of class Form1
}		//End of namespace Handout_2_2GUI_Mess

/*
	"The difference between the impossible and the possible 
			lies in a person's determination." 
						Tommy Lasorda 

"Every worthwhile accomplishment, big or little, has its stages of 
   drudgery and triumph; a beginning, a struggle and a victory." 
					        Ghandi 

     "Obstacles don't have to stop you. If you run into a wall, 
     don't turn around and give up. Figure out how to climb it, 
               go through it, or work around it." 
                         Michael Jordon 
*/
