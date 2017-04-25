#include "pocheng_StudentInfo.h"
#include <iostream>

using std::string;

StudentInfo::StudentInfo() {
	this->studentName = "";
	this->letterGrade = '\0';
}

StudentInfo::StudentInfo(string name, char grade) {
	this->studentName = name;
	this->letterGrade = grade;
}

string StudentInfo::getName() {
	return studentName;
}

void StudentInfo::setName(string name) {
	this->studentName = name;
}

char StudentInfo::getGrade() {
	return letterGrade;
}

void StudentInfo::setGrade(char grade) {
	this->letterGrade = grade;
}