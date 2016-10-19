#include <iostream>
using namespace std;

int main()
{
	char anfangsbuchstabe = 'a';
	cout << "Bitte geben sie einen Buchstaben ein: ";
	cin >> anfangsbuchstabe;
	int x = anfangsbuchstabe;
	x = int(anfangsbuchstabe) - '`';
	cout << "Der Buchstabe " << anfangsbuchstabe << " hat die Position " << x << " im Alphabet.\n";
	system("PAUSE");
	return 0;
}
