#include <iostream>
using namespace std;

int main() {
	float toys_cost = 2;int toys_amount = 10;
	float pine_cost = 15;int pine_amount = 5;
	float snowman_cost = 10;int snowman_amount = 15;
	float hat_cost = 1.5;int hat_amount = 20;
	cout << "Welcome to the cash register!\n" <<
		"\nChoose a product from a list:\n" <<
		"\n(1)-Christmas tree toys - " << toys_cost << "$ " << toys_amount << "x\n"
		"\n(2)-Christmas pine  - " << pine_cost << "$ " << pine_amount << "x\n"
		"\n(3)-Snowman statue - " << snowman_cost << "$ " << snowman_amount << "x\n"
		"\n(4)-Santa hat - " << hat_cost << "$ " << hat_amount << "x\n"
		<<"\n(0)-End procedure" << endl;


	int cashier_choose; cout << "\nYour choose:"; cin >> cashier_choose;
	float sum = 0;
	int amount = 0;
	float sale = 0;

	
	while (cashier_choose != 0) {
		switch (cashier_choose)
		{
		case 1:
			cout << "How much? "; cin >> amount;
			cout << "Sale(in percents): "; cin >> sale;
			while (amount <= 0 || sale <= 0 || amount > toys_amount) {
				cout << "Wrong input! Try again\n";
				cout << "How much? "; cin >> amount;
				cout << "Sale(in percents): "; cin >> sale;
			}
			sum += ((toys_cost - toys_cost * (sale / 100)) * amount);
			cout << "\nYour choose:"; cin >> cashier_choose;
			break;
		case 2:
			cout << "How much? "; cin >> amount;
			cout << "Sale(in percents): "; cin >> sale;
			while (amount <= 0 || sale <= 0 || amount > pine_amount) {
				cout << "Wrong input! Try again\n";
				cout << "How much? "; cin >> amount;
				cout << "Sale(in percents): "; cin >> sale;

			}
			sum += ((pine_cost - pine_cost * (sale / 100)) * amount);
			cout << "\nYour choose:"; cin >> cashier_choose;
			break;
		case 3:
			cout << "How much? "; cin >> amount;
			cout << "Sale(in percents): "; cin >> sale;
			while (amount <= 0 || sale <= 0 || amount > snowman_amount) {
				cout << "Wrong input! Try again\n";
				cout << "How much? "; cin >> amount;
				cout << "Sale(in percents): "; cin >> sale;

			}
			sum += ((snowman_cost - snowman_cost * (sale / 100)) * amount);
			cout << "\nYour choose:"; cin >> cashier_choose;
			break;
		case 4:
			cout << "How much? "; cin >> amount;
			cout << "Sale(in percents): "; cin >> sale;
			while (amount <= 0 || sale <= 0 || amount > hat_amount) {
				cout << "Wrong input! Try again\n";
				cout << "How much? "; cin >> amount;
				cout << "Sale(in percents): "; cin >> sale;

			}
			sum += ((hat_cost - hat_cost * (sale / 100)) * amount);
			cout << "\nYour choose:"; cin >> cashier_choose;
			break;
		default:
			cout << "Wrong input!Try again\n";
			cout << "Your choose:"; cin >> cashier_choose;
			break;
		}
	}
	cout << "\nWell done!\nSummary:" << sum << endl;
	return 0;
}