#include <iostream>;
using namespace std;

void task1() {
	cout << "Task 1: Even or Odd Number" << endl << "Description: The user inputs a number. Determine if it is even or odd." << endl << endl;
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
	cout << "Task 2: Sum of Numbers from 1 to N" << endl << "Description : The user inputs a number N. Calculate the sum of all numbers from 1 to N inclusive." << endl << endl;
	int a;
	cin >> a;

	int sum = 0;
	for (int i = 1; i <= a; i++) {
		sum += i;
	}
	cout << sum;
}

void task3() {
	cout << "Task 3: Find the Maximum Element in an Array" << endl << "Description: Given N integers in an array. Find the maximum number in the array." << endl;
	int numbers[3]{};
	
	for (int i = 0; i <= 4; i++) {
		cout << "Enter array's element " << i + 1 << ": " << endl;
		cin >> numbers[];
		cout << numbers[];
	}



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
		case 3:
			task3();
			break;
	}
}