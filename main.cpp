// main.cpp

#include <iostream>
#include <vector>

#include "sequence.h"
using namespace std;

int main() {
	cout << "Numeric Calculation" << endl;
	double arr[5] = { 0.0, 0.5, 1.0, 1.5, 2.0 };
	Sequence seq1(arr, 5);
	vector<double> vec;
	for (int i = 0; i < 5; i++) {
		vec.push_back(arr[i]);
	}
	Sequence seq2(vec);
	Sequence seq3 = seq2;
	cout << seq1 << endl << seq2 << endl << seq3 << endl;
	return 0;
}
