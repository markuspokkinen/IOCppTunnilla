#include "pch.h"

using namespace std;

// loops until user inputs integer
int getIntFromStream()
{
	string input = "";
	int value = 0;

	while (true) {
		getline(cin, input);

		// This code converts from string to number safely.
		stringstream myStream(input);
		if (myStream >> value)
			break;
		cout << "Ei numeerinen, syötä uusi." << endl;
	}
	return value;
}

// loops until user inputs float
float getFloatFromStream()
{
	string input = "";
	float value = 0;

	while (true) {
		getline(cin, input);

		// This code converts from string to number safely.
		stringstream myStream(input);
		if (myStream >> value)
			break;
		cout << "Ei liukuluku, syötä uusi." << endl;
	}
	return value;
}