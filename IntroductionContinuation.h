#pragma once
#include "Login.h";
namespace CppCLRWinformsProjektTestIntroductionContinuation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace CppCLRWinformsProjektTestLogin;


	public ref class IntroductionContinuation : public System::Windows::Forms::Form
	{
	public:
		IntroductionContinuation(void)
		{
			InitializeComponent();
		}

	protected:
		~IntroductionContinuation()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:









	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnContinue;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	protected:
		




	protected:




	protected:

	private:
		System::ComponentModel::Container^ components;







#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnContinue = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(39, 254);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 25;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &IntroductionContinuation::btnCancel_Click);
			// 
			// btnContinue
			// 
			this->btnContinue->Location = System::Drawing::Point(302, 254);
			this->btnContinue->Name = L"btnContinue";
			this->btnContinue->Size = System::Drawing::Size(75, 23);
			this->btnContinue->TabIndex = 26;
			this->btnContinue->Text = L"Continue";
			this->btnContinue->UseVisualStyleBackColor = true;
			this->btnContinue->Click += gcnew System::EventHandler(this, &IntroductionContinuation::btnContinue_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(39, 46);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(338, 68);
			this->textBox1->TabIndex = 27;
			this->textBox1->Text = L"Read each of the following statements and decide how much you agree with each acc"
				L"ording to your beliefs and experiences. Please respond according to the followin"
				L"g scale:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(49, 189);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 13);
			this->label4->TabIndex = 30;
			this->label4->Text = L"3 = Slightly Disagree";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(49, 159);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(122, 13);
			this->label3->TabIndex = 29;
			this->label3->Text = L"2 = Moderately Disagree";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(49, 129);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 13);
			this->label2->TabIndex = 28;
			this->label2->Text = L"1 = Strongly Disagree";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(235, 189);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 13);
			this->label1->TabIndex = 33;
			this->label1->Text = L"6 = Strongly Agree";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(235, 159);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 13);
			this->label5->TabIndex = 32;
			this->label5->Text = L"5 = Moderately Agree";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(235, 129);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 13);
			this->label6->TabIndex = 31;
			this->label6->Text = L"4 = Slightly Agree";
			// 
			// IntroductionContinuation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(410, 317);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnContinue);
			this->Controls->Add(this->btnCancel);
			this->Name = L"IntroductionContinuation";
			this->Text = L"Introduction Continuation";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void btnContinue_Click(System::Object^ sender, System::EventArgs^ e) {
		TestLogin^ loginForm = gcnew TestLogin;
		loginForm->Show();
		this->Close();
	}
	};
}
