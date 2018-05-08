#pragma once
#include"MyForm.h"
namespace SPPROJECT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for choosetransaction
	/// </summary>
	public ref class choosetransaction : public System::Windows::Forms::Form
	{
	public:
		//choosetransaction(void)
		//{
		//	InitializeComponent();
		//	//
		//	//TODO: Add the constructor code here
		//	//
		//}
		String^ n;// n is a variable of the username
		
		 String^ read_last_line()//making a function to read the last balance for the user
		{
			StreamReader^var = gcnew StreamReader(n + ".txt");
			String^var2;
			Int32^cont, cont1=0, cont2=0;
			while (!var->EndOfStream)//counting the lines in the file
			{
				var2 = var->ReadLine();
				cont1 = cont1 + 1;
			}
			var->Close();
		/*	Int32^check = 0;*/
			StreamReader^var3 = gcnew StreamReader(n + ".txt");
			while (true)
			{
				var2 = var3->ReadLine();//to take the last line in this varaible
				cont2 = cont2 + 1;
				if (cont2 == cont1)//to check if its the last line or not
				{
					var3->Close();
					break;
				}
			}
			return (var2);
		}
		choosetransaction(String^ name)
		{
			//taking the username is a variable n
			InitializeComponent();
			n = name;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~choosetransaction()
		{
			if (components)
			{
				delete components;
			}
		}

		
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;





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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(710, 131);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 43);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Confirm";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &choosetransaction::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(567, 197);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(204, 40);
			this->textBox1->TabIndex = 17;
			this->textBox1->Visible = false;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &choosetransaction::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(213, 202);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(329, 28);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Enter The Amount Of Money :";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->UseWaitCursor = true;
			this->label4->Visible = false;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(186, 141);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(217, 26);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Choose your action";
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Cash Deposit", L"Cash Withdraw", L"Balance Inquiry",
					L"Last Five Transactions"
			});
			this->comboBox1->Location = System::Drawing::Point(412, 138);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(283, 33);
			this->comboBox1->TabIndex = 14;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &choosetransaction::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(307, 295);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 13;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Location = System::Drawing::Point(301, 72);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(412, 39);
			this->label1->TabIndex = 12;
			this->label1->Text = L"\"Select your Transaction \"";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(767, 412);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(69, 32);
			this->button3->TabIndex = 20;
			this->button3->Text = L"EXIT";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &choosetransaction::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->Location = System::Drawing::Point(569, 242);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 50);
			this->button4->TabIndex = 21;
			this->button4->Text = L"1";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &choosetransaction::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button5->Location = System::Drawing::Point(635, 242);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 50);
			this->button5->TabIndex = 22;
			this->button5->Text = L"2";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &choosetransaction::button5_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button6->Location = System::Drawing::Point(701, 242);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 50);
			this->button6->TabIndex = 23;
			this->button6->Text = L"3";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &choosetransaction::button6_Click);
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button7->Location = System::Drawing::Point(569, 295);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 50);
			this->button7->TabIndex = 24;
			this->button7->Text = L"4";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &choosetransaction::button7_Click);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->Location = System::Drawing::Point(635, 295);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 50);
			this->button8->TabIndex = 25;
			this->button8->Text = L"5";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &choosetransaction::button8_Click);
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button9->Location = System::Drawing::Point(701, 295);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(60, 50);
			this->button9->TabIndex = 26;
			this->button9->Text = L"6";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &choosetransaction::button9_Click);
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button10->Location = System::Drawing::Point(569, 351);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(60, 50);
			this->button10->TabIndex = 27;
			this->button10->Text = L"7";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Visible = false;
			this->button10->Click += gcnew System::EventHandler(this, &choosetransaction::button10_Click);
			// 
			// button11
			// 
			this->button11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button11->Location = System::Drawing::Point(635, 351);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(60, 50);
			this->button11->TabIndex = 28;
			this->button11->Text = L"8";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Visible = false;
			this->button11->Click += gcnew System::EventHandler(this, &choosetransaction::button11_Click);
			// 
			// button12
			// 
			this->button12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button12->Location = System::Drawing::Point(701, 351);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(60, 50);
			this->button12->TabIndex = 29;
			this->button12->Text = L"9";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Visible = false;
			this->button12->Click += gcnew System::EventHandler(this, &choosetransaction::button12_Click);
			// 
			// button13
			// 
			this->button13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button13->Location = System::Drawing::Point(635, 406);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(60, 50);
			this->button13->TabIndex = 30;
			this->button13->Text = L"0";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Visible = false;
			this->button13->Click += gcnew System::EventHandler(this, &choosetransaction::button13_Click);
			// 
			// button14
			// 
			this->button14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button14->Location = System::Drawing::Point(767, 295);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(60, 50);
			this->button14->TabIndex = 31;
			this->button14->Text = L"Clear";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Visible = false;
			this->button14->Click += gcnew System::EventHandler(this, &choosetransaction::button14_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->richTextBox1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->richTextBox1->Location = System::Drawing::Point(213, 258);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(529, 161);
			this->richTextBox1->TabIndex = 32;
			this->richTextBox1->Text = L"";
			this->richTextBox1->Visible = false;
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &choosetransaction::richTextBox1_TextChanged);
			// 
			// choosetransaction
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(1000, 498);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"choosetransaction";
			this->Text = L"choosetransaction";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Console::Beep();//beep sound 
				 String^s = Convert::ToString(comboBox1->SelectedItem);// make a variable of what the user choose
				 //StreamReader^k = gcnew StreamReader(n + ".txt");//reading data from the user's file
				 //String^ kk = k->ReadLine();//reading the first line 
				 //k->Close();
				 String^value;
				 DateTime^dt = DateTime::Now;//function for the date and time
				 String^date = Convert::ToString(dt);//convert the date to string
				 if (s == "Cash Deposit")//if the user choose to deposit
				 {
					
					     Int32^s;
						 String^last_line = read_last_line();//calling the function to get the last line in the file (balance)
						 s = Convert::ToInt32(textBox1->Text);//taking the amount of money the user entered
						 MessageBox::Show("Transaction complete.");
						 StreamWriter^overw = gcnew StreamWriter(n + ".txt", true);//over write in the file to save all the user data in his file
						 overw->WriteLine("Deposit " + s+"			"+date);
						 overw->Close();
						 for (int i = 0; i < last_line->Length; i++)
						 {
							 if (last_line[i] == ' ')//taking just balance 
							 {
								 value = last_line->Substring(i);//putting the final balance in this variable
							 }

						 }
						 
						 StreamWriter^ove = gcnew StreamWriter(n + ".txt", true);
						 Int32^val = Convert::ToInt32(value) + Convert::ToInt32(s);//adding the cash the user put to his balance
						 ove->WriteLine("Balance " +val);//write the final balance in the user's file
						 ove->Close();//closing the file
						

					 
				 }
				 else if (s == "Cash Withdraw")//if the user choose withdraw
				 {
					     String^last_line = read_last_line();//calling the function to read lastline in the file

						 for (int i = 0; i < last_line->Length; i++)
						 {
							 if (last_line[i] == ' ')
							 {
								 value = last_line->Substring(i);
							 }
						 }

						 Int32^s, s1, value1;
						 value1 = Convert::ToInt32(value);//convert the balance into int 
						 s1 = Convert::ToInt32(textBox1->Text);//taking the amount of money the user has entered
						 if (s1 <= value1)//checking if the user has this amount of money in his account or not
						{      // write it in the file with the date and time the transaction
							 StreamWriter^write2 = gcnew StreamWriter(n + ".txt", true);
							 write2->WriteLine("Withdraw " + s1+"			"+date);
			      			 Int32^final_balance = value1 - s1;//rewrite the new balance
		                     write2->WriteLine("Balance "+final_balance);
							 write2->Close();
							 MessageBox::Show("Transaction complete.");
							 
						 }
						 else{
							 MessageBox::Show("Insufficient Balance");
						 }
						 

				 }
				 else if (s == "Balance Inquiry")//if the user want to know his balance 
				 {//reading lastline (balance) in messagebox
					 String^last_line = read_last_line();
					 MessageBox::Show(last_line);
				 }
				 else if (s == "Last Five Transactions")
				 {
					 Console::Beep();//beep sound 
					 int counter = 0;
					 DateTime dt = DateTime::Now;//date and time function
					 // DateTime date_only = dt.Date;
					 String^user;
					 String^user_name = n + ".txt";
					 StreamReader^user_file = gcnew StreamReader(user_name);
					 while (!user_file->EndOfStream)
					 {
						 user_file->ReadLine();
						 counter++;//counting all the lines in the user's file

					 }
					 StreamReader^ tr = gcnew StreamReader(user_name);
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
				 }

	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 String^s = Convert::ToString(comboBox1->SelectedItem);
			 if (s == "Cash Deposit" || s == "Cash Withdraw")
			 {
				 label4->Visible = true;
				 textBox1->Visible = true;
				 button4->Visible = true;
				 button5->Visible = true;
				 button6->Visible = true;
				 button7->Visible = true;
				 button8->Visible = true;
				 button9->Visible = true;
				 button10->Visible = true;
				 button11->Visible = true;
				 button12->Visible = true;
				 button13->Visible = true;
				 button14->Visible = true;
				 richTextBox1->Visible = false;
			 }
			 if (s == "Balance Inquiry")
			 {
				 label4->Visible = false;
				 textBox1->Visible = false;
				 button4->Visible = false;
				 button5->Visible = false;
				 button6->Visible = false;
				 button7->Visible = false;
				 button8->Visible = false;
				 button9->Visible = false;
				 button10->Visible = false;
				 button11->Visible = false;
				 button12->Visible = false;
				 button13->Visible = false;
				 button14->Visible = false;
				 richTextBox1->Visible = false;
			 }
			 if (s == "Last Five Transactions")
			 {
				 label4->Visible = false;
				 textBox1->Visible = false;
				 button4->Visible = false;
				 button5->Visible = false;
				 button6->Visible = false;
				 button7->Visible = false;
				 button8->Visible = false;
				 button9->Visible = false;
				 button10->Visible = false;
				 button11->Visible = false;
				 button12->Visible = false;
				 button13->Visible = false;
				 button14->Visible = false;
				 richTextBox1->Visible = true;
			 }
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Console::Beep();//beep sound 
			 //if the user want a report about his last 5 transaction 
			 MyForm^go = gcnew MyForm();
			 this->Hide();
			 go->ShowDialog();
			

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 //TO EXIT THE APP
			 Application::Exit();
			 Console::Beep();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text += "1";
			 Console::Beep();//beep sound 
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text += "5";
			 Console::Beep();//beep sound 
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text += "2";
			 Console::Beep();//beep sound 
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text += "3";
			 Console::Beep();//beep sound 
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text += "4";
			 Console::Beep();//beep sound 
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text += "6";
			 Console::Beep();//beep sound 
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text += "7";
			 Console::Beep();//beep sound 
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text += "8";
			 Console::Beep();//beep sound 
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text += "9";
			 Console::Beep();//beep sound 
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text += "0";
			 Console::Beep();//beep sound 
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text = "";
			 Console::Beep();//beep sound 
}
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
