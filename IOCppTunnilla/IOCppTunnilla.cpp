// IOCppTunnilla.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

using namespace std;

int main()
{
	//char nimi[21], asuinPaikka[41];
	string nimi, asuinPaikka;
	int ika;

	cout << "\nAnna nimesi: "; // alla 3 eri tapaa lukea merkkijonoja
	//cin >> nimi; // ei hyväksy esim.välilyöntejä
	//cin.getline(nimi, 21, '\n');
	getline(cin, nimi);
	cout << "\nAnna ikäsi: "; // alla 2 tapaa lukea numeerisia tietoja, getIntFromStream() on tällä kurssilla käytettävä kustomoitu tapa
	ika = getIntFromStream(); // pyydetään kokonaisluku
	//cin >> ika;
	//cin.get(); // kulutetaan enterin painallus
	cout << "\nAsuinpaikkasi: ";
	//cin >> asuinPaikka;
	//cin.getline(asuinPaikka, 41, '\n');
	getline(cin, asuinPaikka);
	cout << "\nNimesi: " << nimi << " ikäsi: " << ika << " asuinpaikkasi: " << asuinPaikka;
	cin.get(); // enterin painallus
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
