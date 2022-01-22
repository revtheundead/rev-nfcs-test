#pragma once
#include "IntroductionContinuation.h";
namespace CppCLRWinformsProjektTestIntroduction {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace CppCLRWinformsProjektTestIntroductionContinuation;


	public ref class Introduction : public System::Windows::Forms::Form
	{
	public:
		Introduction(void)
		{
			InitializeComponent();
		}

	protected:
		~Introduction()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnContinue;

	protected:




















	protected:










	protected:

	private:
		System::ComponentModel::Container^ components;







#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Introduction::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnContinue = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(61, 56);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(301, 49);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Webster, D. M., & Kruglanski, A. W. (1994). Individual differences in need for co"
				L"gnitive.closure. Journal of Personality and Social Psychology, 67(6), 1049–1062."
				L"";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Location = System::Drawing::Point(61, 111);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(301, 59);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"Roets, A., & Van Hiel, A. (2007). Separating ability from need: Clarifying the di"
				L"mensional structure of the need for closure scale. Personality and Social Psycho"
				L"logy Bulletin, 33(2), 266-280.";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Location = System::Drawing::Point(61, 176);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(301, 32);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"The NFCS comes in two versions: a full 41 item questionnaire and a short 15 item "
				L"questionnaire.";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Location = System::Drawing::Point(61, 214);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(301, 75);
			this->textBox4->TabIndex = 3;
			this->textBox4->Text = L"The NFCS can be computed as a total NFC score by adding all the items. "
				L"It is also possible to derive sub-scale scores for each of the five sub-scales, by summing "
				L"up items according to their sub scale designation.The designations are indicates as as follows : ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(76, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(260, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"The Need for Closure Scale (NFCS)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(58, 412);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(161, 13);
			this->label6->TabIndex = 24;
			this->label6->Text = L"‘e’— measure closed mindedness";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(58, 382);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(180, 13);
			this->label5->TabIndex = 23;
			this->label5->Text = L"‘d’— measure avoidance of ambiguity";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(58, 352);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 13);
			this->label4->TabIndex = 22;
			this->label4->Text = L"‘c’— measure decisiveness";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(58, 322);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(191, 13);
			this->label3->TabIndex = 21;
			this->label3->Text = L"‘b’ – measure the need for predictability";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(58, 292);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(155, 13);
			this->label2->TabIndex = 20;
			this->label2->Text = L"‘a’— measure the need for order";
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(25, 459);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 25;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &Introduction::btnCancel_Click);
			// 
			// btnContinue
			// 
			this->btnContinue->Location = System::Drawing::Point(307, 459);
			this->btnContinue->Name = L"btnContinue";
			this->btnContinue->Size = System::Drawing::Size(75, 23);
			this->btnContinue->TabIndex = 26;
			this->btnContinue->Text = L"Continue";
			this->btnContinue->UseVisualStyleBackColor = true;
			this->btnContinue->Click += gcnew System::EventHandler(this, &Introduction::btnContinue_Click);
			// 
			// Introduction
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(410, 499);
			this->Controls->Add(this->btnContinue);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Introduction";
			this->Text = L"Introduction";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void btnContinue_Click(System::Object^ sender, System::EventArgs^ e) {
		IntroductionContinuation^ form = gcnew IntroductionContinuation;
		form->Show();
		this->Close();
	}
};
}
