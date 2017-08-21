/**********************************************************************************
	 JENNY'S CUSTOM DEFINED CLASS FOR THE ENTRY FORM - Window2()  
   ------------------------------------------------------------------------------

 Public functions:

 	getName(): string 
		Preconditions: none
		Postconditions: Returns a string containing the user's name

	isNameEntered(): bool
		Preconditions: none
		Postconditions: Returns true if the name has been submitted

**********************************************************************************/

#pragma once

#include <string>      // string class

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace MultipleGUI_WindowsDemo {

	/// <summary>
	/// Summary for Window2
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///       'Resource File Name' property for the managed resource compiler tool
	///       associated with all .resx files this class depends on.  Otherwise,
	///       the designers will not be able to interact properly with localized
	///       resources associated with this form.
	/// </summary>
	public ref class Window2 : public System::Windows::Forms::Form
	{
	public:
		Window2(void) // Window2 CONSTRUCTOR
		{
			InitializeComponent();

			//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
			// Initialize the global class variables
			//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

			// User's name
			name = "<name>";

			// Name has not been entered
		    nameEntered = false;
		}

		//***********************************************
		//				BEGIN PUBLIC FUNCTIONS
		//***********************************************
		
		// These two funcions are accessible outside of 
		// this class (since they are public).  

			//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
			// Return a string containing user's name
			//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
			System::String^ getName()
			{
				return name;
			}
			//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
			// Return a boolean variable (true if user
			// has submitted their name)
			//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
			bool isNameEntered()
			{
				return nameEntered;
			}
		//***********************************************
		//				END PUBLIC FUNCTIONS
		//***********************************************

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Window2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelInstructions;
	private: System::Windows::Forms::TextBox^  textBoxName;
	private: System::Windows::Forms::Button^  buttonSubmit;
	private: System::Windows::Forms::Button^  buttonClose;
	private: System::Windows::Forms::Button^  buttonReset;
	protected: 

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
		// DECLARE GLOBAL CLASS VARIABLES
		//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
		System::String^ name;
		bool nameEntered;

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelInstructions = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->buttonSubmit = (gcnew System::Windows::Forms::Button());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->buttonReset = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelInstructions
			// 
			this->labelInstructions->AutoSize = true;
			this->labelInstructions->Location = System::Drawing::Point(37, 53);
			this->labelInstructions->Name = L"labelInstructions";
			this->labelInstructions->Size = System::Drawing::Size(84, 13);
			this->labelInstructions->TabIndex = 0;
			this->labelInstructions->Text = L"Enter your name";
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(40, 85);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(100, 20);
			this->textBoxName->TabIndex = 1;
			this->textBoxName->Text = L"<name>";
			// 
			// buttonSubmit
			// 
			this->buttonSubmit->AutoSize = true;
			this->buttonSubmit->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonSubmit->Location = System::Drawing::Point(40, 135);
			this->buttonSubmit->Name = L"buttonSubmit";
			this->buttonSubmit->Size = System::Drawing::Size(49, 23);
			this->buttonSubmit->TabIndex = 2;
			this->buttonSubmit->Text = L"Submit";
			this->buttonSubmit->UseVisualStyleBackColor = true;
			this->buttonSubmit->Click += gcnew System::EventHandler(this, &Window2::buttonSubmit_Click);
			// 
			// buttonClose
			// 
			this->buttonClose->AutoSize = true;
			this->buttonClose->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonClose->Location = System::Drawing::Point(177, 135);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(43, 23);
			this->buttonClose->TabIndex = 3;
			this->buttonClose->Text = L"Close";
			this->buttonClose->UseVisualStyleBackColor = true;
			this->buttonClose->Click += gcnew System::EventHandler(this, &Window2::buttonClose_Click);
			// 
			// buttonReset
			// 
			this->buttonReset->AutoSize = true;
			this->buttonReset->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->buttonReset->Location = System::Drawing::Point(108, 135);
			this->buttonReset->Name = L"buttonReset";
			this->buttonReset->Size = System::Drawing::Size(45, 23);
			this->buttonReset->TabIndex = 4;
			this->buttonReset->Text = L"Reset";
			this->buttonReset->UseVisualStyleBackColor = true;
			this->buttonReset->Click += gcnew System::EventHandler(this, &Window2::buttonReset_Click);
			// 
			// Window2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(286, 191);
			this->ControlBox = false;
			this->Controls->Add(this->buttonReset);
			this->Controls->Add(this->buttonClose);
			this->Controls->Add(this->buttonSubmit);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->labelInstructions);
			this->Name = L"Window2";
			this->Text = L"Window2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

/**********************************************************************************
*						   BEGIN EVENTS										      *
**********************************************************************************/

/*--------------------------------------------------------------------------------+
|   USER CLICKS 'CLOSE' BUTTON									                  |
|		Hide Window2 (doesn't actually close it)								  |
|																				  |
|   Preconditions: none															  |
|																			      |
|   Postconditions:	The Window2 frame is hidden.								  |
|																				  |
|	Calls: none																	  |
|																				  |
|	Called by: event- user clicks 'close' button								  |
+--------------------------------------------------------------------------------*/
private: System::Void buttonClose_Click(System::Object^  sender, 
										System::EventArgs^  e) 
	 {
		 // Hide Window2 (doesn't actually close it)
		 Hide();
	 }

/*--------------------------------------------------------------------------------+
|   USER CLICKS 'SUBMIT' BUTTON									                  |
|		Display a message either echoing name entered or notifying user they      |
|		already entered their name.												  |
|																				  |
|   Preconditions: User has entered their name in the text box. 				  |
|																			      |
|   Postconditions:	If name has not been entered, a message is displayed echoing  |
|					the name entered.  nameEntered (global class variable)        |
|					contains true, name (global class variable) contains the      |
|					string entered in the text box.  The text box is disabled.    |
|					The Window2 frame is hidden (but not closed).				  |
|					If the name has already been submitted, a message is          |
|					displayed notifying the user of this fact.					  |
|																				  |
|	Calls: none																	  |
|																				  |
|	Called by: event- user clicks 'submit' button								  |
+--------------------------------------------------------------------------------*/
private: System::Void buttonSubmit_Click(System::Object^  sender, 
										 System::EventArgs^  e) 
	 {
		// NAME HAS NOT BEEN ENTERED YET
		if(!nameEntered)
		{

			// Update name (a global class variable) with the value the user typed
			// in the text box
			name = textBoxName->Text;

			// Echo name entered
			MessageBox::Show("You entered: " + name);

			// Name has now been entered
			nameEntered = true;

			// Disable text box on Window2 form
			textBoxName->Enabled = false;

			// Hide the Window2 form (doesn't close it)
			Hide();

			//MessageBox::Show("Where'd it go???");
			//Show();
		}
		// NAME HAS ALREADY BEEN ENTERED
		else
		{
			// Display a message notifying the user that name has already been
			// entered & hide the Window2 form
			MessageBox::Show("You have already entered your name.");
			//Hide();
		}
	 }

/*--------------------------------------------------------------------------------+
|   USER CLICKS 'RESET' BUTTON									                  |
|		Display a message notifying user that form has been reset.				  |
|																				  |
|   Preconditions: none											 				  |
|																			      |
|   Postconditions:	name (global class varible) is reset to "<name>".             |
|					nameEntered (global class variable) is reset to false. The    |
|					value of the text box is reset & enabled.  A message is       |
|					displayed notifying the user that the form has been reset.    |
|																				  |
|	Calls: none																	  |
|																				  |
|	Called by: event- user clicks 'reset' button								  |
+--------------------------------------------------------------------------------*/
private: System::Void buttonReset_Click(System::Object^  sender, 
										System::EventArgs^  e) 
	 {
		 // Reset global class variable
		 name = "<name>";

	 	 // Name has not been entered
	     nameEntered = false;
 
		 // Reset/enable text box
		 textBoxName->Text = name;
		 textBoxName->Enabled = true;

		 MessageBox::Show("Form has been reset.");
	 }
/**********************************************************************************
*						   END EVENTS										      *
**********************************************************************************/
}; // end class Window2
} // end namespace MultipleGUI_WindowsDemo
