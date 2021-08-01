// sequence.cpp

#include <iostream>
#include <sstream>
#include <vector>
#include <math.h>

#include "sequence.h"
using namespace std;


Sequence::Sequence(double* arr, const int& len) {
	for (int i = 0; i < len; i++) {
		data.push_back(arr[i]);
	}
}

Sequence::Sequence(const vector<double>& vec) {
	data = vec;
}

Sequence::Sequence(const Sequence& seq) {
	data = seq.data;
}


string Sequence::repr() const {
	ostringstream oss;
	for (int i = 0; i < data.size() - 1; i++) {
		oss << data[i] << ', ';
	}
	oss << data.back();
	return oss.str();
}

ostream& operator<<(ostream& os, const Sequence& seq) {
	return os << seq.repr();
}