#pragma once
#include "NFCSParticipant.h";
#include "TestViewLong.h";
#include "TestViewShort.h";
namespace CppCLRWinformsProjektTestSelection {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace WinformNFCSTestParticipant;
	using namespace CppCLRWinformsProjektTestViewLong;
	using namespace CppCLRWinformsProjektTestViewShort;


	public ref class TestSelection : public System::Windows::Forms::Form
	{
	public:
		TestSelection(void)
		{
			InitializeComponent();
		}

	protected:
		~TestSelection()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:










	protected:
	public:
		WinformNFCSTestParticipant::NFCSParticipant^ participant = gcnew WinformNFCSTestParticipant::NFCSParticipant;
	private:
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Button^ btnLongVer;
	private: System::Windows::Forms::Button^ btnShortVer;
	private: System::Windows::Forms::Button^ btnCancel;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->btnLongVer = (gcnew System::Windows::Forms::Button());
			this->btnShortVer = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnLongVer
			// 
			this->btnLongVer->Location = System::Drawing::Point(59, 176);
			this->btnLongVer->Name = L"btnLongVer";
			this->btnLongVer->Size = System::Drawing::Size(75, 23);
			this->btnLongVer->TabIndex = 0;
			this->btnLongVer->Text = L"Long";
			this->btnLongVer->UseVisualStyleBackColor = true;
			this->btnLongVer->Click += gcnew System::EventHandler(this, &TestSelection::btnLongVer_Click);
			// 
			// btnShortVer
			// 
			this->btnShortVer->Location = System::Drawing::Point(265, 176);
			this->btnShortVer->Name = L"btnShortVer";
			this->btnShortVer->Size = System::Drawing::Size(75, 23);
			this->btnShortVer->TabIndex = 1;
			this->btnShortVer->Text = L"Short";
			this->btnShortVer->UseVisualStyleBackColor = true;
			this->btnShortVer->Click += gcnew System::EventHandler(this, &TestSelection::btnShortVer_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(12, 228);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 2;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &TestSelection::btnCancel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(54, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(286, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Welcome To The NFCS Test";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->Location = System::Drawing::Point(71, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(260, 18);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Please pick your preferred test version";
			// 
			// TestSelection
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(389, 274);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnShortVer);
			this->Controls->Add(this->btnLongVer);
			this->Name = L"TestSelection";
			this->Text = L"Test Selection";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void getParticipantInfo(WinformNFCSTestParticipant::NFCSParticipant^& p) {
		this->participant = p;
	}
	private: System::Void btnLongVer_Click(System::Object^ sender, System::EventArgs^ e) {
		NFCSParticipant^ p = gcnew NFCSParticipant;
		p = participant; // I know this is redundant, but the compiler gives me an error if I dont put it here so fuck it

		TestViewLong^ testView = gcnew TestViewLong;
		testView->getParticipantInfo(p);
		testView->Show();
		this->Close();
	}
	private: System::Void btnShortVer_Click(System::Object^ sender, System::EventArgs^ e) {
		NFCSParticipant^ p = gcnew NFCSParticipant;
		p = participant; // I know this is redundant, but the compiler gives me an error if I dont put it here so fuck it

		TestViewShort^ testView = gcnew TestViewShort;
		testView->getParticipantInfo(p);
		testView->Show();
		this->Close();
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}
