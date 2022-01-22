#pragma once
#include "NFCSLong.h";
#include "NFCSParticipant.h";
#include "ResultViewLong.h";
namespace CppCLRWinformsProjektTestViewLong {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace CppCLRWinformsProjektTestResultViewLong;
	using namespace WinformNFCSTestLong;
	using namespace WinformNFCSTestParticipant;


	public ref class TestViewLong : public System::Windows::Forms::Form
	{
	public:
		TestViewLong(void)
		{
			InitializeComponent();
		}

	protected:
		~TestViewLong()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ rbtnOne;
	protected:
	private: System::Windows::Forms::RadioButton^ rbtnTwo;
	private: System::Windows::Forms::RadioButton^ rbtnThree;
	private: System::Windows::Forms::RadioButton^ rbtnFour;
	private: System::Windows::Forms::RadioButton^ rbtnFive;
	private: System::Windows::Forms::RadioButton^ rbtnSix;
	private: System::Windows::Forms::TextBox^ questionTextBox;
	private: System::Windows::Forms::Button^ btnNext;
	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::Button^ btnCancel;
	public:
		NFCSLong^ nfcsTest = gcnew NFCSLong;
		NFCSParticipant^ participant = gcnew NFCSParticipant;
	protected:

	private:
		int currentQuestionIndex = 0;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->rbtnOne = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnTwo = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnThree = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnFour = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnFive = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnSix = (gcnew System::Windows::Forms::RadioButton());
			this->questionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// rbtnOne
			// 
			this->rbtnOne->AutoSize = true;
			this->rbtnOne->Location = System::Drawing::Point(52, 195);
			this->rbtnOne->Name = L"rbtnOne";
			this->rbtnOne->Size = System::Drawing::Size(31, 17);
			this->rbtnOne->TabIndex = 1;
			this->rbtnOne->TabStop = true;
			this->rbtnOne->Text = L"1";
			this->rbtnOne->UseVisualStyleBackColor = true;
			// 
			// rbtnTwo
			// 
			this->rbtnTwo->AutoSize = true;
			this->rbtnTwo->Location = System::Drawing::Point(142, 195);
			this->rbtnTwo->Name = L"rbtnTwo";
			this->rbtnTwo->Size = System::Drawing::Size(31, 17);
			this->rbtnTwo->TabIndex = 2;
			this->rbtnTwo->TabStop = true;
			this->rbtnTwo->Text = L"2";
			this->rbtnTwo->UseVisualStyleBackColor = true;
			// 
			// rbtnThree
			// 
			this->rbtnThree->AutoSize = true;
			this->rbtnThree->Location = System::Drawing::Point(232, 195);
			this->rbtnThree->Name = L"rbtnThree";
			this->rbtnThree->Size = System::Drawing::Size(31, 17);
			this->rbtnThree->TabIndex = 3;
			this->rbtnThree->TabStop = true;
			this->rbtnThree->Text = L"3";
			this->rbtnThree->UseVisualStyleBackColor = true;
			// 
			// rbtnFour
			// 
			this->rbtnFour->AutoSize = true;
			this->rbtnFour->Location = System::Drawing::Point(322, 195);
			this->rbtnFour->Name = L"rbtnFour";
			this->rbtnFour->Size = System::Drawing::Size(31, 17);
			this->rbtnFour->TabIndex = 4;
			this->rbtnFour->TabStop = true;
			this->rbtnFour->Text = L"4";
			this->rbtnFour->UseVisualStyleBackColor = true;
			// 
			// rbtnFive
			// 
			this->rbtnFive->AutoSize = true;
			this->rbtnFive->Location = System::Drawing::Point(412, 195);
			this->rbtnFive->Name = L"rbtnFive";
			this->rbtnFive->Size = System::Drawing::Size(31, 17);
			this->rbtnFive->TabIndex = 5;
			this->rbtnFive->TabStop = true;
			this->rbtnFive->Text = L"5";
			this->rbtnFive->UseVisualStyleBackColor = true;
			// 
			// rbtnSix
			// 
			this->rbtnSix->AutoSize = true;
			this->rbtnSix->Location = System::Drawing::Point(502, 195);
			this->rbtnSix->Name = L"rbtnSix";
			this->rbtnSix->Size = System::Drawing::Size(31, 17);
			this->rbtnSix->TabIndex = 6;
			this->rbtnSix->TabStop = true;
			this->rbtnSix->Text = L"6";
			this->rbtnSix->UseVisualStyleBackColor = true;
			// 
			// questionTextBox
			// 
			this->questionTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->questionTextBox->Enabled = false;
			this->questionTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->questionTextBox->Location = System::Drawing::Point(52, 84);
			this->questionTextBox->Multiline = true;
			this->questionTextBox->Name = L"questionTextBox";
			this->questionTextBox->ReadOnly = true;
			this->questionTextBox->Size = System::Drawing::Size(481, 72);
			this->questionTextBox->TabIndex = 7;
			this->questionTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->questionTextBox->Text = nfcsTest[0]->getQuestionText();
			// 
			// btnNext
			// 
			this->btnNext->Location = System::Drawing::Point(502, 269);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(75, 23);
			this->btnNext->TabIndex = 8;
			this->btnNext->Text = L"Next";
			this->btnNext->UseVisualStyleBackColor = true;
			this->btnNext->Click += gcnew System::EventHandler(this, &TestViewLong::btnNext_Click);
			// 
			// btnBack
			// 
			this->btnBack->Enabled = false;
			this->btnBack->Location = System::Drawing::Point(412, 269);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(75, 23);
			this->btnBack->TabIndex = 9;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &TestViewLong::btnBack_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(322, 269);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 10;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &TestViewLong::btnCancel_Click);
			// 
			// TestViewLong
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(596, 320);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->questionTextBox);
			this->Controls->Add(this->rbtnSix);
			this->Controls->Add(this->rbtnFive);
			this->Controls->Add(this->rbtnFour);
			this->Controls->Add(this->rbtnThree);
			this->Controls->Add(this->rbtnTwo);
			this->Controls->Add(this->rbtnOne);
			this->Name = L"TestViewLong";
			this->Text = L"NFCS Full Test";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void getParticipantInfo(WinformNFCSTestParticipant::NFCSParticipant^& p) {
		this->participant = p;
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	currentQuestionIndex--;
	if (btnBack->Enabled == true && currentQuestionIndex == 0)
		btnBack->Enabled = false;
	questionTextBox->Text = nfcsTest[currentQuestionIndex]->getQuestionText();

	System::Console::WriteLine("{0} : {1}\n", currentQuestionIndex, nfcsTest[currentQuestionIndex]->getQuestionAnswer());

	if (nfcsTest[currentQuestionIndex]->getQuestionAnswer() == 1)
		rbtnOne->Checked = true;
	else if (nfcsTest[currentQuestionIndex]->getQuestionAnswer() == 2)
		rbtnTwo->Checked = true;
	else if (nfcsTest[currentQuestionIndex]->getQuestionAnswer() == 3)
		rbtnThree->Checked = true;
	else if (nfcsTest[currentQuestionIndex]->getQuestionAnswer() == 4)
		rbtnFour->Checked = true;
	else if (nfcsTest[currentQuestionIndex]->getQuestionAnswer() == 5)
		rbtnFive->Checked = true;
	else if (nfcsTest[currentQuestionIndex]->getQuestionAnswer() == 6)
		rbtnSix->Checked = true;
}
private: System::Void btnNext_Click(System::Object^ sender, System::EventArgs^ e) {
	if (rbtnOne->Checked) {
		rbtnOne->Checked = false;
		nfcsTest[currentQuestionIndex]->setQuestionAnswer(1);
		currentQuestionIndex++;
		if (currentQuestionIndex == 41) {
			NFCSParticipant^ p = gcnew NFCSParticipant;
			NFCSLong^ test = gcnew NFCSLong;
			p = participant; // I know this is redundant, but the compiler gives me an error if I dont put it here so fuck it
			test = nfcsTest;

			ResultViewLong^ resultForm = gcnew ResultViewLong;
			resultForm->getParticipantInfo(p);
			resultForm->generateResults(test);
			resultForm->Show();
			this->Close();
		}
		else
			questionTextBox->Text = nfcsTest[currentQuestionIndex]->getQuestionText();
	}
	else if (rbtnTwo->Checked) {
		rbtnTwo->Checked = false;
		nfcsTest[currentQuestionIndex]->setQuestionAnswer(2);
		currentQuestionIndex++;
		if (currentQuestionIndex == 41) {
			NFCSParticipant^ p = gcnew NFCSParticipant;
			NFCSLong^ test = gcnew NFCSLong;
			p = participant; // I know this is redundant, but the compiler gives me an error if I dont put it here so fuck it
			test = nfcsTest;

			ResultViewLong^ resultForm = gcnew ResultViewLong;
			resultForm->getParticipantInfo(p);
			resultForm->generateResults(test);
			resultForm->Show();
			this->Close();
		}
		else
			questionTextBox->Text = nfcsTest[currentQuestionIndex]->getQuestionText();
	}
	else if (rbtnThree->Checked) {
		rbtnThree->Checked = false;
		nfcsTest[currentQuestionIndex]->setQuestionAnswer(3);
		currentQuestionIndex++;
		if (currentQuestionIndex == 41) {
			NFCSParticipant^ p = gcnew NFCSParticipant;
			NFCSLong^ test = gcnew NFCSLong;
			p = participant; // I know this is redundant, but the compiler gives me an error if I dont put it here so fuck it
			test = nfcsTest;

			ResultViewLong^ resultForm = gcnew ResultViewLong;
			resultForm->getParticipantInfo(p);
			resultForm->generateResults(test);
			resultForm->Show();
			this->Close();
		}
		else
			questionTextBox->Text = nfcsTest[currentQuestionIndex]->getQuestionText();
	}
	else if (rbtnFour->Checked) {
		rbtnFour->Checked = false;
		nfcsTest[currentQuestionIndex]->setQuestionAnswer(4);
		currentQuestionIndex++;
		if (currentQuestionIndex == 41) {
			NFCSParticipant^ p = gcnew NFCSParticipant;
			NFCSLong^ test = gcnew NFCSLong;
			p = participant; // I know this is redundant, but the compiler gives me an error if I dont put it here so fuck it
			test = nfcsTest;

			ResultViewLong^ resultForm = gcnew ResultViewLong;
			resultForm->getParticipantInfo(p);
			resultForm->generateResults(test);
			resultForm->Show();
			this->Close();
		}
		else
			questionTextBox->Text = nfcsTest[currentQuestionIndex]->getQuestionText();
	}
	else if (rbtnFive->Checked) {
		rbtnFive->Checked = false;
		nfcsTest[currentQuestionIndex]->setQuestionAnswer(5);
		currentQuestionIndex++;
		if (currentQuestionIndex == 41) {
			NFCSParticipant^ p = gcnew NFCSParticipant;
			NFCSLong^ test = gcnew NFCSLong;
			p = participant; // I know this is redundant, but the compiler gives me an error if I dont put it here so fuck it
			test = nfcsTest;

			ResultViewLong^ resultForm = gcnew ResultViewLong;
			resultForm->getParticipantInfo(p);
			resultForm->generateResults(test);
			resultForm->Show();
			this->Close();
		}
		else
			questionTextBox->Text = nfcsTest[currentQuestionIndex]->getQuestionText();
	}
	else if (rbtnSix->Checked) {
		rbtnSix->Checked = false;
		nfcsTest[currentQuestionIndex]->setQuestionAnswer(6);
		currentQuestionIndex++;
		if (currentQuestionIndex == 41) {
			NFCSParticipant^ p = gcnew NFCSParticipant;
			NFCSLong^ test = gcnew NFCSLong;
			p = participant; // I know this is redundant, but the compiler gives me an error if I dont put it here so fuck it
			test = nfcsTest;

			ResultViewLong^ resultForm = gcnew ResultViewLong;
			resultForm->getParticipantInfo(p);
			resultForm->generateResults(test);
			resultForm->Show();
			this->Close();
		}
		else
			questionTextBox->Text = nfcsTest[currentQuestionIndex]->getQuestionText();
	}
	else {
		MessageBox::Show((String^)"No Answer Given", (String^)"Please give your answer", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	if (btnBack->Enabled == false && currentQuestionIndex != 0)
		btnBack->Enabled = true;
}
};
}
