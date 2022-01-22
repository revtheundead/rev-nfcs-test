#include "pch.h";
const bool DEBUG = false;

using namespace System;

//int main(array<System::String ^> ^args)
//{
//    return 0;
//}

#include "Introduction.h"
/*#include "NFCSLong.h"
#include "NFCSQuestion.h"*/

using namespace System;
using namespace System::Windows::Forms;

void ExitWhenLastWindowClosed(Object^ sender, FormClosedEventArgs^ e) {
    if (Application::OpenForms->Count == 0) Application::Exit();
    else Application::OpenForms[0]->FormClosed += gcnew FormClosedEventHandler(ExitWhenLastWindowClosed);
}

[STAThread]
int main(array<System::String^>^ args) {
    if (DEBUG) {
		/*Microsoft::Office::Interop::Excel::Application^ excelApp
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

		worksheet->Columns->AutoFit();

		worksheet->Range["A1", "D1"]->Font->Bold = true;
		worksheet->Range["A1", "D1"]->VerticalAlignment =
			Microsoft::Office::Interop::Excel::XlVAlign::xlVAlignCenter;

		array<System::Object^>^ cellValuesP = gcnew array<System::Object^>(2);
		cellValuesP[0] = "abcdtest";
		cellValuesP[1] = "test test";

		array<System::Object^>^ cellValuesS = gcnew array<System::Object^>(2);
		cellValuesS[0] = 72;	// random number
		cellValuesS[1] = DateTime::Now;

		worksheet->Range["A2", "B2"]->Value2 = cellValuesP;
		worksheet->Range["C2", "D2"]->Value2 = cellValuesS;

		workbook->SaveAs(System::Environment::CurrentDirectory + "\\NFCS_Test_Short_Results.xls",
			Microsoft::Office::Interop::Excel::XlFileFormat::xlWorkbookNormal, System::Type::Missing, System::Type::Missing,
			false, false, Microsoft::Office::Interop::Excel::XlSaveAsAccessMode::xlNoChange,
			System::Type::Missing, System::Type::Missing, System::Type::Missing, System::Type::Missing, System::Type::Missing
		);

		workbook->Close(false, System::Type::Missing, System::Type::Missing);

		System::Runtime::InteropServices::Marshal::ReleaseComObject(workbook);

		excelApp->Quit();

		System::Runtime::InteropServices::Marshal::ReleaseComObject(excelApp);
		return 0;*/
	}
    else {
        Application::EnableVisualStyles();
        Application::SetCompatibleTextRenderingDefault(false);
        CppCLRWinformsProjektTestIntroduction::Introduction^ startupWindow = gcnew CppCLRWinformsProjektTestIntroduction::Introduction;
        startupWindow->FormClosed += gcnew FormClosedEventHandler(&ExitWhenLastWindowClosed);
        startupWindow->Show();
        Application::Run();
        return 0;
    }
}

