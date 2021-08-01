// sequence.h

#pragma once

#include <iostream>
#include <vector>
using namespace std;

class Sequence {
private:
	vector<double> data;
public:
	Sequence(double* arr, const int& len);
	Sequence(const vector<double>& vec);
	Sequence(const Sequence& seq);
	string repr(void) const;
};

ostream& operator<<(ostream& os, const Sequence& seq);