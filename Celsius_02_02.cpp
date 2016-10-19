#include <iostream>;
using namespace std;

int main()
{
	double celsius, fahrenheit = 0;
	// Programm zur umrechnung von Celsius in Fahrenheit
	cout << "Bitte geben Sie die Temperatur in Grad Celsius ein : ?";
	cin >> celsius;
	fahrenheit = celsius * 1.8 + 32; // Umrechnungsformel Celsius zu Fahrenheit
	cout << "Die Temperatur in Fahrenheit lautet: " << fahrenheit << endl;
	system("PAUSE");
	return 0;
}