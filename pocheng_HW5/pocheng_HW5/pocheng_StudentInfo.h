#ifndef POCHENG_STUDENTINFO_H
#define POCHENG_STUDENTINFO_H

#include <iostream>

using std::string;

class StudentInfo {
public:
	StudentInfo();
	StudentInfo(string name, char grade);
	string getName();
	void setName(string name);
	char getGrade();
	void setGrade(char grade);
private:
	string studentName;
	char letterGrade;
};

#endif