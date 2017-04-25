#include "pocheng_Problem2.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int getLength(int grid[][6], int rowSize) {
	int elements = 0;
	for (int num = 0; num < rowSize; num++) {
		elements += sizeof(grid[num]) / sizeof(grid[num][0]);
	}
	return elements;
}

void Problem2() {
	cout << "Problem 2" << endl;

	// Create a 2D array and initial it with random number
	int random2DArray[4][6];
	int maxRow = 0;
	srand(time(NULL));
	for (int rowIn = 0; rowIn < 4; rowIn++) {
		for (int columnIn = 0; columnIn < 6; columnIn++) {
			random2DArray[rowIn][columnIn] = rand() % 26;
		}
	}

	// print the table out
	for (int rowOut = 0; rowOut < 4; rowOut++) {
		int sum = 0;
		for (int columnOut = 0; columnOut < 6; columnOut++) {
			sum += random2DArray[rowOut][columnOut];
			cout << random2DArray[rowOut][columnOut] << "\t";
		}
		if (sum > maxRow)
			maxRow = sum;
		cout << "| sum: " << sum << endl;
	}
	cout << "Max Row = " << maxRow << endl;
	cout << "Number of elements = " << getLength(random2DArray, 4) 
		<< endl << endl << endl;
}