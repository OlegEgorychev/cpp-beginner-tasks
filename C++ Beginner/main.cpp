#include <iostream>;
using namespace std;

string taskTitles[]{
	"Task 1: Even or Odd Number",
	"Task 2: Sum of Numbers from 1 to N",
	"Task 3: Find the Maximum Element in an Array",
	"Task 4: Count Positive Numbers in an Array",
	"Task 5: Sum of Array Elements",
	"Task 6: Simple Calculator",
	"Task 7: Multiplication Table",
	"Task 8: Reverse an Array",
	"Task 9: Count Even Numbers in an Array",
	"Task 10: Minimum of Two Numbers",
	"Task 11: Convert Centimeters to Inches",
};

string taskDescription[] {
	/* Task 1 */ "The user inputs a number. Determine if it is even or odd.",
	/* Task 2 */ "The user inputs a number N. Calculate the sum of all numbers from 1 to N inclusive.",
	/* Task 3 */ "Given N integers in an array. Find the maximum number in the array.",
	/* Task 4 */ "The user inputs N numbers. Determine how many of them are positive.",
	/* Task 5 */ "Given N numbers in an array. Find the sum of all the elements in the array.",
	/* Task 6 */ "The user inputs two numbers and an operation symbol (+, -, *, /). Output the result of the corresponding operation.",
	/* Task 7 */ "Output the multiplication table for a number input by the user (from 1 to 10).",
	/* Task 8 */ "The user inputs N numbers. Output them in reverse order.",
	/* Task 9 */ "The user inputs an array of numbers. Find and output the count of even numbers in the array.",
	/* Task 10 */"The user inputs two numbers. Output the minimum of the two.",
	/* Task 11 */"The user inputs a length in centimeters. The program should convert it into inches, knowing that 1 inch equals 2.54 centimeters. The input value can be a decimal number."

};

void displayTaskHeader(int taskNumber) {
	cout << taskTitles[taskNumber] << endl;
	cout << "Description: " << taskDescription[taskNumber] << endl << endl;
}

void displayAvailableTasks() {
	cout << "Available tasks: " << endl;
	for (int i = 0; i <= 11; i++) {
		cout << i + 1 << ". " << taskTitles[i] << endl;
	}
	cout << endl;
}

void task1() {
	displayTaskHeader(0);
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
	displayTaskHeader(1);
	int a;
	cin >> a;

	int sum = 0;
	for (int i = 1; i <= a; i++) {
		sum += i;
	}
	cout << sum;
}

void task3() {
	displayTaskHeader(2);
	int numbers[3]{};
	
	for (int i = 0; i <= 2; i++) {
		cout << "Enter array's element " << i + 1 << ": " << endl;
		cin >> numbers[i];
		}
		
	cout << "Elements: ";
	for (int i = 0; i < 3; i++) {
		cout << numbers[i] << ", ";
	}
	cout << endl;

	int maxElement = numbers[0];

	for (int i = 1; i <= 2; i++)
		if (numbers[i] > maxElement) {
			maxElement = numbers[i];
		}
	cout << "The maximum element is: " << maxElement << endl;
}

void task4() {
	displayTaskHeader(3);
	int numbers[5]{};

	
	for (int i = 0; i < 5; i++) {
		cout << "Input array's element " << i + 1 << ": ";
		cin >> numbers[i];
	}
	int positive_numbers = 0;

	for (int i = 0; i < 5; i++) {
		if (numbers[i] >= 0) {
			positive_numbers ++;
		}
	}
	cout << "Positive numbers = " << positive_numbers << endl;
}

void task5() {
	displayTaskHeader(4);
	int numbers[5]{};
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		cout << "Input number " << i + 1 << ": ";
		cin >> numbers[i];
	}
	
	for (int i = 0; i < 5; i++) {
		cout << numbers[i];
		sum = sum + numbers[i];
		if (i < 4) {
			cout << " + ";
		}
	}

	cout << " = " << sum << endl;
	
}

void task6() {
	cout << "Enter two numbers and operation for calculation" << endl;
	
	int a;
	int b;
	
	cout << "Enter number 'a': " ;
	cin >> a;
	cout << endl;

	cout << "Enter number 'b': ";
	cin >> b;
	cout << endl;

	cout << "Choice operation (+, -, *, /) " << endl;
		cout << "1. '+' " << endl <<
				  "2. '-' " << endl <<
				  "3. '*' " << endl <<
				  "4. '/' " << endl;
		int choice;
		cin >> choice;

		switch (choice) {
		case 1:
			cout << a + b;
			break;
		case 2:
			cout << a - b;
			break;
		case 3:
			cout << a * b;
			break;
		case 4:
			cout << a / b;
			break;
		}
	
}

void task11() {
	displayTaskHeader(10);
	double centimeters;
	cout << "Enter the length in centimeters to find out the length in inches: ";
	cin >> centimeters;
	const double inches_per_centimeter = 2.54;
	cout << "Length in inches = " << centimeters / inches_per_centimeter;

}

int main() {
	int choice;

	displayAvailableTasks();

	cout << "Choice task: ";
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
		case 4:
			task4();
			break;
		case 5:
			task5();
			break;
		case 6:
			task6();
			break;
	}
}