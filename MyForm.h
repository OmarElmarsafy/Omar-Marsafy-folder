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
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(339, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(376, 40);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Write your Username";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->textBox1->Location = System::Drawing::Point(346, 73);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(369, 57);
			this->textBox1->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(397, 427);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(222, 110);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Press here to show";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::SystemColors::Control;
			this->richTextBox1->Location = System::Drawing::Point(133, 139);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(775, 264);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button2->Location = System::Drawing::Point(855, 481);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 55);
			this->button2->TabIndex = 8;
			this->button2->Text = L"EXIT";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1014, 563);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Console::Beep();//beep sound 
				 int counter = 0;
				 DateTime dt = DateTime::Now;//date and time function
				// DateTime date_only = dt.Date;
				 StreamReader^users = gcnew StreamReader("users.txt");
				 String^user;
				 String^user_name = textBox1->Text;
				 bool found = false;
				 while (!users->EndOfStream){
					 user = users->ReadLine();//read the usernames from the usersnames file to check if the user is found or not
					 if (user_name != user)
					 {
						 found = false;
					 }
					 else if (user_name == user)
					 {
						 found = true;
						 break;
					 }

				 }
				 users->Close();
				 if (found == true)
				 {//if the username is correct
					 // reading all the data from the user's file
					 StreamReader^user_file = gcnew StreamReader(textBox1->Text + ".txt");
					 while (!user_file->EndOfStream)
					 {
						 user_file->ReadLine();
						 counter++;//counting all the lines in the user's file

					 }
				 }
				 StreamReader^ tr = gcnew StreamReader(textBox1->Text + ".txt");
				 array<String ^>^  ListLines = gcnew array<String ^>(counter);//an array with size of the counter (num of the file's lines)
				 //putting all the data in the array
				 for (int i = 0; i < counter; i++)
				 {
					 ListLines[i] = tr->ReadLine();
				 }
				 String^ lines = "";
				 if (counter >= 11){//to check if the user had more han 5 transactions or not
					 int restlines = counter - 10;
					 for (int i = counter - 2; i >= restlines; i -= 2){

						 lines += (ListLines[i] + "\n");
					 }

					 richTextBox1->Text = lines;
				 }
				 else if (counter < 11) {
					 for (int i = counter - 2; i >= 1; i -= 2){

						 lines += (ListLines[i] + "\n");
					 }

					 richTextBox1->Text = lines;
				 }


				 else if (found == false)
				 {
					 MessageBox::Show("Enter a valid username !");
				 }



	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //TO EXIT THE APP
			 Application::Exit();
			 Console::Beep();
}
};
}
