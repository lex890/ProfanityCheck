#pragma once

namespace ProfanityCheck {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^ title_name;
	private: System::Windows::Forms::TextBox^ UserInput;

	private: System::Windows::Forms::Button^ SubmitBtn;
	private: System::Windows::Forms::Button^ ClearBtn;
	private: System::Windows::Forms::Button^ PasteBtn;
	private: System::Windows::Forms::Button^ FileBtn;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ mainMenuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ optionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutApplicationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ acoutDeveloperToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;


	private: System::ComponentModel::IContainer^ components;





	protected:

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
			this->title_name = (gcnew System::Windows::Forms::Label());
			this->UserInput = (gcnew System::Windows::Forms::TextBox());
			this->SubmitBtn = (gcnew System::Windows::Forms::Button());
			this->ClearBtn = (gcnew System::Windows::Forms::Button());
			this->PasteBtn = (gcnew System::Windows::Forms::Button());
			this->FileBtn = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->mainMenuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutApplicationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acoutDeveloperToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// title_name
			// 
			this->title_name->AutoSize = true;
			this->title_name->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title_name->ForeColor = System::Drawing::SystemColors::ControlText;
			this->title_name->Location = System::Drawing::Point(21, 33);
			this->title_name->Name = L"title_name";
			this->title_name->Size = System::Drawing::Size(154, 22);
			this->title_name->TabIndex = 0;
			this->title_name->Text = L"Profanity Checker";
			this->title_name->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// UserInput
			// 
			this->UserInput->ForeColor = System::Drawing::Color::Black;
			this->UserInput->Location = System::Drawing::Point(25, 78);
			this->UserInput->Multiline = true;
			this->UserInput->Name = L"UserInput";
			this->UserInput->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->UserInput->Size = System::Drawing::Size(580, 308);
			this->UserInput->TabIndex = 1;
			this->UserInput->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_1);
			// 
			// SubmitBtn
			// 
			this->SubmitBtn->Location = System::Drawing::Point(202, 500);
			this->SubmitBtn->Name = L"SubmitBtn";
			this->SubmitBtn->Size = System::Drawing::Size(237, 44);
			this->SubmitBtn->TabIndex = 2;
			this->SubmitBtn->Text = L"Submit";
			this->SubmitBtn->UseVisualStyleBackColor = true;
			this->SubmitBtn->Click += gcnew System::EventHandler(this, &MyForm::SubmitBtn_Click);
			// 
			// ClearBtn
			// 
			this->ClearBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ClearBtn->Location = System::Drawing::Point(202, 432);
			this->ClearBtn->Name = L"ClearBtn";
			this->ClearBtn->Size = System::Drawing::Size(75, 32);
			this->ClearBtn->TabIndex = 3;
			this->ClearBtn->Text = L"Clear";
			this->ClearBtn->UseVisualStyleBackColor = true;
			this->ClearBtn->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// PasteBtn
			// 
			this->PasteBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->PasteBtn->Location = System::Drawing::Point(364, 432);
			this->PasteBtn->Name = L"PasteBtn";
			this->PasteBtn->Size = System::Drawing::Size(75, 32);
			this->PasteBtn->TabIndex = 4;
			this->PasteBtn->Text = L"Paste";
			this->PasteBtn->UseVisualStyleBackColor = true;
			this->PasteBtn->Click += gcnew System::EventHandler(this, &MyForm::PasteBtn_Click);
			// 
			// FileBtn
			// 
			this->FileBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->FileBtn->Location = System::Drawing::Point(283, 432);
			this->FileBtn->Name = L"FileBtn";
			this->FileBtn->Size = System::Drawing::Size(75, 32);
			this->FileBtn->TabIndex = 5;
			this->FileBtn->Text = L"File";
			this->FileBtn->UseVisualStyleBackColor = true;
			this->FileBtn->Click += gcnew System::EventHandler(this, &MyForm::FileBtn_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mainMenuToolStripMenuItem,
					this->optionsToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(632, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// mainMenuToolStripMenuItem
			// 
			this->mainMenuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aboutApplicationToolStripMenuItem,
					this->acoutDeveloperToolStripMenuItem
			});
			this->mainMenuToolStripMenuItem->Name = L"mainMenuToolStripMenuItem";
			this->mainMenuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->mainMenuToolStripMenuItem->Text = L"Menu";
			this->mainMenuToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::mainMenuToolStripMenuItem_Click);
			// 
			// aboutApplicationToolStripMenuItem
			// 
			this->aboutApplicationToolStripMenuItem->Name = L"aboutApplicationToolStripMenuItem";
			this->aboutApplicationToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->aboutApplicationToolStripMenuItem->Text = L"About Application";
			this->aboutApplicationToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutApplicationToolStripMenuItem_Click);
			// 
			// acoutDeveloperToolStripMenuItem
			// 
			this->acoutDeveloperToolStripMenuItem->Name = L"acoutDeveloperToolStripMenuItem";
			this->acoutDeveloperToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->acoutDeveloperToolStripMenuItem->Text = L"About Developer";
			this->acoutDeveloperToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutDeveloperToolStripMenuItem_Click);
			// 
			// optionsToolStripMenuItem
			// 
			this->optionsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem });
			this->optionsToolStripMenuItem->Name = L"optionsToolStripMenuItem";
			this->optionsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->optionsToolStripMenuItem->Text = L"Options";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(93, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(516, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"None";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(457, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Status: ";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(632, 556);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->FileBtn);
			this->Controls->Add(this->PasteBtn);
			this->Controls->Add(this->ClearBtn);
			this->Controls->Add(this->SubmitBtn);
			this->Controls->Add(this->UserInput);
			this->Controls->Add(this->title_name);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"ProfanityChecker";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void mainMenuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		UserInput->Text = "";
	}

	private: System::Void aboutApplicationToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("This Application checks the profanity level the group of texts.", "About the program");
	}
	private: System::Void aboutDeveloperToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("[===== Group CodeHub =====]\n  Members: \n  Miguel Francis Besa\n  John Eriz Bautista\n  John Lexter Hiteroza\n  Isaac Parado", "Developers", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Windows::Forms::DialogResult dr = MessageBox::Show("Are you sure you want to exit?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);

		if (dr == Windows::Forms::DialogResult::Yes) Application::Exit();

	}

	private: System::Void FileBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();

		openFileDialog1->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->RestoreDirectory = true;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			try {
				String^ fileName = openFileDialog1->FileName;
				String^ fileContent = System::IO::File::ReadAllText(fileName);
				UserInput->Text = fileContent;
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error loading file: " + ex->Message);
			}
		}
	}

	
	private: System::Void PasteBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Clipboard::ContainsText()) {
			UserInput->Text = Clipboard::GetText();
		}
	}

	private: System::Void SubmitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = UserInput->Text;
		int profanity_score = 0;

		array<String^>^ positiveWords = { "good", "happy", "joy", "excellent" };
		array<String^>^ negativeWords = { "bad", "sad", "terrible", "awful"};
		array<String^>^ profanityWords = { "damn", "hell", "shit", "fuck", "nigga", "sigma"};


		text = text->ToLower();
		array<String^>^ words = text->Split(' ');

		for each (String ^ word in words) {

			for each (String ^ positiveWord in positiveWords) {
				if (word->Equals(positiveWord)) {
					profanity_score++;
					break;
				}
			}
			for each (String ^ negativeWord in negativeWords) {
				if (word->Equals(negativeWord)) {
					profanity_score--;
					break;
				}
			}
			for each (String ^ profanityWords in profanityWords) {
				if (word->Equals(profanityWords)) {
					profanity_score -= 2;
					break;
				}
			}
		}
	
		if (profanity_score > 0)
			label1->Text = "Positive Sentiment";
		else if (profanity_score < 0)
			label1->Text = "Negative Sentiment";
		else
			label1->Text = "Neutral Sentiment";

		if (!UserInput->Text) {
			MessageBox::Show("Textbox is empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("[===== Group CodeHub =====]\n  Members: \n  Miguel Francis Besa\n  John Eriz Bautista\n  John Lexter Hiteroza\n  Isaac Parado", "Thank You For Using Our Application", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		
	}

};
}

