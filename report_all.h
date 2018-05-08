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
	/// Summary for report_all
	/// </summary>
	public ref class report_all : public System::Windows::Forms::Form
	{
	public:
		report_all(void)
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
		~report_all()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  srchusr;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  EXIT;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->srchusr = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->EXIT = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(175, 12);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(257, 29);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Write your Username";
			// 
			// srchusr
			// 
			this->srchusr->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->srchusr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->srchusr->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->srchusr->Location = System::Drawing::Point(182, 36);
			this->srchusr->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->srchusr->Multiline = true;
			this->srchusr->Name = L"srchusr";
			this->srchusr->Size = System::Drawing::Size(238, 38);
			this->srchusr->TabIndex = 10;
			this->srchusr->TextChanged += gcnew System::EventHandler(this, &report_all::srchusr_TextChanged);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(221, 271);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 71);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Press here to show";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &report_all::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::SystemColors::Control;
			this->richTextBox1->Location = System::Drawing::Point(58, 77);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(472, 173);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			// 
			// EXIT
			// 
			this->EXIT->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->EXIT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->EXIT->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->EXIT->Location = System::Drawing::Point(486, 336);
			this->EXIT->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->EXIT->Name = L"EXIT";
			this->EXIT->Size = System::Drawing::Size(89, 25);
			this->EXIT->TabIndex = 12;
			this->EXIT->Text = L"EXIT";
			this->EXIT->UseVisualStyleBackColor = true;
			this->EXIT->Click += gcnew System::EventHandler(this, &report_all::EXIT_Click);
			// 
			// report_all
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(587, 365);
			this->Controls->Add(this->EXIT);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->srchusr);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->ForeColor = System::Drawing::SystemColors::Control;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"report_all";
			this->Text = L"report_all";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Console::Beep();//beep sound 
				 int cont = 0;
				 StreamReader^ file = gcnew StreamReader("users.txt");
				 String^ user;
				 String^ user_2 = srchusr->Text;
				 //srchusr is the name of the textbox
				 //DateTime^ dt = DateTime::Now;//function to know the date 
				 //DateTime dateonly = dt->Date;

				 bool found = false;
				 while (!file->EndOfStream)//to check if the username is already exist or not
				 {
					 user = file->ReadLine();
					 if (user_2 != user)
					 {
						 found = false;

					 }
					 else if (user_2 == user)
					 {
						 found = true;
						 break;
					 }
				 }
				 if (found == true)//if the user name is correct 
				 {
					 StreamReader^read = gcnew StreamReader(srchusr->Text + ".txt");//opening the user's file
					 while (!read->EndOfStream){
						 read->ReadLine();
						 cont++;//counting the lines of the file 
					 }
					 read->Close();//closing the user's file 

				 }
				 else if (found == false)//if the user name in not correct 
				 {
					 MessageBox::Show("Enter a valid username");//message to the user
				 }
				 StreamReader^ tr = gcnew StreamReader(srchusr->Text + ".txt");//opening the user's file 
				 array<String ^>^  ListLines = gcnew array<String ^>(cont);//creating array size of the lines in the user's file 


				 for (int i = 0; i < cont; i++)//putting all the lines from the file in the array
				 {
					 ListLines[i] = tr->ReadLine();
				 }
				 String^ lines = "";
				 for (int i = 1; i <=cont-2; i += 2){//putting all the user's transaction in the string

					 lines += (ListLines[i] + "\n");
				 }

				 richTextBox1->Text = lines;//showing all the transactions
				 if (lines->Length == 0)
				 {
					 richTextBox1->Text = "The user has no transaction \n";
				 }

				 else
				 {
					 richTextBox1->Text = lines;//showing all the transactions
				 }
				
	}
private: System::Void EXIT_Click(System::Object^  sender, System::EventArgs^  e) {
			 //TO EXIT THE APP
			 Application::Exit();
			 Console::Beep();//beep sound
}
private: System::Void srchusr_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
