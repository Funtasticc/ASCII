#include <iostream>
using namespace std;

int main()
{
	double eingabe;
	int auswahl;
	cout << "Ihre Eingabe ? ";
	cin >> eingabe;
	cout << "Ihre Auswahl der Umwandlung:" << endl;
	cout << "1 - Celsius in Fahrenheit" << endl;
	cout << "2 - Meter in Fuss" << endl;
	cout << "3 - Euro in US Dollar" << endl;
	cin >> auswahl;

	eingabe = 
		(((0.5* (auswahl*auswahl)) + ((-2.5*auswahl) + 3)))  * ((eingabe*1.8) + 32) +
		(((-1 * (auswahl*auswahl)) + ((4 * auswahl) -3))     * (eingabe*3.2808))    +
		(((0.5 *(auswahl*auswahl)) + ((-1.5*auswahl) + 1))   * (eingabe*1.2957));

	cout << "Das Ergebnis lautet: " << eingabe << endl;


	system("PAUSE");
	return 0;
	}