#pragma once
#include <iostream>;
#include "NFCSShort.h";
#include "NFCSParticipant.h";
namespace CppCLRWinformsProjektTestResultViewShort {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::IO;
	using namespace System::Drawing;
	using namespace WinformNFCSTestShort;
	using namespace WinformNFCSTestParticipant;


	public ref class ResultViewShort : public System::Windows::Forms::Form
	{
	public:
		ResultViewShort(void)
		{
			InitializeComponent();
		}

	protected:
		~ResultViewShort()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSaveResults;
	protected:
	private: System::Windows::Forms::Button^ btnEnd;





	private: System::Windows::Forms::Label^ overallScoreText;





	private: System::Windows::Forms::Label^ overallScoreValue;





	private: System::Windows::Forms::TextBox^ textBox1;
	public:
		NFCSShort^ nfcsTest = gcnew NFCSShort;
		NFCSParticipant^ participant = gcnew NFCSParticipant;
	private: System::Windows::Forms::Label^ label1;
	public:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ participantIdValueText;
	private: System::Windows::Forms::Label^ participantNameValueText;
	protected:










	protected:

	private:
		System::ComponentModel::Container^ components;







#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->btnSaveResults = (gcnew System::Windows::Forms::Button());
			this->btnEnd = (gcnew System::Windows::Forms::Button());
			this->overallScoreText = (gcnew System::Windows::Forms::Label());
			this->overallScoreValue = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->participantIdValueText = (gcnew System::Windows::Forms::Label());
			this->participantNameValueText = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnSaveResults
			// 
			this->btnSaveResults->Location = System::Drawing::Point(42, 189);
			this->btnSaveResults->Name = L"btnSaveResults";
			this->btnSaveResults->Size = System::Drawing::Size(95, 23);
			this->btnSaveResults->TabIndex = 0;
			this->btnSaveResults->Text = L"Save Results";
			this->btnSaveResults->UseVisualStyleBackColor = true;
			this->btnSaveResults->Click += gcnew System::EventHandler(this, &ResultViewShort::btnSaveResults_Click);
			// 
			// btnEnd
			// 
			this->btnEnd->Location = System::Drawing::Point(280, 189);
			this->btnEnd->Name = L"btnEnd";
			this->btnEnd->Size = System::Drawing::Size(105, 23);
			this->btnEnd->TabIndex = 2;
			this->btnEnd->Text = L"End Test";
			this->btnEnd->UseVisualStyleBackColor = true;
			this->btnEnd->Click += gcnew System::EventHandler(this, &ResultViewShort::btnEnd_Click);
			// 
			// overallScoreText
			// 
			this->overallScoreText->AutoSize = true;
			this->overallScoreText->Location = System::Drawing::Point(16, 99);
			this->overallScoreText->Name = L"overallScoreText";
			this->overallScoreText->Size = System::Drawing::Size(74, 13);
			this->overallScoreText->TabIndex = 8;
			this->overallScoreText->Text = L"Overall Score:";
			// 
			// overallScoreValue
			// 
			this->overallScoreValue->AutoSize = true;
			this->overallScoreValue->Location = System::Drawing::Point(137, 99);
			this->overallScoreValue->Name = L"overallScoreValue";
			this->overallScoreValue->Size = System::Drawing::Size(0, 13);
			this->overallScoreValue->TabIndex = 14;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(197, 99);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(188, 35);
			this->textBox1->TabIndex = 20;
			this->textBox1->Text = L"Scores up to 30 mean low NFC. Scores between 75-90 mean high NFC.";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Participant ID:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 13);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Participant Name:";
			// 
			// participantIdValueText
			// 
			this->participantIdValueText->AutoSize = true;
			this->participantIdValueText->Location = System::Drawing::Point(137, 24);
			this->participantIdValueText->Name = L"participantIdValueText";
			this->participantIdValueText->Size = System::Drawing::Size(0, 13);
			this->participantIdValueText->TabIndex = 23;
			// 
			// participantNameValueText
			// 
			this->participantNameValueText->AutoSize = true;
			this->participantNameValueText->Location = System::Drawing::Point(137, 52);
			this->participantNameValueText->Name = L"participantNameValueText";
			this->participantNameValueText->Size = System::Drawing::Size(0, 13);
			this->participantNameValueText->TabIndex = 24;
			// 
			// ResultViewShort
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(410, 238);
			this->Controls->Add(this->participantNameValueText);
			this->Controls->Add(this->participantIdValueText);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->overallScoreValue);
			this->Controls->Add(this->overallScoreText);
			this->Controls->Add(this->btnEnd);
			this->Controls->Add(this->btnSaveResults);
			this->Name = L"ResultViewShort";
			this->Text = L"Results";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void getParticipantInfo(WinformNFCSTestParticipant::NFCSParticipant^& p) {
		this->participant = p;
		this->participantIdValueText->Text = p->getParticipantId();
		this->participantNameValueText->Text = p->getParticipantName();
	}
	public: System::Void generateResults(WinformNFCSTestShort::NFCSShort^& nfcsTest) {
		NFCSParticipant^ p = gcnew NFCSParticipant;
		p = participant; // I know this is redundant, but the compiler gives me an error if I dont put it here so fuck it

		this->nfcsTest = nfcsTest;
		this->nfcsTest->evaluateParticipantScores(p);

		this->overallScoreValue->Text = p->getParticipantOverallScore().ToString();
	}
	private: System::Void btnSaveResults_Click(System::Object^ sender, System::EventArgs^ e) {
		if (System::IO::File::Exists(System::Environment::CurrentDirectory + "\\NFCS_Test_Short_Results.xls")) {
			Microsoft::Office::Interop::Excel::Application^ excelApp
				= gcnew Microsoft::Office::Interop::Excel::ApplicationClass();

			excelApp->Visible = false;
			excelApp->DisplayAlerts = false;

			String^ fileName = gcnew String(System::Environment::CurrentDirectory + "\\NFCS_Test_Short_Results.xls");
			Microsoft::Office::Interop::Excel::_Workbook^ workbook
				= (excelApp->Workbooks->_Open(fileName, Type::Missing, false, Type::Missing, Type::Missing, Type::Missing,
					Type::Missing, Type::Missing, Type::Missing, Type::Missing, Type::Missing,
					Type::Missing, Type::Missing));

			Microsoft::Office::Interop::Excel::_Worksheet^ worksheet =
				safe_cast<Microsoft::Office::Interop::Excel::_Worksheet^>(workbook->Worksheets->Item["Sheet1"]);

			worksheet->Range["A1", "I1"]->Font->Bold = true;
			worksheet->Range["A1", "I1"]->VerticalAlignment =
				Microsoft::Office::Interop::Excel::XlVAlign::xlVAlignCenter;

			Microsoft::Office::Interop::Excel::Range^ range = worksheet->Cells->SpecialCells(Microsoft::Office::Interop::Excel::XlCellType::xlCellTypeLastCell, Type::Missing);

			int lastUsedRow = range->Row;
			array<int>^ scoreArr = gcnew array<int>(5);
			participant->getParticipantScores(scoreArr);

			worksheet->Cells[lastUsedRow + 1, 1] = participant->getParticipantId();
			worksheet->Cells[lastUsedRow + 1, 2] = participant->getParticipantName();
			worksheet->Cells[lastUsedRow + 1, 3] = scoreArr[0];
			worksheet->Cells[lastUsedRow + 1, 4] = scoreArr[1];
			worksheet->Cells[lastUsedRow + 1, 5] = scoreArr[2];
			worksheet->Cells[lastUsedRow + 1, 6] = scoreArr[3];
			worksheet->Cells[lastUsedRow + 1, 7] = scoreArr[4];
			worksheet->Cells[lastUsedRow + 1, 8] = participant->getParticipantOverallScore();

			DateTime^ dt = gcnew DateTime;
			dt = DateTime::Now;

			worksheet->Cells[lastUsedRow + 1, 9] = dt->Date;

			worksheet->Columns->AutoFit();

			workbook->SaveAs(System::Environment::CurrentDirectory + "\\NFCS_Test_Short_Results.xls",
				Microsoft::Office::Interop::Excel::XlFileFormat::xlWorkbookNormal, System::Type::Missing, System::Type::Missing,
				false, false, Microsoft::Office::Interop::Excel::XlSaveAsAccessMode::xlNoChange,
				System::Type::Missing, System::Type::Missing, System::Type::Missing, System::Type::Missing, System::Type::Missing
			);

			workbook->Close(System::Type::Missing, System::Type::Missing, System::Type::Missing);

			System::Runtime::InteropServices::Marshal::ReleaseComObject(workbook);

			excelApp->Quit();

			System::Runtime::InteropServices::Marshal::ReleaseComObject(excelApp);
		}
		else {
			Microsoft::Office::Interop::Excel::Application^ excelApp
				= gcnew Microsoft::Office::Interop::Excel::ApplicationClass();
			excelApp->Visible = false;
			Microsoft::Office::Interop::Excel::_Workbook^ workbook
				= safe_cast<Microsoft::Office::Interop::Excel::_Workbook^>(excelApp->Workbooks->Add(""));
			Microsoft::Office::Interop::Excel::_Worksheet^ worksheet
				= safe_cast<Microsoft::Office::Interop::Excel::_Worksheet^>(excelApp->ActiveSheet);

			worksheet->Cells[1, 1] = "Participant ID";
			worksheet->Cells[1, 2] = "Participant Name";
			worksheet->Cells[1, 3] = "OverallScore";
			worksheet->Cells[1, 4] = "Date";

			array<int>^ scoreArr = gcnew array<int>(5);
			participant->getParticipantScores(scoreArr);

			worksheet->Cells[2, 1] = participant->getParticipantId();
			worksheet->Cells[2, 2] = participant->getParticipantName();
			worksheet->Cells[2, 3] = participant->getParticipantOverallScore();

			DateTime^ dt = gcnew DateTime;
			dt = DateTime::Now;

			worksheet->Cells[2, 4] = dt->Date;

			worksheet->Columns->AutoFit();

			worksheet->Range["A1", "I1"]->Font->Bold = true;
			worksheet->Range["A1", "I1"]->VerticalAlignment =
				Microsoft::Office::Interop::Excel::XlVAlign::xlVAlignCenter;

			workbook->SaveAs(System::Environment::CurrentDirectory + "\\NFCS_Test_Short_Results.xls",
				Microsoft::Office::Interop::Excel::XlFileFormat::xlWorkbookNormal, System::Type::Missing, System::Type::Missing,
				false, false, Microsoft::Office::Interop::Excel::XlSaveAsAccessMode::xlNoChange,
				System::Type::Missing, System::Type::Missing, System::Type::Missing, System::Type::Missing, System::Type::Missing
			);

			workbook->Close(false, System::Type::Missing, System::Type::Missing);

			System::Runtime::InteropServices::Marshal::ReleaseComObject(workbook);

			excelApp->Quit();

			System::Runtime::InteropServices::Marshal::ReleaseComObject(excelApp);
		}

		MessageBox::Show("The results have been saved to an Excel file", "Results Saved", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	private: System::Void btnEnd_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
