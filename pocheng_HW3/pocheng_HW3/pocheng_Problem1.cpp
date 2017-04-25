#include "pocheng_Problem1.h"
#include <iostream>
#include <string>

using namespace std;

void Problem1() {
	cout << "Problem 1" << endl;
	// Problem 1's declaration
	string inputString;
	int value, maxScore = 0, minScore = 0, totalScore = 0, studentCount = 0;
	double averageScore = 0.0;
	int gradeIntervalsCount[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	string gradeIntervals[10] = { "0 - 10   ", "11 - 20  ", "21 - 30  ", "31 - 40  ", "41 - 50  ", "51 - 60  ", "61 - 70  ", "71 - 80  ", "81 - 90  ", "91 - 100 " };

	cout << "Please enter the student's grade between 0 - 100: ";
	while (cin >> inputString) {
		// Exit & Print the output
		if (inputString == "exit") {
			cout << endl;
			for (int i = 9; i >= 0; i--) {
				cout << gradeIntervals[i] << "|";
				if (gradeIntervalsCount[i] != 0)
					for (int j = 0; j < gradeIntervalsCount[i]; j++) {
						cout << "*";
					}
				cout << endl;
			}
			cout << "Total Scores: " << studentCount << endl;
			cout << "Highest Score: " << maxScore << endl;
			cout << "Lowest Score: " << minScore << endl;
			cout << "Average Score: " << averageScore << endl;
			break;
		}
		else {
			// Convert string to integer
			value = stoi(inputString);
			// Check if the value is in the range of 0 - 100
			if (value >= 0 && value <= 100) {
				// Count the grade with the grade intervals
				if (value >= 91)
					gradeIntervalsCount[9]++;
				else if (value >= 81 && value <= 90)
					gradeIntervalsCount[8]++;
				else if (value >= 71 && value <= 80)
					gradeIntervalsCount[7]++;
				else if (value >= 61 && value <= 70)
					gradeIntervalsCount[6]++;
				else if (value >= 51 && value <= 60)
					gradeIntervalsCount[5]++;
				else if (value >= 41 && value <= 50)
					gradeIntervalsCount[4]++;
				else if (value >= 31 && value <= 40)
					gradeIntervalsCount[3]++;
				else if (value >= 21 && value <= 30)
					gradeIntervalsCount[2]++;
				else if (value >= 11 && value <= 20)
					gradeIntervalsCount[1]++;
				else
					gradeIntervalsCount[0]++;

				// Initial all data if the input is the first time
				if (studentCount == 0) {
					maxScore = value;
					minScore = value;
					totalScore = value;
					studentCount = 1;
					averageScore = value;
				}
				else {
					// Find the highest and lowest scores
					if (value > maxScore)
						maxScore = value;
					if (value < minScore)
						minScore = value;
					
					// Calculate the average score
					totalScore += value;
					studentCount++;
					averageScore = totalScore / static_cast<double>(studentCount);
				}
				cout << "Please enter the student's grade between 0 - 100: ";
			}
			else {
				cout << "Error, please re-enter the student's grade between 0 - 100: ";
				continue;
			}
		}
	}
	cout << endl << endl;
}