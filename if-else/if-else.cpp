#include <iostream>

using namespace std;

int main() {

	cout << "1.\tAdd new record." << endl;
	cout << "2.\tDelete record." << endl;
	cout << "3.\tview record" << endl;
	cout << "4.\tsearch record." << endl;
	cout << "5.\tQuit." << endl;

	cout << "Enter your selection > " << flush;

	int value;
	cin >> value;

	if (value == 5) {
		cout << "Application quitting ... " << endl;
	}

	return 0;

}