#include "pocheng_Problem2.h"
#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

void insertMapValue(map<string, vector<string>>& uni, string key, string value) {
	int size = uni[key].size();
	int len1 = value.length();
	if (size == 0) {
		uni[key].push_back(value);
	}
	else {
		for (int index = 0; index < size; index++) {
			bool isInserted = false;
			int len2 = uni[key][index].length();
			int length = len1 < len2 ? len1 : len2;
			for (int len = 0; len < length; len++) {
				if (value[len] < uni[key][index][len]) {
					uni[key].insert(uni[key].begin() + index, value);
					isInserted = true;
					break;
				}
				else if (value[len] > uni[key][index][len]) {
					if (index + 1 < size) {
						break;
					}
					else {
						uni[key].push_back(value);
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

void outputMapData(map<string, vector<string>> uni) {
	ofstream out;
	out.open("output.txt");
	for (auto it = uni.begin(); it != uni.end(); it++) {
		int size = it->second.size();
		for (int index = 0; index < size; index++) {
			//cout << it->first << ";" << it->second[index] << endl;
			out << it->first << ";" << it->second[index] << endl;
		}
	}
	out.close();
}

void Problem2() {
	cout << "Problem 2:" << endl;

	map<string, vector<string>> uni;
	ifstream in;
	in.open("input.txt");

	string line = "";
	string str1 = "";
	string str2 = "";
	size_t pos;

	while (!in.eof()) {
		getline(in, line);
		pos = line.find(";");
		str1 = line.substr(0, pos);
		str2 = line.substr(pos + 1);
		insertMapValue(uni, str1, str2);
	}

	in.close();

	outputMapData(uni);
}