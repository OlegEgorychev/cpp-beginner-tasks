#include <iostream>;
using namespace std;

void task1() {
	cout << "Task 1: Even or Odd Number" << endl << "Description: The user inputs a number.Determine if it is even or odd." << endl << endl;
	int a;
	char choice;

	do {
		cout << "Please, enter a number " << endl;
		cin >> a;

		if (a % 2 == 0) {
			cout << "It's an even number." << endl;
		}

		else {
			cout << "It's an odd number." << endl;
		}

		cout << "Whould you like to try again? (use y/Y)" << endl;
		cin >> choice;

	} while (choice == 'y' || choice == 'Y');
	cout << "Thank you for using the programm" << endl;
}

void task2() {
	cout << "Bye, World!";
}

int main() {
	int choice;
	cout << "Choice task:";
	cin >> choice;

	switch (choice) {
		case 1:
			task1();
			break;
		case 2:
			task2();
			break;
	}
}