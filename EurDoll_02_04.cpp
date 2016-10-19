#include <iostream>
using namespace std;

int main()
{
	double eur, dol;

	cout << "Bitte geben sie die Geldmenge in EUR ein ? ";

	cin >> eur;

	dol = eur * 1.2957; // Umrechnungswert Euro zu US Dollar

	cout << "Die Geldmenge in US Dollar lautet: " << dol << endl;

	system("PAUSE");

	return 0;

}