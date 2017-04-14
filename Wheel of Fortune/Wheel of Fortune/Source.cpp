#include <iostream>
using namespace std;
#include <string>
int main() {
	char secret[7] = { 'p','i','c','k','l','e','s' };
	char input;
	char word[7] = { ' ',' ', ' ',' ',' ',' ',' ' };
	int turns = 7;
	bool g = true;
	int correct = 0; 
	cout << "Wheel! Of! Fortune!!!" << endl;

	while (turns > 0 || correct == 7) {
		g = false;
		cout << "You have " << turns << " turns left" << endl;
		cout << "Take a Guess:" << endl;
		cin >> input;
		for (int i = 0; i < 7; i++) {
			if (input == secret[i]) {
				word[i] = input;
				cout << "Correct!" << endl;
				g = true;
				correct++;
			}
			
		}
		if (g == false) {
			cout << "Sorry not Correct" << endl;
			turns--;
		}
		cout << "Your word so far:" << endl;
		for (int i = 0; i < 7; i++)
			cout << word[i];
		cout << endl;
	}// while loop
	return 0;
}