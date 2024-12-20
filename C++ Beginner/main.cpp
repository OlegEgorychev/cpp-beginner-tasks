#include <iostream>;
#include <cmath>;
#include <climits>;
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
	"Task 12: Find the Sum of Odd Numbers from 1 to N",
	"Task 13: Find Prime Numbers between 1 and N",
	"Task 14: Factorial of a Number Using a While Loop",
	"Task 15: Count Digits of a Number",
	"Task 16: Find the Largest Even and Odd Numbers in an Array",
	"Task 17: Fibonacci Sequence",
	"Task 18: Multiplication Table for N Rows",
	"Task 19: Reverse Digits of a Number",
	"Task 20: Find the GCD of Two Numbers"

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
	/* Task 12 */"The user inputs a number N. Calculate the sum of all odd numbers from 1 to N inclusive."
	/* Task 13 */"The user inputs a number N. The program should find all prime numbers between 1 and N."
	/* Task 14 */"The user inputs a number. The program should calculate the factorial of the number using a while loop."
	/* Task 15 */"The user inputs a number. The program should count how many digits are in the number."
	/* Task 16 */"The user inputs N elements into an array. Find the largest even and the largest odd number."
	/* Task 17 */"The user inputs a number N. Print the first N numbers of the Fibonacci sequence."
	/* Task 18 */"The user inputs a number N. The program should print a multiplication table for N rows using a nested loop."
	/* Task 19 */"The user inputs a number. The program should reverse the digits of the number."
	/* Task 20 */"The user inputs two numbers. The program should find the greatest common divisor (GCD) using a loop."

};

void displayTaskHeader(int taskNumber) {
	cout << taskTitles[taskNumber] << endl;
	cout << "Description: " << taskDescription[taskNumber] << endl << endl;
}

void displayAvailableTasks() {
	cout << "Available tasks: " << endl;
	for (int i = 0; i <= 19; i++) {
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
			cout << "result: " << a + b;
			break;
		case 2:
			cout << "result: " << a - b;
			break;
		case 3:
			cout << "result: " << a * b;
			break;
		case 4:
			cout << "result: " << a / b;
			break;
		}
	
}

void task7() {
	cout << "Enter a number for multiple table: ";
	int a;
	cin >> a;
	for (int i = 1; i <= 10; i++) {
		cout << a << " * " << i << " = " << a * i << endl;
	}
}

void task8() {

	int numbers[5];

	for (int i = 0; i < 5; i++) {
		cout << "Enter number " << i+1 << ": " << endl;
		cin >> numbers[i];
	}

	cout << "Entered numbers in revert order: ";

	for (int i = 4; i >= 0; i--) {
		cout << numbers[i] << ", ";
	}
	

}

void task9() {

	int numbers[10];
	int even_count = 0;

	cout << "Please, enter the 10 numbers: " << endl;
	
	for (int i = 0; i < 10; i++) {
		cin >> numbers[i];
		if (numbers[i] % 2 == 0) {

			even_count ++;
		}
		
	}

	cout << "There are " << even_count << " even numbers in aray " << endl;

}

void task10() {

	int a;
	int b;

	cout << "Please, enter two different numbers: " << endl;

	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;

	if (b == a) {
		cout << "Numbers cannot be same, reenter number 'b' please " << endl;
		cin >> b;
	}

	if (a > b) {
		cout << "Minimum of two entered numbers is " << b;
	}
	else {
		cout << "Minimum of two entered numbers is " << a;
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

void task12() {

	int a;

	do {
		cout << "Enter number: ";
		cin >> a;
		if (a <= 0) {
			cout << "Please, enter a positive integer" << endl;
		}
	} while (a <= 0);
	

	int odd_sum = 0;

	for (int i = 1; i <= a; i++) {
		if (i % 2 != 0) {
			odd_sum = odd_sum + i;
		}
}
	cout << "The sum of all odd numbers from 1 to " << a << " is: " << odd_sum;

}

void task13() {
	int number;
	cout << "Please, enter a number to check if it is prime " << endl;
	cin >> number;
	bool isPrime = true;


	if (number < 2) {
		isPrime = false;
	} else {
		int limit = sqrt(number);
		for (int i = 2; i <= limit; i++) {
			if (number % i == 0) {
				isPrime = false;
				break;
			}
		}
	}

	cout << "Number " << number << (isPrime ? " is a Prime number" : " is not a Prime number");

}

void task14() {
	int number;
	int factorial = 1;
	int i = 1;

	cout << "Please, enter a number for calculate factorial ";
	cin >> number;
	
	while (i <= number) {
		factorial *= i;
		i++;
	}

	cout << "Factorial of " << number << " = " << factorial << endl;
}

void task15() {
	int number;
	int counter = 0;

	cout << "Please, enter a number: ";
	cin >> number;

	while (number > 0) {
		number = number / 10;
		counter++;
	}

	cout << "The number of digits is: " << counter << endl;

}

void task16() {

	int numbers[10];

	int max_even = INT_MIN;
	int max_odd = INT_MIN;

	cout << "Please, enter 10 numners: " << endl;



	for (int i = 0; i < 10; i++) {

		cout << i + 1 << ") ";
		cin >> numbers[i];

		if (numbers[i] % 2 == 0) {
			if (numbers[i] > max_even) {
				max_even = numbers[i];
			}
		}
		else {
			if (numbers[i] > max_odd) {
				max_odd = numbers[i];
			}
		}
	}

	if (max_even == INT_MIN) {
		cout << "No even numbers entered." << endl;
	}
	else {
		cout << "Max even number: " << max_even << endl;
	}

	if (max_odd == INT_MIN) {
		cout << "No odd numbers entered." << endl;
	}
	else {
		cout << "Max odd number: " << max_odd << endl;
	}
}

void task17() {

	int number;
	
	cout << "Please, enter the number of fibonacci numbers to display: ";
	cin >> number;
	
	int a = 0, b = 1;

	if (number >= 1) cout << a;
	if (number >= 2) cout << ", " << b;

	for (int i = 3; i <= number; i++) {
		int next = a + b;
		cout << ", " << next;

		a = b;
		b = next;
	
	}
}

void task18() {

	int a;
	cout << "Please, enter a count of rows for multiplication table: ";
	cin >> a;

	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= a; j++) {
			cout << i << " x " << j << " = " << i * j << "\t" << endl;
		}
		cout << endl;
	}
}

void task19() {

	int number;
	int reverse = 0;
	cout << "Please, enter the number to revers digits: ";
	cin >> number;

	while (number != 0) {
		int i = number % 10;
		reverse = reverse * 10 + i;
		number = number / 10;
	}

	cout << "Reversed number: " << reverse;

}

void task20() {

	int a, b;

	int gcd = 1;

	cout << "Please, enter two numbers to find their GCD: " << endl << "1. ";
	cin >> a;
	cout << "2. ";
	cin >> b;

	a = abs(a);
	b = abs(b);

	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}

	cout << "The GCD is: " << a << endl;

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
		case 7:
			task7();
			break;
		case 8:
			task8();
			break;
		case 9:
			task9();
			break;
		case 10:
			task10();
			break;
		case 11:
			task11();
			break;
		case 12:
			task12();
			break;
		case 13:
			task13();
			break;
		case 14:
			task14();
			break;
		case 15:
			task15();
			break;
		case 16:
			task16();
			break;
		case 17:
			task17();
			break;
		case 18:
			task18();
			break;
		case 19:
			task19();
			break;
		case 20:
			task20();
			break;
	}
}