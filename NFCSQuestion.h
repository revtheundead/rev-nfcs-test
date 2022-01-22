#pragma once
namespace WinformNFCSTestQuestion 
{
	using namespace System;
	public ref class NFCSQuestion
	{
	private:
		String^ questionText;
		char questionType;
		int questionAnswer;
		bool reversed;
	public:
		NFCSQuestion() {
			questionText = " ";
			questionType = ' ';
			questionAnswer = 0;
			reversed = false;
		}

		NFCSQuestion(const NFCSQuestion^& q) {
			this->questionText = q->questionText;
			this->questionType = q->questionType;
			this->questionAnswer = q->questionAnswer;
			this->reversed = q->reversed;
		}

		String^ getQuestionText() {
			return questionText;
		}
		char getQuestionType() {
			return questionType;
		}
		int getQuestionAnswer() {
			return questionAnswer;
		}
		bool isReversed() {
			return reversed;
		}
		void setQuestionText(String^ qstr) {
			questionText = qstr;
		}
		void setQuestionType(char qtype) {
			questionType = qtype;
		}
		void setQuestionAnswer(int ans) {
			questionAnswer = ans;
		}
		void setReversed(bool rev) {
			reversed = rev;
		}
	};
}