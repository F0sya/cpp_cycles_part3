#include <iostream>
using namespace std;

int main() {
	int left_limit; cout << "Enter a left limit:"; cin >> left_limit;
	int right_limit; cout << "Enter a right limit:"; cin >> right_limit;
	int guess; cout << "Enter your guess: "; cin >> guess;

	while (guess != true) {
		for (int i = left_limit; i <= right_limit; i++) {
			if (i == guess) {
				cout << "Good job!" << endl;
				guess = true;
				return 0;
			}
		}
		cout << "Wrong!\n";
		cout << "Enter your guess: ";  cin >> guess;
	}

}