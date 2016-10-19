#include <iostream>
using namespace std;

int main()
{
	 double meter, fuss;

	 cout << "Bitte geben Sie die Laenge in Metern ein: ? ";

	 cin >> meter;

	 fuss = meter * 3.2808; // Umrechnungswert Meter zu Fuss

	 cout << "Die Laenge in Fuss lautet: " << fuss << endl;

	 system("PAUSE");

	 return 0;

		  
}