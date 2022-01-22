#pragma once
#include "NFCSParticipant.h";
#include "TestSelection.h";
namespace CppCLRWinformsProjektTestLogin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace CppCLRWinformsProjektTestSelection;

	public ref class TestLogin : public System::Windows::Forms::Form
	{
	public:
		TestLogin(void)
		{
			InitializeComponent();
		}

	protected:
		~TestLogin()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:










	protected:
	private:
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnStart;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Surname:";
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(34, 169);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 2;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &TestLogin::btnCancel_Click);
			// 
			// btnStart
			// 
			this->btnStart->Location = System::Drawing::Point(212, 169);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(75, 23);
			this->btnStart->TabIndex = 3;
			this->btnStart->Text = L"Start";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &TestLogin::btnStart_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(97, 72);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(179, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(97, 101);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(179, 20);
			this->textBox2->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->Location = System::Drawing::Point(39, 29);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(237, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Please enter your name to start the test";
			// 
			// TestLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(314, 236);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnStart);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"TestLogin";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void btnStart_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(textBox1->Text) || String::IsNullOrEmpty(textBox1->Text) || String::IsNullOrWhiteSpace(textBox2->Text) || String::IsNullOrEmpty(textBox2->Text))
			MessageBox::Show((String^)"Name and Surname Empty", (String^)"Please enter your name and surname", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else {
			NFCSParticipant^ p = gcnew NFCSParticipant((String^)textBox1->Text + " " + (String^)textBox2->Text);
			TestSelection^ testSelectionForm = gcnew TestSelection;
			testSelectionForm->getParticipantInfo(p);
			testSelectionForm->Show();
			this->Close();
		}
	}
};
}
