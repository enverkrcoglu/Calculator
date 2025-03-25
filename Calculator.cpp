/*

	This calculator is able to perform 3 things. 
	First function operates simple mathematical solutions, 
	second function calculates factorial of the number which given by user and
	third one writes down all the prime numbers until what you enter.


	sincerely...

	                                                          Enver Karcıoğlu


*/


# include <iostream>
# include <cmath>

using namespace std;


// 1) Simple Calculator...

static float simple_calculator(float x, float y,int proc) {

	if (proc == 1) {
		
		float sum = x + y;
		cout << "  Summation is: " << sum << endl;

	}

	else if (proc == 2) {

		float sub = x - y;
		cout << "  Subtraction is: " << sub << endl;

	}

	else if (proc == 3) {

		float mul = x * y;
		cout << "  Multiplication is: " << mul << endl;

	}

	else if (proc == 4) {

		float div = x / y;
		cout << "  Multiplication is: " << div << endl;

	}

	else {

		cout << "  ERROR! Please, pick a number between 1-4 ! " << endl;

	}


	return 0;
}


// 2) Factorial calculator...

static int factorial(int x) {
	int fac = 1;

	if (x == 0) {
		cout << "  " << 1;
	}
	else if (x != 0) {

		for (int i = 1; i <= x; i++) {


			fac = fac * i;


		}

		cout << "  "<<x<<"! = " << fac;

	}
	
	return fac;
}

// 3) Prime number calculator...

static int prime_number(int number) {

	int control = 0;  // control 0 == prime number...

	cout << "  Prime numbers:  ";

	for (int i = 1; i <= number; i++) {

		for (int j = 2; j <= sqrt(i); j++) {

			if (i % j == 0) {

				control = 1;

				break;

			}

		}

		if (control == 0) {

			if (i == 1) {

				continue;

			}

			else {

				cout << " " << i;

			}

		}
		control = 0;
	}
	return 0;
}



// Main...

int main() {
	cout << endl;

	// Menu bar...

	cout << "                                               WELCOME TO CALCULATOR          " << endl << endl;;

	cout << " ********************************************************" << endl;
	cout << " **                                                    **" << endl;
	cout << " **              1) Simple Calculator.                 **" << endl;
	cout << " **              2) Factorial Calculator.              **" << endl;
	cout << " **              3) Prime number Calculator.           **" << endl;
	cout << " **                                                    **" << endl;
	cout << " ********************************************************" << endl << endl;

	// Take parameter...

	int process;

	cout << "  Please, enter the process you want to perform: ";
	cin >> process;
	cout << endl;


	// select a process...

	if (process == 1) {

		float x, y;
		int proc;


		cout << " ********************************************************" << endl;
		cout << " **                                                    **" << endl;
		cout << " **              1) Summation(+)                       **" << endl;
		cout << " **              2) Subtraction(-)                     **" << endl;
		cout << " **              3) Multiplication(*)                  **" << endl;
		cout << " **              4) Division(/)                        **" << endl;
		cout << " **                                                    **" << endl;
		cout << " ********************************************************" << endl << endl;


		cout << "  Please, enter the process you want to perform: ";
		cin >> proc;
		cout << endl;

		cout << "  Please, enter the 1st number: ";
		cin >> x;
		cout << endl;

		cout << "  Please, enter the 2nd number: ";
		cin >> y;
		cout << endl;

		simple_calculator(x, y,proc);

	}

	else if (process == 2) {

		int x;
		cout << "  Please, enter a number: ";
		cin >> x;
		cout << endl;

		factorial(x);

	}

	else if (process == 3) {

		int number;

		cout << "  Please, enter a number in order to determine if it is prime or not prime number: ";
		cin >> number;
		cout << endl;

		prime_number(number);

	}

	else {

		cout << "  ERROR! Please, pick a number between 1-3 ! " << endl;

	}

	cout << endl << endl;
	return 0;
}
