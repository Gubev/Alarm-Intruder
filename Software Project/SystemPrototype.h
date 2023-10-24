
#include <iostream>
#include <string>
#include <Windows.h>
#include <mmsystem.h>
#include <chrono>
#include <thread>
#include <fstream>
#include <exception>
#include <msclr/marshal.h>
#pragma comment(lib, "winmm.lib")
#include <msclr\marshal_cppstd.h>
#include <string>

std::string correctPin = "1234";

int seconds = 0;
namespace SoftwareProject {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for SystemPrototype
	/// </summary>
	public ref class SystemPrototype : public System::Windows::Forms::Form
	{
	public:
		SystemPrototype(void)
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
		~SystemPrototype()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ HOUSE;
	protected:
	private: System::Windows::Forms::Button^ DOOR_BUTTON;
	private: System::Windows::Forms::Button^ LW;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ BW1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ CONTROL_PANEL;
	private: System::Windows::Forms::Button^ One;
	private: System::Windows::Forms::Button^ Three;


	private: System::Windows::Forms::Button^ Two;
	private: System::Windows::Forms::Button^ Four;
	private: System::Windows::Forms::Button^ Five;
	private: System::Windows::Forms::Button^ Six;
	private: System::Windows::Forms::Button^ Seven;
	private: System::Windows::Forms::Button^ Eight;
	private: System::Windows::Forms::Button^ Nine;
	private: System::Windows::Forms::Button^ Clear;



	private: System::Windows::Forms::Button^ Zero;

	private: System::Windows::Forms::TextBox^ Screen;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ Alarm;
	private: System::ComponentModel::IContainer^ components;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->HOUSE = (gcnew System::Windows::Forms::Button());
			this->DOOR_BUTTON = (gcnew System::Windows::Forms::Button());
			this->LW = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->BW1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->CONTROL_PANEL = (gcnew System::Windows::Forms::Button());
			this->One = (gcnew System::Windows::Forms::Button());
			this->Three = (gcnew System::Windows::Forms::Button());
			this->Two = (gcnew System::Windows::Forms::Button());
			this->Four = (gcnew System::Windows::Forms::Button());
			this->Five = (gcnew System::Windows::Forms::Button());
			this->Six = (gcnew System::Windows::Forms::Button());
			this->Seven = (gcnew System::Windows::Forms::Button());
			this->Eight = (gcnew System::Windows::Forms::Button());
			this->Nine = (gcnew System::Windows::Forms::Button());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->Zero = (gcnew System::Windows::Forms::Button());
			this->Screen = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Alarm = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// HOUSE
			// 
			this->HOUSE->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->HOUSE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HOUSE->Location = System::Drawing::Point(202, 35);
			this->HOUSE->Name = L"HOUSE";
			this->HOUSE->Size = System::Drawing::Size(944, 559);
			this->HOUSE->TabIndex = 0;
			this->HOUSE->Text = L"HOUSE";
			this->HOUSE->UseVisualStyleBackColor = false;
			// 
			// DOOR_BUTTON
			// 
			this->DOOR_BUTTON->BackColor = System::Drawing::SystemColors::HotTrack;
			this->DOOR_BUTTON->Location = System::Drawing::Point(202, 35);
			this->DOOR_BUTTON->Name = L"DOOR_BUTTON";
			this->DOOR_BUTTON->Size = System::Drawing::Size(359, 79);
			this->DOOR_BUTTON->TabIndex = 1;
			this->DOOR_BUTTON->Text = L"DOOR";
			this->DOOR_BUTTON->UseVisualStyleBackColor = false;
			this->DOOR_BUTTON->Click += gcnew System::EventHandler(this, &SystemPrototype::DOOR_BUTTON_Click);
			// 
			// LW
			// 
			this->LW->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->LW->Location = System::Drawing::Point(202, 195);
			this->LW->Name = L"LW";
			this->LW->Size = System::Drawing::Size(41, 281);
			this->LW->TabIndex = 2;
			this->LW->Text = L"LW";
			this->LW->UseVisualStyleBackColor = false;
			this->LW->Click += gcnew System::EventHandler(this, &SystemPrototype::LW_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(1105, 204);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(41, 281);
			this->button2->TabIndex = 3;
			this->button2->Text = L"SR";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &SystemPrototype::button2_Click);
			// 
			// BW1
			// 
			this->BW1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->BW1->Location = System::Drawing::Point(309, 555);
			this->BW1->Name = L"BW1";
			this->BW1->Size = System::Drawing::Size(312, 39);
			this->BW1->TabIndex = 4;
			this->BW1->Text = L"BW1";
			this->BW1->UseVisualStyleBackColor = false;
			this->BW1->Click += gcnew System::EventHandler(this, &SystemPrototype::BW1_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(727, 555);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(312, 39);
			this->button4->TabIndex = 5;
			this->button4->Text = L"BW2";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &SystemPrototype::button4_Click_1);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Location = System::Drawing::Point(727, 35);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(312, 39);
			this->button5->TabIndex = 6;
			this->button5->Text = L"FW";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &SystemPrototype::button5_Click);
			// 
			// CONTROL_PANEL
			// 
			this->CONTROL_PANEL->BackColor = System::Drawing::Color::Gray;
			this->CONTROL_PANEL->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->CONTROL_PANEL->Location = System::Drawing::Point(277, 120);
			this->CONTROL_PANEL->Name = L"CONTROL_PANEL";
			this->CONTROL_PANEL->Size = System::Drawing::Size(256, 384);
			this->CONTROL_PANEL->TabIndex = 7;
			this->CONTROL_PANEL->Text = L"CONTROL PANEL";
			this->CONTROL_PANEL->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->CONTROL_PANEL->UseVisualStyleBackColor = false;
			// 
			// One
			// 
			this->One->Location = System::Drawing::Point(286, 216);
			this->One->Name = L"One";
			this->One->Size = System::Drawing::Size(75, 60);
			this->One->TabIndex = 8;
			this->One->Text = L"1";
			this->One->UseVisualStyleBackColor = true;
			this->One->Click += gcnew System::EventHandler(this, &SystemPrototype::button3_Click);
			// 
			// Three
			// 
			this->Three->Location = System::Drawing::Point(448, 214);
			this->Three->Name = L"Three";
			this->Three->Size = System::Drawing::Size(75, 64);
			this->Three->TabIndex = 9;
			this->Three->Text = L"3";
			this->Three->UseVisualStyleBackColor = true;
			this->Three->Click += gcnew System::EventHandler(this, &SystemPrototype::Three_Click);
			// 
			// Two
			// 
			this->Two->Location = System::Drawing::Point(367, 216);
			this->Two->Name = L"Two";
			this->Two->Size = System::Drawing::Size(75, 60);
			this->Two->TabIndex = 10;
			this->Two->Text = L"2";
			this->Two->UseVisualStyleBackColor = true;
			this->Two->Click += gcnew System::EventHandler(this, &SystemPrototype::button6_Click);
			// 
			// Four
			// 
			this->Four->Location = System::Drawing::Point(286, 282);
			this->Four->Name = L"Four";
			this->Four->Size = System::Drawing::Size(75, 66);
			this->Four->TabIndex = 12;
			this->Four->Text = L"4";
			this->Four->UseVisualStyleBackColor = true;
			this->Four->Click += gcnew System::EventHandler(this, &SystemPrototype::Four_Click);
			// 
			// Five
			// 
			this->Five->Location = System::Drawing::Point(367, 282);
			this->Five->Name = L"Five";
			this->Five->Size = System::Drawing::Size(75, 66);
			this->Five->TabIndex = 13;
			this->Five->Text = L"5";
			this->Five->UseVisualStyleBackColor = true;
			this->Five->Click += gcnew System::EventHandler(this, &SystemPrototype::Five_Click);
			// 
			// Six
			// 
			this->Six->Location = System::Drawing::Point(448, 284);
			this->Six->Name = L"Six";
			this->Six->Size = System::Drawing::Size(75, 66);
			this->Six->TabIndex = 14;
			this->Six->Text = L"6";
			this->Six->UseVisualStyleBackColor = true;
			this->Six->Click += gcnew System::EventHandler(this, &SystemPrototype::Six_Click);
			// 
			// Seven
			// 
			this->Seven->Location = System::Drawing::Point(286, 354);
			this->Seven->Name = L"Seven";
			this->Seven->Size = System::Drawing::Size(75, 66);
			this->Seven->TabIndex = 15;
			this->Seven->Text = L"7";
			this->Seven->UseVisualStyleBackColor = true;
			this->Seven->Click += gcnew System::EventHandler(this, &SystemPrototype::Seven_Click);
			// 
			// Eight
			// 
			this->Eight->Location = System::Drawing::Point(367, 354);
			this->Eight->Name = L"Eight";
			this->Eight->Size = System::Drawing::Size(75, 66);
			this->Eight->TabIndex = 16;
			this->Eight->Text = L"8";
			this->Eight->UseVisualStyleBackColor = true;
			this->Eight->Click += gcnew System::EventHandler(this, &SystemPrototype::Eight_Click);
			// 
			// Nine
			// 
			this->Nine->Location = System::Drawing::Point(448, 356);
			this->Nine->Name = L"Nine";
			this->Nine->Size = System::Drawing::Size(75, 66);
			this->Nine->TabIndex = 17;
			this->Nine->Text = L"9";
			this->Nine->UseVisualStyleBackColor = true;
			this->Nine->Click += gcnew System::EventHandler(this, &SystemPrototype::Nine_Click);
			// 
			// Clear
			// 
			this->Clear->Location = System::Drawing::Point(286, 426);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(75, 66);
			this->Clear->TabIndex = 18;
			this->Clear->Text = L"*";
			this->Clear->UseVisualStyleBackColor = true;
			this->Clear->Click += gcnew System::EventHandler(this, &SystemPrototype::Clear_Click);
			// 
			// Zero
			// 
			this->Zero->Location = System::Drawing::Point(367, 426);
			this->Zero->Name = L"Zero";
			this->Zero->Size = System::Drawing::Size(75, 66);
			this->Zero->TabIndex = 19;
			this->Zero->Text = L"0";
			this->Zero->UseVisualStyleBackColor = true;
			this->Zero->Click += gcnew System::EventHandler(this, &SystemPrototype::Zero_Click);
			// 
			// Screen
			// 
			this->Screen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Screen->Location = System::Drawing::Point(286, 155);
			this->Screen->Name = L"Screen";
			this->Screen->Size = System::Drawing::Size(234, 37);
			this->Screen->TabIndex = 21;
			this->Screen->TextChanged += gcnew System::EventHandler(this, &SystemPrototype::textBox1_TextChanged_1);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &SystemPrototype::timer1_Tick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(448, 428);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 64);
			this->button1->TabIndex = 22;
			this->button1->Text = L"#";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SystemPrototype::button1_Click);
			// 
			// Alarm
			// 
			this->Alarm->AutoSize = true;
			this->Alarm->BackColor = System::Drawing::Color::SpringGreen;
			this->Alarm->ForeColor = System::Drawing::Color::LawnGreen;
			this->Alarm->Location = System::Drawing::Point(589, 12);
			this->Alarm->Name = L"Alarm";
			this->Alarm->Size = System::Drawing::Size(75, 49);
			this->Alarm->TabIndex = 23;
			this->Alarm->UseVisualStyleBackColor = false;
			this->Alarm->Click += gcnew System::EventHandler(this, &SystemPrototype::Alarm_Click);
			// 
			// SystemPrototype
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(1289, 686);
			this->Controls->Add(this->Alarm);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Screen);
			this->Controls->Add(this->Zero);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->Nine);
			this->Controls->Add(this->Eight);
			this->Controls->Add(this->Seven);
			this->Controls->Add(this->Six);
			this->Controls->Add(this->Five);
			this->Controls->Add(this->Four);
			this->Controls->Add(this->Two);
			this->Controls->Add(this->Three);
			this->Controls->Add(this->One);
			this->Controls->Add(this->CONTROL_PANEL);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->BW1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->LW);
			this->Controls->Add(this->DOOR_BUTTON);
			this->Controls->Add(this->HOUSE);
			this->Name = L"SystemPrototype";
			this->Text = L"SystemPrototype";
			this->Load += gcnew System::EventHandler(this, &SystemPrototype::SystemPrototype_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void Arm_State() {
			if (armSystem() == true) {
				BW1->Enabled = true;
				button2->Enabled = true;
				button4->Enabled = true;
				LW->Enabled = true;
				button5->Enabled = true;
				DOOR_BUTTON->Enabled = true;
				
			}
		}

		void Disarm_State() {
			if (armSystem() == false) {
				BW1->Enabled = true;
				button2->Enabled = true;
				button4->Enabled = true;
				LW->Enabled = true;
				button5->Enabled = true;
				DOOR_BUTTON->Enabled = true;
			}
		}

		std::string ConvertSysStringToStdString(System::String^ s)
		{
			if (Screen != nullptr) {
				msclr::interop::marshal_context context;
				const char* chars = context.marshal_as<const char*>(s);
				std::string stdStr(chars);
				return stdStr;
			}
		}

		void setPin() {
			std::string newPin = msclr::interop::marshal_as<std::string>(Screen->Text);
			if (newPin.length() == 4 && isAllDigits(newPin)) {
				newPin = correctPin;
			}
			else {
				Screen->Text = "Use 4 Digits Pin";
			}
		}


		bool isAllDigits(const std::string& str) {
			for (char c : str) {
				if (!std::isdigit(c)) {
					return false;
				}
			}
			return true;
		}

		bool timter_Activation = false;

	   bool isSystemArmed = false;

		   bool armSystem() {
			   try {
				   if (Screen != nullptr) {
					   if (DOOR_BUTTON->BackColor == System::Drawing::Color::Red) {

						  /* setPin();
						   Screen->Text = "ReEnter Password";
						   Screen->Clear();*/
						   std::string enteredPin = msclr::interop::marshal_as<std::string>(Screen->Text);
						   // Check if the entered PIN matches the correct PIN
						   if (enteredPin == correctPin) {
							   Screen->Text = "Arm Sucessfull";
							   timter_Activation = true; // Set the system to armed state
							   Alarm->BackColor = System::Drawing::Color::OrangeRed;
							   isSystemArmed == true;

						   }
						   else {
							   Screen->Text = "Invalid Pin";
						   }
						   if (enteredPin == correctPin && /*seconds <=10 &&*/ DOOR_BUTTON->BackColor == System::Drawing::Color::Blue) {
							   Screen->Text = "Armed Sucessfully";
							   return true;
//							   bool bError = false;
//
//							   try
//							   {
//								   CSmtp mail;
//
//#define test_gmail_tls
//
//#if defined(test_gmail_tls)
//								   mail.SetSMTPServer("smtp.gmail.com", 587);
//								   mail.SetSecurityType(USE_TLS);
//#elif defined(test_gmail_ssl)
//								   mail.SetSMTPServer("smtp.gmail.com", 465);
//								   mail.SetSecurityType(USE_SSL);
//#elif defined(test_hotmail_TLS)
//								   mail.SetSMTPServer("smtp.live.com", 25);
//								   mail.SetSecurityType(USE_TLS);
//#elif defined(test_aol_tls)
//								   mail.SetSMTPServer("smtp.aol.com", 587);
//								   mail.SetSecurityType(USE_TLS);
//#elif defined(test_yahoo_ssl)
//								   mail.SetSMTPServer("plus.smtp.mail.yahoo.com", 465);
//								   mail.SetSecurityType(USE_SSL);
//#endif
//
//								   mail.SetLogin("***");
//								   mail.SetPassword("***");
//								   mail.SetSenderName("Sbonelo");
//								   mail.SetSenderMail("sbonelogubevu@gmail.com");
//								   mail.SetReplyTo("user@domain.com");
//								   mail.SetSubject("The message");
//								   mail.AddRecipient("sbonelogubevu@gmail.com");
//								   mail.SetXPriority(XPRIORITY_NORMAL);
//								   mail.SetXMailer("The Bat! (v3.02) Professional");
//								   mail.AddMsgLine("Hello,");
//								   mail.AddMsgLine("");
//								   mail.AddMsgLine("...");
//								   mail.AddMsgLine("How are you today?");
//								   mail.AddMsgLine("");
//								   mail.AddMsgLine("Regards");
//								   mail.ModMsgLine(5, "regards");
//								   mail.DelMsgLine(2);
//								   mail.AddMsgLine("User");
//
//								   //mail.AddAttachment("../test1.jpg");
//								   //mail.AddAttachment("c:\\test2.exe");
//								   //mail.AddAttachment("c:\\test3.txt");
//								   mail.Send();
//							   }
//							   catch (ECSmtp e)
//							   {
//								   std::cout << "Error: " << e.GetErrorText().c_str() << ".\n";
//								   bError = true;
//							   }
//							   if (!bError)
//								   Screen->Text = "Mail was send successfully.\n";
//							   return 0;

						   }
						   else {
							   return false;
							   Screen->Text = " Fail To Disarm";

						   }
					   }
					   else {
						   Screen->Text = "Open Door";
					   }
				   }
				   else {
					   // Handle case when Screen is nullptr
					   return false;
				   }
			   }
			   catch (const std::exception& ex) {
				   // Handle the exception, e.g., display an error message
				   Screen->Text = "Error: " + gcnew System::String(ex.what());
				   return false;
			   }
		   }



	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (timter_Activation == true) {
			seconds++;
		}
	}




		   bool disarmSystem() {
			   if (Screen == nullptr) {
				   // Handle the error appropriately, e.g., by logging, showing an error message, or returning early.
				   return false;  // or whatever makes sense for your function
				   if (DOOR_BUTTON->BackColor == System::Drawing::Color::Red) {
					   Screen->Text = "Disarm System";
					   if (DOOR_BUTTON->BackColor == System::Drawing::Color::Red) {
						   timter_Activation = true;
						   std::string enteredPin = msclr::interop::marshal_as<std::string>(Screen->Text);
						   //bool Closed_door = DOOR_BUTTON->BackColor == System::Drawing::Color::Blue = true;
						   if (enteredPin == correctPin && seconds <= 60 && DOOR_BUTTON->BackColor == System::Drawing::Color::Blue) {
							   correctPin.clear();
							   Screen->Text = "Disarm Sucessfully";
							   return true;

						   }
						   else {
							   return false;
							   Screen->Text = "failes to disarm";
						   }
					   }
					   else {
						   Screen->Text = "Open Door 1st";
					   }
				   }
			   }

		   }






	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Check if Screen contains only digits.
		bool containsOnlyDigits = true;
		for each (char c in Screen->Text) {
			if (!Char::IsDigit(c)) {
				containsOnlyDigits = false;
				break;
			}
		}

		// If Screen doesn't contain only digits, clear it.
		if (!containsOnlyDigits) {
			Screen->Clear();
		}

		// Add "1" to Screen.
		Screen->Text += "1";
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		bool containsOnlyDigits = true;
		for each (char c in Screen->Text) {
			if (!Char::IsDigit(c)) {
				containsOnlyDigits = false;
				break;
			}
		}

		// If Screen doesn't contain only digits, clear it.
		if (!containsOnlyDigits) {
			Screen->Clear();
		}

		// Add "1" to Screen.
		Screen->Text += "2";
	}
	private: System::Void Three_Click(System::Object^ sender, System::EventArgs^ e) {
		bool containsOnlyDigits = true;
		for each (char c in Screen->Text) {
			if (!Char::IsDigit(c)) {
				containsOnlyDigits = false;
				break;
			}
		}

		// If Screen doesn't contain only digits, clear it.
		if (!containsOnlyDigits) {
			Screen->Clear();
		}

		// Add "1" to Screen.
		Screen->Text += "3";
	}
	private: System::Void Four_Click(System::Object^ sender, System::EventArgs^ e) {
		bool containsOnlyDigits = true;
		for each (char c in Screen->Text) {
			if (!Char::IsDigit(c)) {
				containsOnlyDigits = false;
				break;
			}
		}

		// If Screen doesn't contain only digits, clear it.
		if (!containsOnlyDigits) {
			Screen->Clear();
		}

		// Add "1" to Screen.
		Screen->Text += "4";
	}
	private: System::Void Five_Click(System::Object^ sender, System::EventArgs^ e) {
		bool containsOnlyDigits = true;
		for each (char c in Screen->Text) {
			if (!Char::IsDigit(c)) {
				containsOnlyDigits = false;
				break;
			}
		}

		// If Screen doesn't contain only digits, clear it.
		if (!containsOnlyDigits) {
			Screen->Clear();
		}

		// Add "1" to Screen.
		Screen->Text += "5";
	}
	private: System::Void Six_Click(System::Object^ sender, System::EventArgs^ e) {
		bool containsOnlyDigits = true;
		for each (char c in Screen->Text) {
			if (!Char::IsDigit(c)) {
				containsOnlyDigits = false;
				break;
			}
		}

		// If Screen doesn't contain only digits, clear it.
		if (!containsOnlyDigits) {
			Screen->Clear();
		}

		// Add "1" to Screen.
		Screen->Text += "6";
	}
	private: System::Void Seven_Click(System::Object^ sender, System::EventArgs^ e) {
		bool containsOnlyDigits = true;
		for each (char c in Screen->Text) {
			if (!Char::IsDigit(c)) {
				containsOnlyDigits = false;
				break;
			}
		}

		// If Screen doesn't contain only digits, clear it.
		if (!containsOnlyDigits) {
			Screen->Clear();
		}

		// Add "1" to Screen.
		Screen->Text += "7";
	}
	private: System::Void Eight_Click(System::Object^ sender, System::EventArgs^ e) {
		bool containsOnlyDigits = true;
		for each (char c in Screen->Text) {
			if (!Char::IsDigit(c)) {
				containsOnlyDigits = false;
				break;
			}
		}

		// If Screen doesn't contain only digits, clear it.
		if (!containsOnlyDigits) {
			Screen->Clear();
		}

		// Add "1" to Screen.
		Screen->Text += "8";
	}
	private: System::Void Nine_Click(System::Object^ sender, System::EventArgs^ e) {
		bool containsOnlyDigits = true;
		for each (char c in Screen->Text) {
			if (!Char::IsDigit(c)) {
				containsOnlyDigits = false;
				break;
			}
		}

		// If Screen doesn't contain only digits, clear it.
		if (!containsOnlyDigits) {
			Screen->Clear();
		}

		// Add "1" to Screen.
		Screen->Text += "9";
	}
	private: System::Void Zero_Click(System::Object^ sender, System::EventArgs^ e) {
		bool containsOnlyDigits = true;
		for each (char c in Screen->Text) {
			if (!Char::IsDigit(c)) {
				containsOnlyDigits = false;
				break;
			}
		}

		// If Screen doesn't contain only digits, clear it.
		if (!containsOnlyDigits) {
			Screen->Clear();
		}

		// Add "1" to Screen.
		Screen->Text += "0";
	}
	private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) {
		bool containsOnlyDigits = true;

		for each (char c in Screen->Text) {
			if (!Char::IsDigit(c)) {
				containsOnlyDigits = false;
				break;
			}
		}

		if (containsOnlyDigits && Screen->Text->Length > 0) {
			// Remove the last character (simulate backspace)
			Screen->Text = Screen->Text->Substring(0, Screen->Text->Length - 1);
		}
		else {
			// Clear the entire TextBox
			Screen->Clear();
		}
	}

		   bool isArmed = false;  // Assuming system starts disarmed

	private: System::Void Store_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
		


	private: bool isButtonClicked = false;
	private: System::Void DOOR_BUTTON_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!isButtonClicked) {
			// If the button hasn't been clicked before, change its background color.
			DOOR_BUTTON->BackColor = System::Drawing::Color::Red;
			isButtonClicked = true;
		}
		else {
			// If the button has been clicked before, revert to the original color.
			DOOR_BUTTON->BackColor = System::Drawing::Color::Blue;
			isButtonClicked = false;
			if (isSystemArmed) {
				// If the system was armed and the button color was reverted in time, stop the timer
			}
		}
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->button5->BackColor = System::Drawing::Color::Red;

		while (isSystemArmed == true) {
		/*	try {
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=" alarm intruder " ;Integrated Security=True";
				SqlConnection sqlconn(connString);
				sqlconn.Open();
			}
			catch (Exception^ e) {
				MessageBox::Show("Error in the database");
			}*/
			PlaySound(TEXT("mixkit - classic - alarm - 995.wav"), NULL, SND_FILENAME | SND_SYNC);
			while (true) {
				this->HOUSE->BackColor = System::Drawing::Color::Red;
				//System::Threading::Thread::Sleep(500);  // Pause for 500 milliseconds
				//this->HOUSE->BackColor = System::Drawing::Color::White;
				//System::Threading::Thread::Sleep(500);
			}
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->button2->BackColor = System::Drawing::Color::Red;
		this->HOUSE->BackColor = System::Drawing::Color::Red;
		//while (isSystemArmed == true) {
		//	PlaySound(TEXT("mixkit - classic - alarm - 995.wav"), NULL, SND_FILENAME | SND_SYNC);
		//	while (true) {
		//		this->HOUSE->BackColor = System::Drawing::Color::Red;
		//		//System::Threading::Thread::Sleep(500);  // Pause for 500 milliseconds
		//		//this->HOUSE->BackColor = System::Drawing::Color::White;
		//		//System::Threading::Thread::Sleep(500);
		//	}
		//}
	}

	private: System::Void LW_Click(System::Object^ sender, System::EventArgs^ e) {
		this->LW->BackColor = System::Drawing::Color::Red;
		this->HOUSE->BackColor = System::Drawing::Color::Red;
		//while (isSystemArmed == true) {
		//	PlaySound(TEXT("mixkit - classic - alarm - 995.wav"), NULL, SND_FILENAME | SND_SYNC);
		//	while (true) {
		//		this->HOUSE->BackColor = System::Drawing::Color::Red;
		//		//System::Threading::Thread::Sleep(500);  // Pause for 500 milliseconds
		//		//this->HOUSE->BackColor = System::Drawing::Color::White;
		//		//System::Threading::Thread::Sleep(500);
		//	}
		//}
	}
	private: System::Void BW1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->BW1->BackColor = System::Drawing::Color::Red;
		this->HOUSE->BackColor = System::Drawing::Color::Red;
		//while (isSystemArmed == true) {
		//	PlaySound(TEXT("mixkit - classic - alarm - 995.wav"), NULL, SND_FILENAME | SND_SYNC);
		//	while (true) {
		//		//this->HOUSE->BackColor = System::Drawing::Color::Red;
		//		//System::Threading::Thread::Sleep(500);  // Pause for 500 milliseconds
		//		//this->HOUSE->BackColor = System::Drawing::Color::White;
		//		//System::Threading::Thread::Sleep(500);
		//	}
		//}
	}
	private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->button4->BackColor = System::Drawing::Color::Red;
		this->HOUSE->BackColor = System::Drawing::Color::Red;
		//while (isSystemArmed == true) {
		//	PlaySound(TEXT("mixkit - classic - alarm - 995.wav"), NULL, SND_FILENAME | SND_SYNC);
		//	while (true) {
		//		this->HOUSE->BackColor = System::Drawing::Color::Red;
		//		//System::Threading::Thread::Sleep(500);  // Pause for 500 milliseconds
		//		//this->HOUSE->BackColor = System::Drawing::Color::White;
		//		//System::Threading::Thread::Sleep(500);
		//	}
		//}
	}

	private: System::Void SystemPrototype_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (isSystemArmed) { // If the system is not armed // Presumably sets the pin for the system
			armSystem();  // Arm the system and update the state
			Arm_State();
		}
		else {
			disarmSystem();  // If disarming is successful, update the state to disarmed
			Disarm_State();
		}
	}
private: System::Void Alarm_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
