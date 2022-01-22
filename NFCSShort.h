#pragma once
#include "NFCSQuestion.h"
#include "NFCSParticipant.h"
namespace WinformNFCSTestShort
{
	using namespace WinformNFCSTestQuestion;
	using namespace WinformNFCSTestParticipant;

	const int questionCount = 15;
	public ref class NFCSShort
	{
	private:
		array<NFCSQuestion^>^ testQuestions;
	public:
		NFCSShort() {
			//Allocation
			testQuestions = gcnew array<NFCSQuestion^>(questionCount);
			for (int i = 0; i < questionCount; i++) {
				testQuestions[i] = gcnew NFCSQuestion;
			}
			//Questions 1-15
			testQuestions[0]->setQuestionText("I don't like situations that are uncertain.");

			testQuestions[1]->setQuestionText("I dislike questions which could be answered in many different ways.");

			testQuestions[2]->setQuestionText("I find that a well ordered life with regular hours suits my temperament.");

			testQuestions[3]->setQuestionText("I feel uncomfortable when I don't understand the reason why an event occurred in my life.");

			testQuestions[4]->setQuestionText("I feel irritated when one person disagrees with what everyone else in a group believes.");

			testQuestions[5]->setQuestionText("I don't like to go into a situation without knowing what I can expect from it. ");

			testQuestions[6]->setQuestionText("When I have made a decision, I feel relieved.");

			testQuestions[7]->setQuestionText("When I am confronted with a problem, I’m dying to reach a solution very quickly.");

			testQuestions[8]->setQuestionText("I would quickly become impatient and irritated if I would not find a solution to a problem immediately.");

			testQuestions[9]->setQuestionText("I don't like to be with people who are capable of unexpected actions.");

			testQuestions[10]->setQuestionText("I dislike it when a person's statement could mean many different things.");

			testQuestions[11]->setQuestionText("I find that establishing a consistent routine enables me to enjoy life more.");

			testQuestions[12]->setQuestionText("I enjoy having a clear and structured mode of life.");

			testQuestions[13]->setQuestionText("I do not usually consult many different opinions before forming my own view.");

			testQuestions[14]->setQuestionText("I dislike unpredictable situations.");

		}
		NFCSShort(const NFCSShort^& nfcsTest) {
			for (int i = 0; i < questionCount; i++) {
				this->testQuestions[i] = nfcsTest->testQuestions[i];
			}
		}
		NFCSQuestion^ operator [] (int num) {
			return testQuestions[num];
		}
		void evaluateParticipantScores(NFCSParticipant^& p) {
			if (testQuestions[0]->getQuestionAnswer() != 0) {
				int overallScore = 0;

				for (int i = 0; i < questionCount; i++) {
					overallScore += testQuestions[i]->getQuestionAnswer();
				}
				p->setParticipantOverallScore(overallScore);
			}
		}
	};
}

