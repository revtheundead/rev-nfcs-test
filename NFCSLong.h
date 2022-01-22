#pragma once
#include "NFCSQuestion.h"
#include "NFCSParticipant.h"
namespace WinformNFCSTestLong
{
	using namespace WinformNFCSTestQuestion;
	using namespace WinformNFCSTestParticipant;

	const int questionCount = 41;
	public ref class NFCSLong
	{
	private:
		array<NFCSQuestion^>^ testQuestions;
	public:
		NFCSLong() {
			//Allocation
			testQuestions = gcnew array<NFCSQuestion^>(questionCount);
			for (int i = 0; i < questionCount; i++) {
				testQuestions[i] = gcnew NFCSQuestion;
			}
			//Questions 1-41
			testQuestions[0]->setQuestionText("I think that having clear rules and order at work is essential for success.");
			testQuestions[0]->setQuestionType('a');

			testQuestions[1]->setQuestionText("Even after I've made up my mind about something, I am always eager to consider a different opinion.");
			testQuestions[1]->setQuestionType('e');
			testQuestions[1]->setReversed(true);

			testQuestions[2]->setQuestionText("I don't like situations that are uncertain.");
			testQuestions[2]->setQuestionType('d');

			testQuestions[3]->setQuestionText("I dislike questions which could be answered in many different ways.");
			testQuestions[3]->setQuestionType('e');

			testQuestions[4]->setQuestionText("I like to have friends who are unpredictable.");
			testQuestions[4]->setQuestionType('b');
			testQuestions[4]->setReversed(true);

			testQuestions[5]->setQuestionText("I find that a well ordered life with regular hours suits my temperament.");
			testQuestions[5]->setQuestionType('a');

			testQuestions[6]->setQuestionText("When dining out, I like to go to places where I have been before so that I know what to expect.");
			testQuestions[6]->setQuestionType('b');

			testQuestions[7]->setQuestionText("I feel uncomfortable when I don't understand the reason why an event occurred in my life.");
			testQuestions[7]->setQuestionType('d');

			testQuestions[8]->setQuestionText("I feel irritated when one person disagrees with what everyone else in a group believes.");
			testQuestions[8]->setQuestionType('e');

			testQuestions[9]->setQuestionText("I hate to change my plans at the last minute.");
			testQuestions[9]->setQuestionType('a');

			testQuestions[10]->setQuestionText("I don't like to go into a situation without knowing what I can expect from it.");
			testQuestions[10]->setQuestionType('b');

			testQuestions[11]->setQuestionText("When I have made a decision, I feel relieved.");
			testQuestions[11]->setQuestionType('c');

			testQuestions[12]->setQuestionText("When I am confronted with a problem, I'm dying to reach a solution very quickly.");
			testQuestions[12]->setQuestionType('c');

			testQuestions[13]->setQuestionText("When I am confused about an important issue, I feel very upset.");
			testQuestions[13]->setQuestionType('d');

			testQuestions[14]->setQuestionText("I would quickly become impatient and irritated if I would not find a solution to a problem immediately.");
			testQuestions[14]->setQuestionType('c');

			testQuestions[15]->setQuestionText("I would rather make a decision quickly than sleep over it.");
			testQuestions[15]->setQuestionType('c');

			testQuestions[16]->setQuestionText("Even if I get a lot of time to make a decision, I still feel compelled to decide quickly.");
			testQuestions[16]->setQuestionType('c');

			testQuestions[17]->setQuestionText("I think it is fun to change my plans at the last moment.");
			testQuestions[17]->setQuestionType('b');
			testQuestions[18]->setReversed(true);

			testQuestions[18]->setQuestionText("I enjoy the uncertainty of going into a new situation without knowing what might happen.");
			testQuestions[18]->setQuestionType('b');
			testQuestions[18]->setReversed(true);

			testQuestions[19]->setQuestionText("My personal space is usually messy and disorganized.");
			testQuestions[19]->setQuestionType('a');
			testQuestions[19]->setReversed(true);

			testQuestions[20]->setQuestionText("In most social conflicts, I can easily see which side is right and which is wrong.");
			testQuestions[20]->setQuestionType('d');

			testQuestions[21]->setQuestionText("I almost always feel hurried to reach a decision, even when there is no reason to do so.");
			testQuestions[21]->setQuestionType('c');

			testQuestions[22]->setQuestionText("I believe that orderliness and organization are among the most important characteristics of a good student.");
			testQuestions[22]->setQuestionType('a');

			testQuestions[23]->setQuestionText("When considering most conflict situations, I can usually see how both sides could be right.");
			testQuestions[23]->setQuestionType('e');
			testQuestions[23]->setReversed(true);

			testQuestions[24]->setQuestionText("I don't like to be with people who are capable of unexpected actions.");
			testQuestions[24]->setQuestionType('b');

			testQuestions[25]->setQuestionText("I prefer to socialize with familiar friends because I know what to expect from them.");
			testQuestions[25]->setQuestionType('b');

			testQuestions[26]->setQuestionText("I think that I would learn best in a class that lacks clearly stated objectives and requirements.");
			testQuestions[26]->setQuestionType('a');
			testQuestions[26]->setReversed(true);

			testQuestions[27]->setQuestionText("When thinking about a problem, I consider as many different opinions on the issue as possible.");
			testQuestions[27]->setQuestionType('e');
			testQuestions[27]->setReversed(true);

			testQuestions[28]->setQuestionText("I like to know what people are thinking all the time.");
			testQuestions[28]->setQuestionType('d');

			testQuestions[29]->setQuestionText("I dislike it when a person's statement could mean many different things.");
			testQuestions[29]->setQuestionType('d');

			testQuestions[30]->setQuestionText("It's annoying to listen to someone who cannot seem to make up his or her mind.");
			testQuestions[30]->setQuestionType('d');

			testQuestions[31]->setQuestionText("I find that establishing a consistent routine enables me to enjoy life more.");
			testQuestions[31]->setQuestionType('a');

			testQuestions[32]->setQuestionText("I enjoy having a clear and structured mode of life.");
			testQuestions[32]->setQuestionType('a');

			testQuestions[33]->setQuestionText("I prefer interacting with people whose opinions are very different from my own.");
			testQuestions[33]->setQuestionType('e');
			testQuestions[33]->setReversed(true);

			testQuestions[34]->setQuestionText("I like to have a place for everything and everything in its place.");
			testQuestions[34]->setQuestionType('a');

			testQuestions[35]->setQuestionText("I feel uncomfortable when someone's meaning or intention is unclear to me.");
			testQuestions[35]->setQuestionType('d');

			testQuestions[36]->setQuestionText("I always see many possible solutions to problems I face.");
			testQuestions[36]->setQuestionType('e');
			testQuestions[36]->setReversed(true);

			testQuestions[37]->setQuestionText("I'd rather know bad news than stay in a state of uncertainty.");
			testQuestions[37]->setQuestionType('d');

			testQuestions[38]->setQuestionText("I do not usually consult many different opinions before forming my own view.");
			testQuestions[38]->setQuestionType('e');

			testQuestions[39]->setQuestionText("I dislike unpredictable situations.");
			testQuestions[39]->setQuestionType('b');

			testQuestions[40]->setQuestionText("I dislike the routine aspects of my work (studies).");
			testQuestions[40]->setQuestionType('a');
			testQuestions[40]->setReversed(true);
		}
		NFCSLong(const NFCSLong^& nfcsTest) {
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

				// [0] = (a), [1] = (b), [2] = (c), [3] = (d), [4] = (e)
				int partwiseScores[5] = { 0, 0, 0, 0, 0 };

				for (int i = 0; i < questionCount; i++) {

					if (testQuestions[i]->getQuestionType() == 'a') {
						if (testQuestions[i]->isReversed()) { partwiseScores[0] -= testQuestions[i]->getQuestionAnswer(); overallScore -= testQuestions[i]->getQuestionAnswer(); }
						else { partwiseScores[0] += testQuestions[i]->getQuestionAnswer(); overallScore += testQuestions[i]->getQuestionAnswer(); }
					}
					else if (testQuestions[i]->getQuestionType() == 'b') {
						if (testQuestions[i]->isReversed()) { partwiseScores[1] -= testQuestions[i]->getQuestionAnswer(); overallScore -= testQuestions[i]->getQuestionAnswer(); }
						else { partwiseScores[1] += testQuestions[i]->getQuestionAnswer(); overallScore += testQuestions[i]->getQuestionAnswer(); }
					}
					else if (testQuestions[i]->getQuestionType() == 'c') {
						if (testQuestions[i]->isReversed()) { partwiseScores[2] -= testQuestions[i]->getQuestionAnswer(); overallScore -= testQuestions[i]->getQuestionAnswer(); }
						else { partwiseScores[2] += testQuestions[i]->getQuestionAnswer(); overallScore += testQuestions[i]->getQuestionAnswer(); }
					}
					else if (testQuestions[i]->getQuestionType() == 'd') {
						if (testQuestions[i]->isReversed()) { partwiseScores[3] -= testQuestions[i]->getQuestionAnswer(); overallScore -= testQuestions[i]->getQuestionAnswer(); }
						else { partwiseScores[3] += testQuestions[i]->getQuestionAnswer(); overallScore += testQuestions[i]->getQuestionAnswer(); }
					}
					else if (testQuestions[i]->getQuestionType() == 'e') {
						if (testQuestions[i]->isReversed()) { partwiseScores[4] -= testQuestions[i]->getQuestionAnswer(); overallScore -= testQuestions[i]->getQuestionAnswer(); }
						else { partwiseScores[4] += testQuestions[i]->getQuestionAnswer(); overallScore += testQuestions[i]->getQuestionAnswer(); }
					}
				}

				p->setParticipantScores(partwiseScores);
				p->setParticipantOverallScore(overallScore);
			}
		}
	};
}

