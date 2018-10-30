#include <iostream>
using namespace std;

int main()
{
	char buchstabe;

	int posi;

	cout << "Bitte geben sie einen Buchstaben ein: ? ";
	cin >> buchstabe;

	posi = buchstabe - ('a' - 1);

	cout << "Der Buchstabe hat die Position " << posi << " im Alphabet" << endl;

	system("PAUSE");

	return 0;

}
