/**********************************************************************************
***********************************************************************************
***********************************************************************************
***																			    ***
***                         ID INFORMATION                                      ***
***               						      									***
***   Programmer                 :         Jennifer Taylor                      ***
***   Assignment #               :         --								    ***
***   Assignment Name            :         Using Multiple GUI Windows	        ***
***   Course # and Title         :         CISC 192 - C++                       ***
***   Class Meeting Time         :         MW 9:35am - 12:35pm                  ***
***   Instructor                 :         Professor Forman                     ***
***   Hours                      :         5.0									***
***   Difficulty                 :         4.0                                  ***
***   Completion Date            :         4/10/09                              ***
***   File Name                  :         MultipleGUI_WindowsDemo: Form1.h,    ***
***								 :		   Window2.h, CreativeLogo.h	        ***
***			               														***
***********************************************************************************
***********************************************************************************
***																			    ***
***                     PROGRAM DESCRIPTION										***
***																				***
***		This program demonstrates how to create & use multiple GUI windows.     ***
***     From the main window you can open the second window (a form you can     ***
***     enter/submit your name), get data from the second window, & open the    ***
***		third window (display Jenny's creative logo).							***
*** 																			***
***********************************************************************************
***********************************************************************************
***																			    ***
***                     CUSTOM-DEFINED FUNCTIONS - Form1.h                      ***
***    																			***
***			none																***
***																				***
***						CUSTOM-DEFINED EVENTS - Form1.h							***
***    																		    ***
***		private:																***
***			buttonExit_Click													***
***			buttonViewLogoWindow_Click											***
***			buttonWindow2_Click													***
***			buttonGetData_Click													***
***																				***
***     ------------------------------------------------------------------      ***
***																				***
***                     CUSTOM-DEFINED FUNCTIONS - Window2.h		    		***
***    																			***
***		public:																	***
***			getName():string													***
***			isNameEntered():bool												***
***																				***
***		private:																***
***			none																***
***																				***
***						CUSTOM-DEFINED EVENTS - Window2.h						***
***    																			***
***		private:																***
***			buttonClose_Click													***
***			buttonSubmit_Click													***
***			buttonReset_Click													***
***																				***
***********************************************************************************
***********************************************************************************
***																			    ***
***					           CREDITS											***
***  																			***
***   Thanks for assistance and inspiration from:   		                    ***
*** 																			***
***        Professor Forman, TDB (Visual C++ book), msdn.microsoft.com,			***
***																			    ***
***********************************************************************************
***********************************************************************************
**********************************************************************************/

#pragma once

//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// This program has 3 windows form files.  Each is a custom class.  We must 
// the other 2 so we can use them.
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
#include "Window2.h"	   // class which defines a custom form
#include "CreativeLogo.h"  // Jenny's creative Logo (custom Windows Form)

namespace MultipleGUI_WindowsDemo {

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
		Form1(void) // Form1 CONSTRUCTOR
		{
			InitializeComponent();

			//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
			// Create an instance of the Window2 class (object)
			// Note: this doesn't display it.  that happens later.
			// (theSecondWindow is a global class variable & is defined 
			//  below)
			//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
			theSecondWindow = gcnew Window2();
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
	private: System::Windows::Forms::Label^  labelInstructions;
	private: System::Windows::Forms::Button^  buttonWindow2;


	protected: 

	private: System::Windows::Forms::Button^  buttonGetData;
	private: System::Windows::Forms::Button^  buttonViewLogoWindow;
	private: System::Windows::Forms::Label^  labelName;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
		// DECLARE GLOBAL CLASS VARIABLE
		//
		// Window2 is the class used to get info from the user. To 
		// allow access from event-driven functions, this variable
		// must be global.  It is initialized in the contructor.
		//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
		Window2^ theSecondWindow; 
	
	private: System::Windows::Forms::Button^  buttonExit;

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelInstructions = (gcnew System::Windows::Forms::Label());
			this->buttonWindow2 = (gcnew System::Windows::Forms::Button());
			this->buttonGetData = (gcnew System::Windows::Forms::Button());
			this->buttonViewLogoWindow = (gcnew System::Windows::Forms::Button());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelInstructions
			// 
			this->labelInstructions->AutoSize = true;
			this->labelInstructions->Location = System::Drawing::Point(37, 36);
			this->labelInstructions->Name = L"labelInstructions";
			this->labelInstructions->Size = System::Drawing::Size(196, 26);
			this->labelInstructions->TabIndex = 0;
			this->labelInstructions->Text = L"This is the main window.  Click a button \r\nand see what happens.";
			// 
			// buttonWindow2
			// 
			this->buttonWindow2->AutoSize = true;
			this->buttonWindow2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonWindow2->Location = System::Drawing::Point(40, 102);
			this->buttonWindow2->Name = L"buttonWindow2";
			this->buttonWindow2->Size = System::Drawing::Size(94, 23);
			this->buttonWindow2->TabIndex = 1;
			this->buttonWindow2->Text = L"Open Window 2";
			this->buttonWindow2->UseVisualStyleBackColor = true;
			this->buttonWindow2->Click += gcnew System::EventHandler(this, &Form1::buttonWindow2_Click);
			// 
			// buttonGetData
			// 
			this->buttonGetData->AutoSize = true;
			this->buttonGetData->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonGetData->Location = System::Drawing::Point(40, 143);
			this->buttonGetData->Name = L"buttonGetData";
			this->buttonGetData->Size = System::Drawing::Size(134, 23);
			this->buttonGetData->TabIndex = 2;
			this->buttonGetData->Text = L"Get Data from Window 2";
			this->buttonGetData->UseVisualStyleBackColor = true;
			this->buttonGetData->Click += gcnew System::EventHandler(this, &Form1::buttonGetData_Click);
			// 
			// buttonViewLogoWindow
			// 
			this->buttonViewLogoWindow->AutoSize = true;
			this->buttonViewLogoWindow->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonViewLogoWindow->Location = System::Drawing::Point(40, 187);
			this->buttonViewLogoWindow->Name = L"buttonViewLogoWindow";
			this->buttonViewLogoWindow->Size = System::Drawing::Size(124, 23);
			this->buttonViewLogoWindow->TabIndex = 3;
			this->buttonViewLogoWindow->Text = L"View Logo (Window 3)";
			this->buttonViewLogoWindow->UseVisualStyleBackColor = true;
			this->buttonViewLogoWindow->Click += gcnew System::EventHandler(this, &Form1::buttonViewLogoWindow_Click);
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Location = System::Drawing::Point(256, 111);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(71, 13);
			this->labelName->TabIndex = 4;
			this->labelName->Text = L"<nothing yet>";
			// 
			// buttonExit
			// 
			this->buttonExit->AutoSize = true;
			this->buttonExit->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonExit->Location = System::Drawing::Point(40, 228);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(34, 23);
			this->buttonExit->TabIndex = 5;
			this->buttonExit->Text = L"Exit";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &Form1::buttonExit_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(463, 287);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->labelName);
			this->Controls->Add(this->buttonViewLogoWindow);
			this->Controls->Add(this->buttonGetData);
			this->Controls->Add(this->buttonWindow2);
			this->Controls->Add(this->labelInstructions);
			this->Name = L"Form1";
			this->Text = L"Main Window (Window 1)";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

/**********************************************************************************
*						   BEGIN EVENTS										      *
**********************************************************************************/

/*--------------------------------------------------------------------------------+
|   USER CLICKS 'EXIT' BUTTON									                  |
|		Close all windows & exit program.   					                  |
|																				  |
|   Preconditions: none															  |
|																				  |
|   Postconditions:	All windows close & program exits.							  |
|																				  |
|	Calls: none		 															  |
|																				  |
|	Called by: event- user clicks 'exit' button									  |
+--------------------------------------------------------------------------------*/
private: System::Void buttonExit_Click(System::Object^  sender, 
									   System::EventArgs^  e) 
	 {
		 Close();
	 }

/*--------------------------------------------------------------------------------+
|   USER CLICKS 'VIEW LOGO' BUTTON								                  |
|        Display Jenny's creative Logo (as defined in the class CreativeLogo).	  |
|																				  |
|   Preconditions: none															  |
|																				  |
|   Postconditions:	An instance of the CreativeLogo class is created			  |
|					(object).  The form is displayed. Once displayed, the form    |
|					can be closed or can continue running in the background.	  |
|																				  |
|	Calls: CreativeLogo() class constructor 									  |
|																				  |
|	Called by: event- user clicks 'view logo' button							  |
+--------------------------------------------------------------------------------*/
private: System::Void buttonViewLogoWindow_Click(System::Object^  sender, 
												 System::EventArgs^  e) 
	 {
		// Create an instance of the class CreativeLogo & display it
        //
		// Note: Since we don't need to have communication between the main
	    // window & theLogo, it doesn't need to be a global class variable.
		CreativeLogo^ theLogo = gcnew CreativeLogo();
		theLogo->Show();
	 }

/*--------------------------------------------------------------------------------+
|   USER CLICKS 'OPEN WINDOW 2' BUTTON                                            |
|        Display the previously created object 'theSecondWindow'                  |
|																				  |
|   Preconditions: theSecondWindow is declared as a global class variable.  It was|
|				   created in the Form1 constructor.							  |
|																				  |
|   Postconditions:	A new window (frame) opens which contains the form to enter a |
|				    name.  The other windows (Form1 & JennyLogo can and/or will	  |
|					remain open and running in the background).					  |
|																				  |
|	Calls: none 																  |
|																				  |
|	Called by: event- user clicks 'open window 2' button						  |
+--------------------------------------------------------------------------------*/
private: System::Void buttonWindow2_Click(System::Object^  sender, 
										  System::EventArgs^  e) 
		 {
			// Display theSecondWindow (It is an object of the class Window2() and 
			//						   was created in the Form1 constructor.  
			// (Note: theSecondWindow is a global class variable)
			theSecondWindow->Show();
		 }

/*--------------------------------------------------------------------------------+
|   USER CLICKS 'GET DATA FROM WINDOW 2' BUTTON					                  |
|		If the name has been submitted, display it (in label on the form).  If    |
|		not, display a message that states this fact.							  |
|																				  |
|   Preconditions: theSecondWindow is declared as a global class variable.  It was|
|				   created in the Form1 constructor.							  |
|																				  |
|   Postconditions:	If the name has been submitted, labelName is updated with it. |
|					If not, a message is displayed notifying the user of this     |
|					fact.														  |
|																				  |
|	Calls: Window2::{isNameEntered, getName}									  |
|																				  |
|	Called by: event- user clicks 'get data from window 2' button				  |
+--------------------------------------------------------------------------------*/
private: System::Void buttonGetData_Click(System::Object^  sender, 
										  System::EventArgs^  e) 
	 {
		// NAME HAS BEEN ENTERED
		if( theSecondWindow->isNameEntered() )
		{
			labelName->Text = "You entered: " + theSecondWindow->getName();
		}
		// NAME HAS NOT BEEN ENTERED
		else
		{
			MessageBox::Show("You haven't submitted your name in Window 2.");
		}
	 }
/**********************************************************************************
*						   END EVENTS										      *
**********************************************************************************/
}; // end class Form1
} // end namespace MultipleGUI_WindowsDemo

