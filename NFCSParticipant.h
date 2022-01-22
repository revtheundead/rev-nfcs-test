#pragma once
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <iomanip>
namespace WinformNFCSTestParticipant
{

	using namespace System;

	public ref class NFCSParticipant {
	private:
		String^ participantId;
		String^ participantName;
		array<int>^ participantScores = gcnew array<int>(5);
		int participantOverallScore;

		String^ generateId() {
			String^ str = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
			String^ id = "";

			srand(time(NULL));
			while (id->Length < 20) {
				id = id + str[rand() % str->Length];
				if (id->Length % 5 == 0 && id->Length != 20) {
					id = id + "-";
				}
			}
			return id;
		}
	public:
		NFCSParticipant() {
			participantId = " ";
			participantName = " ";
		}
		NFCSParticipant(String^ pName) {
			participantName = pName;
			participantId = generateId();

			for (int i = 0; i < 5; i++) {
				participantScores[i] = 0;
			}
		}
		NFCSParticipant(const NFCSParticipant^& p) {
			this->participantId = p->participantId;
			this->participantName = p->participantName;
			this->participantOverallScore = p->participantOverallScore;
			this->participantScores = p->participantScores;
		}

		String^ getParticipantId() {
			return participantId;
		}
		String^ getParticipantName() {
			return participantName;
		}
		void getParticipantScores(array<int>^& emptyArr) {
			emptyArr[0] = participantScores[0];
			emptyArr[1] = participantScores[1];
			emptyArr[2] = participantScores[2];
			emptyArr[3] = participantScores[3];
			emptyArr[4] = participantScores[4];
		}
		int getParticipantOverallScore() {
			return participantOverallScore;
		}
		void setParticipantOverallScore(const int overallScore) {
			participantOverallScore = overallScore;
		}
		void setParticipantScores(const int scoreArr[]) {
			if (participantScores[0] == 0) {
				participantScores[0] = scoreArr[0];
				participantScores[1] = scoreArr[1];
				participantScores[2] = scoreArr[2];
				participantScores[3] = scoreArr[3];
				participantScores[4] = scoreArr[4];
			}
		}
		void exportUserData() {		/// TODO: Change this with CLI specific solution
			if (participantScores[0] != 0) {
				std::ofstream outfile;
				outfile.open("user_data.txt", std::ios_base::app);
				std::string pId, pName;
				outfile << std::left << std::setw(20) << pId << '\t' << std::setw(20)
					<< pName << '\t' << std::setw(3) << participantScores[0] << '\t'
					<< std::setw(3) << participantScores[1] << '\t' << std::setw(3) << participantScores[2] << '\t'
					<< std::setw(3) << participantScores[3] << '\t' << std::setw(3) << participantScores[4] << '\t'
					<< std::setw(3) << participantOverallScore << std::endl;
				outfile.close();
			}
		}
	};


}
