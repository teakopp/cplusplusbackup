/**************************************************************
*************************************************************** 
***************************************************************
***                                            	    		***
***       HANDOUT #4.BG -- BASIC GUI FUNCTIONS WITH CLASS   ***
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
***  "GUI" functions with and without parameters, String^s	***
***                text boxes, global variables				***
***                                                			***
***************************************************************
**************************************************************/


#pragma once


namespace BasicGUIFunctionsWithClass 
{
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
	private: System::Windows::Forms::TextBox^  textBoxName;
	private: System::Windows::Forms::Label^  labelScorePrompt;
	private: System::Windows::Forms::TextBox^  textBoxScore;
	private: System::Windows::Forms::Button^  buttonDisplay;
	private: System::Windows::Forms::TextBox^  textBoxDisplay;
	private: System::Windows::Forms::Button^  buttonUpdate;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

	private: System::Windows::Forms::Button^  buttonEvaluate;

		//I manually inserted these lines for the FOUR items
		//	and optionally could have added private or public:
 		const	static int MAX_NUMBER_OF_SWEETIES = 10;

		String^ stringBlackBookInfo;	//NOTE: In GUI, need ^ at end of String
										//			and the UPPER CASE "S"
		//I guess the order of "static" does not matter
		//Also, you need "static" if you want to assign a specific value
		int		static	 sweetieCounter			= 0;
		static	String^  mess					= "";

	//These lines were automatically entered for me here - why here, who knows???


	private: System::Windows::Forms::Label^  labelFunctionCalls;

		//value class is a newer version of the older struct concept
		//	The idea is to create a custom data type with multiple components
	    //I manually inserted these lines for the ONE "structure" item:

		value class SweetieType 
		{
			public: 
				String^	sweetieName;
				int		sweetieScore;
		};

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelWelcome = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->labelScorePrompt = (gcnew System::Windows::Forms::Label());
			this->textBoxScore = (gcnew System::Windows::Forms::TextBox());
			this->buttonDisplay = (gcnew System::Windows::Forms::Button());
			this->textBoxDisplay = (gcnew System::Windows::Forms::TextBox());
			this->buttonUpdate = (gcnew System::Windows::Forms::Button());
			this->buttonEvaluate = (gcnew System::Windows::Forms::Button());
			this->labelFunctionCalls = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelWelcome
			// 
			this->labelWelcome->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->labelWelcome->AutoSize = true;
			this->labelWelcome->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelWelcome->Location = System::Drawing::Point(168, 9);
			this->labelWelcome->Name = L"labelWelcome";
			this->labelWelcome->Size = System::Drawing::Size(244, 63);
			this->labelWelcome->TabIndex = 0;
			this->labelWelcome->Text = L"Welcome Friends and Neighbors\r\nTo\r\n\"Da Black Book\"";
			this->labelWelcome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxName
			// 
			this->textBoxName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBoxName->Location = System::Drawing::Point(193, 126);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(194, 20);
			this->textBoxName->TabIndex = 1;
			this->textBoxName->Text = L"Enter your Sweetie\'s name, here!";
			this->textBoxName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// labelScorePrompt
			// 
			this->labelScorePrompt->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->labelScorePrompt->AutoSize = true;
			this->labelScorePrompt->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelScorePrompt->Location = System::Drawing::Point(191, 172);
			this->labelScorePrompt->Name = L"labelScorePrompt";
			this->labelScorePrompt->Size = System::Drawing::Size(128, 12);
			this->labelScorePrompt->TabIndex = 2;
			this->labelScorePrompt->Text = L"Enter SECRET Score:";
			// 
			// textBoxScore
			// 
			this->textBoxScore->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBoxScore->Location = System::Drawing::Point(338, 168);
			this->textBoxScore->Name = L"textBoxScore";
			this->textBoxScore->Size = System::Drawing::Size(49, 20);
			this->textBoxScore->TabIndex = 3;
			this->textBoxScore->UseSystemPasswordChar = true;
			// 
			// buttonDisplay
			// 
			this->buttonDisplay->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->buttonDisplay->Location = System::Drawing::Point(253, 273);
			this->buttonDisplay->Name = L"buttonDisplay";
			this->buttonDisplay->Size = System::Drawing::Size(75, 23);
			this->buttonDisplay->TabIndex = 4;
			this->buttonDisplay->Text = L"Display!";
			this->buttonDisplay->UseVisualStyleBackColor = true;
			this->buttonDisplay->Click += gcnew System::EventHandler(this, &Form1::buttonDisplay_Click);
			// 
			// textBoxDisplay
			// 
			this->textBoxDisplay->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBoxDisplay->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBoxDisplay->Location = System::Drawing::Point(240, 206);
			this->textBoxDisplay->Multiline = true;
			this->textBoxDisplay->Name = L"textBoxDisplay";
			this->textBoxDisplay->ReadOnly = true;
			this->textBoxDisplay->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxDisplay->Size = System::Drawing::Size(100, 61);
			this->textBoxDisplay->TabIndex = 5;
			// 
			// buttonUpdate
			// 
			this->buttonUpdate->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->buttonUpdate->Location = System::Drawing::Point(253, 311);
			this->buttonUpdate->Name = L"buttonUpdate";
			this->buttonUpdate->Size = System::Drawing::Size(75, 23);
			this->buttonUpdate->TabIndex = 6;
			this->buttonUpdate->Text = L"Update!";
			this->buttonUpdate->UseVisualStyleBackColor = true;
			this->buttonUpdate->Click += gcnew System::EventHandler(this, &Form1::buttonUpdate_Click);
			// 
			// buttonEvaluate
			// 
			this->buttonEvaluate->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonEvaluate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->buttonEvaluate->Location = System::Drawing::Point(253, 345);
			this->buttonEvaluate->Name = L"buttonEvaluate";
			this->buttonEvaluate->Size = System::Drawing::Size(75, 23);
			this->buttonEvaluate->TabIndex = 7;
			this->buttonEvaluate->Text = L"Evaluate!";
			this->buttonEvaluate->UseVisualStyleBackColor = true;
			this->buttonEvaluate->Click += gcnew System::EventHandler(this, &Form1::buttonEvaluate_Click);
			// 
			// labelFunctionCalls
			// 
			this->labelFunctionCalls->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->labelFunctionCalls->AutoSize = true;
			this->labelFunctionCalls->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelFunctionCalls->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelFunctionCalls->Location = System::Drawing::Point(31, 402);
			this->labelFunctionCalls->Name = L"labelFunctionCalls";
			this->labelFunctionCalls->Size = System::Drawing::Size(25, 12);
			this->labelFunctionCalls->TabIndex = 9;
			this->labelFunctionCalls->Text = L"     ";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(581, 601);
			this->Controls->Add(this->labelFunctionCalls);
			this->Controls->Add(this->buttonEvaluate);
			this->Controls->Add(this->buttonUpdate);
			this->Controls->Add(this->textBoxDisplay);
			this->Controls->Add(this->buttonDisplay);
			this->Controls->Add(this->textBoxScore);
			this->Controls->Add(this->labelScorePrompt);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->labelWelcome);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Basic Functions with Class";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void buttonDisplay_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 textBoxDisplay->Text = textBoxName->Text + " " + textBoxScore->Text;
		 }

private: System::Void buttonUpdate_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 String^ temporaryString;

			 sweetieCounter++;

			 temporaryString	  = sweetieCounter + ": " 
				 + textBoxName->Text + " " + textBoxScore->Text + " ";

			 //Short-cut for:
			 //stringBlackBookInfo = stringBlackBookInfo + temporaryString;
			 stringBlackBookInfo += temporaryString;
				
			 textBoxDisplay->Clear();
			 textBoxDisplay->Text = stringBlackBookInfo;
		 }
	private: System::Void buttonEvaluate_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
 
 			int		localVariableOne			= sweetieCounter;
			int		localVariableTwo			= 2001;

			String^ localVariableThree			= "Very Interesting";
			String^ availabilityStatusString;

			//void function call with no arguments
			evaluationMessage();

			//void function call with an argument
			displayNumberToEvaluate( localVariableOne );

			//non-void function call with an argument
			//a value is returned through the return statement
			localVariableOne = computeNumberOfAvailableSpaces();

				 //non-void function call with one argument
				 //a value is returned through the return statement
			if ( validNumberOfAvailableSpaces(localVariableOne) )
				availabilityStatusString = " available ";
			else
				availabilityStatusString = " no available ";

			//void function call with 5 call-by-value arguments
			display(localVariableOne,localVariableTwo,
				availabilityStatusString, localVariableThree,
				"- In buttonEvaluate_Click == BEFORE displayInfo");

			//void function call with 2 call-by-value arguments (C-B-V)
			//					 AND  2 call-by-reference arguments (C-B-R)
			//So, 2 pieces of info are returned without a return statement

			//			C-B-V,           C-B-R, 
			displayInfo(localVariableOne,localVariableTwo,
				availabilityStatusString, localVariableThree);
			//			C-B-V,			 C-B-R

			display(localVariableOne,localVariableTwo,
				availabilityStatusString, localVariableThree,
				"- In buttonEvaluate_Click == AFTER displayInfo");
		 }
		
		//void function call with no arguments
	    void evaluationMessage()
		{
			MessageBox::Show(" . . . Time \n\tTo \n\t. . . Evaluate . . .");
		}

		//void function call with an argument
		void displayNumberToEvaluate(int number)
		{
			//Another way to declare and create a new String object in "GUI"
			String^ message = gcnew String (" Sweetie");

			if (number > 1)		//Or use:  if (number != 1)
				message += "s"; //Same as: message = message + "s";

			MessageBox::Show("So, far we have " + number + message);
		}

		//non-void function call with no argument
		//a value is returned through the return statement
		int computeNumberOfAvailableSpaces()
		{
			return (MAX_NUMBER_OF_SWEETIES - sweetieCounter);
		}

		//non-void function call with one argument
		//a value is returned through the return statement
		//
		//This is a simple  "validity" function
		bool validNumberOfAvailableSpaces(int numberOfAvailableSpaces )
		{
			return ( numberOfAvailableSpaces <= MAX_NUMBER_OF_SWEETIES );
		}

		//void function call with 2 call-by-value arguments (without &)
		//					 AND  2 call-by-reference arguments (with &)
		//So, 2 pieces of info are returned without a return statement
		void displayInfo( int	  number,	int&	 anotherNumber,
						  String^ string,	String^& anotherString)
		{
			display( number, anotherNumber, string, anotherString, 
				"- In function displayInfo -- before changes.....");
			number = 1; anotherNumber = 1111;
			string = "GoodGood"; anotherString = "ByeByeBye";
			display( number, anotherNumber, string, anotherString, 
				"- In function displayInfo -- after changes........");
		}

		//void function call with 5 call-by-value arguments
		void display( int one, int two, String^ three, String^ four, 
			String^ callingInfo)
		{
			//Good for debugging purposes to easily display info:
			//MessageBox::Show("number	anotherNumber	string	anotherString" 
			//	+ "\n\n" + one + " " + two + " " + three + " " + four 
			//	+ "\n\n\t" + callingInfo);

			putIntoTextLabel(one, two, three, four, callingInfo);
		}	

		void putIntoTextLabel( int a, int b, String^ x, String^ y, String^ z)
		{
			mess += a + " " + b + " " + x + " " + y + " " + z + "\n\n";
			labelFunctionCalls->Text = mess;
		}

		//Overloaded method
		void display( String^& hmmm )
		{
			hmmm += "\n\n";
 		}
	};
}

/*
Creativity is a type of learning process where the teacher and pupil are 
					located in the same individual.

							Arthur Koestler


When I am working on a problem I never think about beauty. I only think 
about how to solve the problem. But when I have finished, if the solution 
				is not beautiful, I know it is wrong.

						   Buckminster Fuller


		Creativity requires the courage to let go of certainties.

							  Erich Fromm
																	 */