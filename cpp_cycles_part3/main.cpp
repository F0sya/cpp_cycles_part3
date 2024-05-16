#include <iostream>
using namespace std;

int main() {
	int col; cout << "Enter col:" << endl; cin >> col;
	int row; cout << "Enter row:" << endl; cin >> row;
	int user_choose; cout << "Choose a figure(1-5):"; cin >> user_choose;
	int x = col;
	int y = 0;
	switch (user_choose)
	{
	case 1:
		for (int i = 0; i < col; i++) {
			cout << "\t\t\t\t\t\t\t";
			for (int j = 0; j < row; j++) {
				if (i <= j) {
					cout << "*" << " ";
				}
				else {
					cout << " " << " ";
				}
			}
			cout << endl;
		}
		break;
	case 2:
		for (int i = 0; i < col; i++) {
			cout << "\t\t\t\t\t\t\t";
			for (int j = 0; j < row; j++) {
				if (i >= j) {
					cout << "*" << " ";
				}
				else {
					cout << " " << " ";
				}
			}
			cout << endl;
		}
		break;
	case 3:

		for (int i = 0; i <= col; i++) {
			cout << "\t\t\t\t\t\t\t";
			for (int j = 0; j < i; j++) {
				cout << " ";
			}
			for (int i = 0; i <= x * 2; i++) {
				cout << "*";
			}
			cout << endl;
			x--;
		}
		break;
	case 4:
		for (int i = col; i >= 0; i--) {
			cout << "\t\t\t\t\t\t\t";
			for (int j = 0; j < i; j++) {
				cout << " ";
			}
			for (int i = 0; i <= y * 2; i++) {
				cout << "*";
			}
			cout << endl;
			y++;
		}
		break;
	case 5:
		for (int i = 0; i <= col; i++) {
			cout << "\t\t\t\t\t\t\t";
			for (int j = 0; j < i; j++) {
				cout << " ";
			}
			for (int i = 0; i <= x * 2; i++) {
				cout << "*";
			}
			cout << endl;
			x--;
		}
		for (int i = col; i >= 0; i--) {
			cout << "\t\t\t\t\t\t\t";
			for (int j = 0; j < i; j++) {
				cout << " ";
			}
			for (int i = 0; i <= y * 2; i++) {
				cout << "*";
			}
			cout << endl;
			y++;
		}
		break;
	}
}