#include "pocheng_Problem1.h"
#include "pocheng_StudentInfo.h"
#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::endl;

void insertStudentInfo(vector<StudentInfo>& v, StudentInfo s) {
	int size = v.size();
	int len1 = s.getName().length();
	if (size == 0) {
		v.push_back(s);
	}
	else {
		for (int index = 0; index < size; index++) {
			bool isInserted = false;
			int len2 = v[index].getName().length();
			int length = len1 < len2 ? len1 : len2;
			for (int len = 0; len < length; len++) {
				if (s.getName()[len] < v[index].getName()[len]) {
					v.insert(v.begin() + index, s);
					isInserted = true;
					break;
				}
				else if (s.getName()[len] > v[index].getName()[len]) {
					if (index + 1 < size) {
						break;
					}
					else {
						v.push_back(s);
						isInserted = true;
						break;
					}
				}
				else {
					continue;
				}
			}
			if (isInserted) {
				break;
			}
		}
	}
}

void Problem1() {
	cout << "Problem 1:" << endl;
	StudentInfo student1("Dennis", 'B');
	StudentInfo student2("Jessica", 'D');
	StudentInfo student3("David", 'A');
	StudentInfo student4("Bob", 'C');
	StudentInfo student5("Kingson", 'F');
	StudentInfo student6("Kim", 'B');
	StudentInfo student7("Chris", 'A');
	StudentInfo student8("Peter", 'C');
	StudentInfo student9("Zack", 'B');
	StudentInfo student10("Elisa", 'C');
	
	vector<StudentInfo> v;
	insertStudentInfo(v, student1);
	insertStudentInfo(v, student2);
	insertStudentInfo(v, student3);
	insertStudentInfo(v, student4);
	insertStudentInfo(v, student5);
	insertStudentInfo(v, student6);
	insertStudentInfo(v, student7);
	insertStudentInfo(v, student8);
	insertStudentInfo(v, student9);
	insertStudentInfo(v, student10);

	cout << "Name:\t\tGrade:" << endl;
	for (vector<StudentInfo>::iterator i = v.begin(); i != v.end(); i++) {
		cout << i->getName() << "\t\t" << i->getGrade() << endl;
	}
	
	cout << endl << endl;
}