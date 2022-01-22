#pragma once
#include <iostream>;
#include "NFCSLong.h";
#include "NFCSParticipant.h";
namespace CppCLRWinformsProjektTestResultViewLong{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace WinformNFCSTestLong;
	using namespace WinformNFCSTestParticipant;


	public ref class ResultViewLong : public System::Windows::Forms::Form
	{
	public:
		ResultViewLong(void)
		{
			InitializeComponent();
		}

	protected:
		~ResultViewLong()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSaveResults;
	protected:
	private: System::Windows::Forms::Button^ btnEnd;
	private: System::Windows::Forms::Label^ classAScoreText;
	private: System::Windows::Forms::Label^ classBScoreText;
	private: System::Windows::Forms::Label^ classCScoreText;
	private: System::Windows::Forms::Label^ classDScoreText;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ overallScoreText;
	private: System::Windows::Forms::Label^ classAScoreValue;
	private: System::Windows::Forms::Label^ classBScoreValue;
	private: System::Windows::Forms::Label^ classCScoreValue;
	private: System::Windows::Forms::Label^ classDScoreValue;
	private: System::Windows::Forms::Label^ classEScoreValue;
	private: System::Windows::Forms::Label^ overallScoreValue;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	public:
		NFCSLong^ nfcsTest = gcnew NFCSLong;
		NFCSParticipant^ participant = gcnew NFCSParticipant;
	private: System::Windows::Forms::Label^ participantNameValueText;
	public:
	private: System::Windows::Forms::Label^ participantIdValueText;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	protected:










	protected:

	private:
		System::ComponentModel::Container^ components;







#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->btnSaveResults = (gcnew System::Windows::Forms::Button());
			   this->btnEnd = (gcnew System::Windows::Forms::Button());
			   this->classAScoreText = (gcnew System::Windows::Forms::Label());
			   this->classBScoreText = (gcnew System::Windows::Forms::Label());
			   this->classCScoreText = (gcnew System::Windows::Forms::Label());
			   this->classDScoreText = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->overallScoreText = (gcnew System::Windows::Forms::Label());
			   this->classAScoreValue = (gcnew System::Windows::Forms::Label());
			   this->classBScoreValue = (gcnew System::Windows::Forms::Label());
			   this->classCScoreValue = (gcnew System::Windows::Forms::Label());
			   this->classDScoreValue = (gcnew System::Windows::Forms::Label());
			   this->classEScoreValue = (gcnew System::Windows::Forms::Label());
			   this->overallScoreValue = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->participantNameValueText = (gcnew System::Windows::Forms::Label());
			   this->participantIdValueText = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->SuspendLayout();
			   // 
			   // btnSaveResults
			   // 
			   this->btnSaveResults->Location = System::Drawing::Point(64, 312);
			   this->btnSaveResults->Name = L"btnSaveResults";
			   this->btnSaveResults->Size = System::Drawing::Size(95, 23);
			   this->btnSaveResults->TabIndex = 0;
			   this->btnSaveResults->Text = L"Save Results";
			   this->btnSaveResults->UseVisualStyleBackColor = true;
			   this->btnSaveResults->Click += gcnew System::EventHandler(this, &ResultViewLong::btnSaveResults_Click);
			   // 
			   // btnEnd
			   // 
			   this->btnEnd->Location = System::Drawing::Point(302, 312);
			   this->btnEnd->Name = L"btnEnd";
			   this->btnEnd->Size = System::Drawing::Size(105, 23);
			   this->btnEnd->TabIndex = 2;
			   this->btnEnd->Text = L"End Test";
			   this->btnEnd->UseVisualStyleBackColor = true;
			   this->btnEnd->Click += gcnew System::EventHandler(this, &ResultViewLong::btnEnd_Click);
			   // 
			   // classAScoreText
			   // 
			   this->classAScoreText->AutoSize = true;
			   this->classAScoreText->Location = System::Drawing::Point(38, 101);
			   this->classAScoreText->Name = L"classAScoreText";
			   this->classAScoreText->Size = System::Drawing::Size(76, 13);
			   this->classAScoreText->TabIndex = 3;
			   this->classAScoreText->Text = L"Class A Score:";
			   // 
			   // classBScoreText
			   // 
			   this->classBScoreText->AutoSize = true;
			   this->classBScoreText->Location = System::Drawing::Point(38, 131);
			   this->classBScoreText->Name = L"classBScoreText";
			   this->classBScoreText->Size = System::Drawing::Size(76, 13);
			   this->classBScoreText->TabIndex = 4;
			   this->classBScoreText->Text = L"Class B Score:";
			   // 
			   // classCScoreText
			   // 
			   this->classCScoreText->AutoSize = true;
			   this->classCScoreText->Location = System::Drawing::Point(38, 161);
			   this->classCScoreText->Name = L"classCScoreText";
			   this->classCScoreText->Size = System::Drawing::Size(76, 13);
			   this->classCScoreText->TabIndex = 5;
			   this->classCScoreText->Text = L"Class C Score:";
			   // 
			   // classDScoreText
			   // 
			   this->classDScoreText->AutoSize = true;
			   this->classDScoreText->Location = System::Drawing::Point(38, 191);
			   this->classDScoreText->Name = L"classDScoreText";
			   this->classDScoreText->Size = System::Drawing::Size(77, 13);
			   this->classDScoreText->TabIndex = 6;
			   this->classDScoreText->Text = L"Class D Score:";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(38, 221);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(76, 13);
			   this->label2->TabIndex = 7;
			   this->label2->Text = L"Class E Score:";
			   // 
			   // overallScoreText
			   // 
			   this->overallScoreText->AutoSize = true;
			   this->overallScoreText->Location = System::Drawing::Point(38, 262);
			   this->overallScoreText->Name = L"overallScoreText";
			   this->overallScoreText->Size = System::Drawing::Size(74, 13);
			   this->overallScoreText->TabIndex = 8;
			   this->overallScoreText->Text = L"Overall Score:";
			   // 
			   // classAScoreValue
			   // 
			   this->classAScoreValue->AutoSize = true;
			   this->classAScoreValue->Location = System::Drawing::Point(138, 101);
			   this->classAScoreValue->Name = L"classAScoreValue";
			   this->classAScoreValue->Size = System::Drawing::Size(0, 13);
			   this->classAScoreValue->TabIndex = 9;
			   // 
			   // classBScoreValue
			   // 
			   this->classBScoreValue->AutoSize = true;
			   this->classBScoreValue->Location = System::Drawing::Point(138, 131);
			   this->classBScoreValue->Name = L"classBScoreValue";
			   this->classBScoreValue->Size = System::Drawing::Size(0, 13);
			   this->classBScoreValue->TabIndex = 10;
			   // 
			   // classCScoreValue
			   // 
			   this->classCScoreValue->AutoSize = true;
			   this->classCScoreValue->Location = System::Drawing::Point(138, 161);
			   this->classCScoreValue->Name = L"classCScoreValue";
			   this->classCScoreValue->Size = System::Drawing::Size(0, 13);
			   this->classCScoreValue->TabIndex = 11;
			   // 
			   // classDScoreValue
			   // 
			   this->classDScoreValue->AutoSize = true;
			   this->classDScoreValue->Location = System::Drawing::Point(138, 191);
			   this->classDScoreValue->Name = L"classDScoreValue";
			   this->classDScoreValue->Size = System::Drawing::Size(0, 13);
			   this->classDScoreValue->TabIndex = 12;
			   // 
			   // classEScoreValue
			   // 
			   this->classEScoreValue->AutoSize = true;
			   this->classEScoreValue->Location = System::Drawing::Point(138, 221);
			   this->classEScoreValue->Name = L"classEScoreValue";
			   this->classEScoreValue->Size = System::Drawing::Size(0, 13);
			   this->classEScoreValue->TabIndex = 13;
			   // 
			   // overallScoreValue
			   // 
			   this->overallScoreValue->AutoSize = true;
			   this->overallScoreValue->Location = System::Drawing::Point(138, 262);
			   this->overallScoreValue->Name = L"overallScoreValue";
			   this->overallScoreValue->Size = System::Drawing::Size(0, 13);
			   this->overallScoreValue->TabIndex = 14;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(232, 101);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(155, 13);
			   this->label1->TabIndex = 15;
			   this->label1->Text = L"‘a’— measure the need for order";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(232, 131);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(191, 13);
			   this->label3->TabIndex = 16;
			   this->label3->Text = L"‘b’ – measure the need for predictability";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(232, 161);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(132, 13);
			   this->label4->TabIndex = 17;
			   this->label4->Text = L"‘c’— measure decisiveness";
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Location = System::Drawing::Point(232, 191);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(180, 13);
			   this->label5->TabIndex = 18;
			   this->label5->Text = L"‘d’— measure avoidance of ambiguity";
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Location = System::Drawing::Point(232, 221);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(161, 13);
			   this->label6->TabIndex = 19;
			   this->label6->Text = L"‘e’— measure closed mindedness";
			   // 
			   // textBox1
			   // 
			   this->textBox1->BackColor = System::Drawing::SystemColors::MenuBar;
			   this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			   this->textBox1->Enabled = false;
			   this->textBox1->Location = System::Drawing::Point(235, 262);
			   this->textBox1->Multiline = true;
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(188, 35);
			   this->textBox1->TabIndex = 20;
			   this->textBox1->Text = L"Scores up to 82 mean low NFC. Scores from 205-246 mean high NFC";
			   // 
			   // participantNameValueText
			   // 
			   this->participantNameValueText->AutoSize = true;
			   this->participantNameValueText->Location = System::Drawing::Point(159, 48);
			   this->participantNameValueText->Name = L"participantNameValueText";
			   this->participantNameValueText->Size = System::Drawing::Size(0, 13);
			   this->participantNameValueText->TabIndex = 28;
			   // 
			   // participantIdValueText
			   // 
			   this->participantIdValueText->AutoSize = true;
			   this->participantIdValueText->Location = System::Drawing::Point(159, 20);
			   this->participantIdValueText->Name = L"participantIdValueText";
			   this->participantIdValueText->Size = System::Drawing::Size(0, 13);
			   this->participantIdValueText->TabIndex = 27;
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Location = System::Drawing::Point(38, 48);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(91, 13);
			   this->label7->TabIndex = 26;
			   this->label7->Text = L"Participant Name:";
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Location = System::Drawing::Point(38, 20);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(74, 13);
			   this->label8->TabIndex = 25;
			   this->label8->Text = L"Participant ID:";
			   // 
			   // ResultViewLong
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(482, 353);
			   this->Controls->Add(this->participantNameValueText);
			   this->Controls->Add(this->participantIdValueText);
			   this->Controls->Add(this->label7);
			   this->Controls->Add(this->label8);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->overallScoreValue);
			   this->Controls->Add(this->classEScoreValue);
			   this->Controls->Add(this->classDScoreValue);
			   this->Controls->Add(this->classCScoreValue);
			   this->Controls->Add(this->classBScoreValue);
			   this->Controls->Add(this->classAScoreValue);
			   this->Controls->Add(this->overallScoreText);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->classDScoreText);
			   this->Controls->Add(this->classCScoreText);
			   this->Controls->Add(this->classBScoreText);
			   this->Controls->Add(this->classAScoreText);
			   this->Controls->Add(this->btnEnd);
			   this->Controls->Add(this->btnSaveResults);
			   this->Name = L"ResultViewLong";
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
	public: System::Void generateResults(WinformNFCSTestLong::NFCSLong^& nfcsTest) {
		NFCSParticipant^ p = gcnew NFCSParticipant;
		p = participant; // I know this is redundant, but the compiler gives me an error if I dont put it here so fuck it
		
		this->nfcsTest = nfcsTest;
		this->nfcsTest->evaluateParticipantScores(p);

		array<int>^ scoresArray = gcnew array<int>(5);
		p->getParticipantScores(scoresArray);

		this->classAScoreValue->Text = scoresArray[0].ToString();
		this->classBScoreValue->Text = scoresArray[1].ToString();
		this->classCScoreValue->Text = scoresArray[2].ToString();
		this->classDScoreValue->Text = scoresArray[3].ToString();
		this->classEScoreValue->Text = scoresArray[4].ToString();
		this->overallScoreValue->Text = p->getParticipantOverallScore().ToString();
	}
	private: System::Void btnSaveResults_Click(System::Object^ sender, System::EventArgs^ e) {
		if (System::IO::File::Exists(System::Environment::CurrentDirectory + "\\NFCS_Test_Long_Results.xls")) {
			Microsoft::Office::Interop::Excel::Application^ excelApp
				= gcnew Microsoft::Office::Interop::Excel::ApplicationClass();

			excelApp->Visible = false;
			excelApp->DisplayAlerts = false;

			String^ fileName = gcnew String(System::Environment::CurrentDirectory + "\\NFCS_Test_Long_Results.xls");
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

			workbook->SaveAs(System::Environment::CurrentDirectory + "\\NFCS_Test_Long_Results.xls",
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
			worksheet->Cells[1, 3] = "A Score";
			worksheet->Cells[1, 4] = "B Score";
			worksheet->Cells[1, 5] = "C Score";
			worksheet->Cells[1, 6] = "D Score";
			worksheet->Cells[1, 7] = "E Score";
			worksheet->Cells[1, 8] = "OverallScore";
			worksheet->Cells[1, 9] = "Date";

			array<int>^ scoreArr = gcnew array<int>(5);
			participant->getParticipantScores(scoreArr);

			worksheet->Cells[2, 1] = participant->getParticipantId();
			worksheet->Cells[2, 2] = participant->getParticipantName();
			worksheet->Cells[2, 3] = scoreArr[0];
			worksheet->Cells[2, 4] = scoreArr[1];
			worksheet->Cells[2, 5] = scoreArr[2];
			worksheet->Cells[2, 6] = scoreArr[3];
			worksheet->Cells[2, 7] = scoreArr[4];
			worksheet->Cells[2, 8] = participant->getParticipantOverallScore();

			DateTime^ dt = gcnew DateTime;
			dt = DateTime::Now;

			worksheet->Cells[2, 9] = dt->Date;

			worksheet->Columns->AutoFit();

			worksheet->Range["A1", "I1"]->Font->Bold = true;
			worksheet->Range["A1", "I1"]->VerticalAlignment =
				Microsoft::Office::Interop::Excel::XlVAlign::xlVAlignCenter;

			workbook->SaveAs(System::Environment::CurrentDirectory + "\\NFCS_Test_Long_Results.xls",
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
