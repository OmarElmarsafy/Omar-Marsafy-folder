#pragma once

namespace SPPROJECT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for daily_transaction
	/// </summary>
	public ref class daily_transaction : public System::Windows::Forms::Form
	{
	public:
		daily_transaction(void)
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
		~daily_transaction()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(488, 379);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 71);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Press here to show";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &daily_transaction::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->richTextBox1->Location = System::Drawing::Point(81, 38);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(941, 300);
			this->richTextBox1->TabIndex = 12;
			this->richTextBox1->Text = L"";
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(944, 400);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 31);
			this->button2->TabIndex = 14;
			this->button2->Text = L"EXIT";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &daily_transaction::button2_Click);
			// 
			// daily_transaction
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1101, 476);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"daily_transaction";
			this->Text = L"daily_transaction";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);

		}
#pragma endregion

		 String^ filter(String^date)
		{// to get just the date without the time
			 String^final;

			 for (int i = 0; i < date->Length; i++)
			 {
				 if (date[i] == ' ')
					 break;
				 else
				 {
					 final += date[i];
				 }
			 }
			 
			 return final;
		}
		 String^ user_daily(String^user_name)
		 {
			 DateTime^dt = DateTime::Now;
			 String^date = Convert::ToString(dt);
			String^ final_date = filter(date);//getting only the ate
			 String^ data_2;
			 String^final="";
			 String^final_2="";
                   StreamReader^ file_2 = gcnew StreamReader(user_name + ".txt");
				   final_2 += user_name;
				   final_2 += "\n";
					 while (!file_2->EndOfStream)
					 {
						 data_2 = file_2->ReadLine();
						 if (data_2->Contains(final_date))//function to check if that line contains the date of today or not
						 {
							 final += data_2;
							 final += "\n";
						 }
					 }
					 if (final->Length == 0)//to check if this user has no daily transaction
					 {
						 final ="This User has no daily transaction \n";
					 }
						
	
					 return (final_2+final);//returning the username and the data in that day

		 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				
				 //name->ToLower(); // convert the word to lower case if the user entered in upper case.
				 String^data;
				 String^data_2;
				 String^final_date;
				 String ^user_name;
				 bool check = false;
				 DateTime^dt = DateTime::Now;
				 String^date = Convert::ToString(dt);
				 final_date = filter(date);//to separate the date from time 
				 int counter = 0;//to count the lines in the user's names file
				 StreamReader^ file = gcnew StreamReader("users.txt");
				 while (!file->EndOfStream)//counting the lines in the users name file
				 {
					 file->ReadLine();
					 counter++;
				 }
				 file->Close();//closing the user file

				 StreamReader^ file2 = gcnew StreamReader("users.txt");
				 for (int i = 0; i < counter; i++)//to check for every user if he has daily transaction or not
				 {
					
                     user_name = file2->ReadLine();//reading the data from the file
					 richTextBox1->Text+= user_daily(user_name);//calling the function to check if the user has daily transaction or not 
				 }
				 file2->Close();//closing the user file
				
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //TO EXIT THE APP
			 Application::Exit();
			 Console::Beep();//beep sound
}
};
}
