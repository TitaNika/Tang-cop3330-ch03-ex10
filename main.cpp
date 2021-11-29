/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tony Tang
 */

#include "std_lib_facilities.h"

int main()

{
	string input; //(+,-,*,/, and etc.)

	double num1 = 0;

	double num2 = 0;

	double result = 0;

	cout << "Enter an operation;\n" << "Followed by two operands\n";

	while (cin >> input >> num1 >> num2) {

		if (input == "+" || input == "add") result = num1 + num2;

		else if (input == "-" || input == "minus") result = num1 - num2;

		else if (input == "*" || input == "multiply") result = num1 * num2;

		else if (input == "/" || input == "divide") {

			if (num2 == 0)

				input = "divide by zero";
        
			else

				result = num1 / num2;

		}

		else input = "invalid";

		if (input == "invalid")

			cout << "I don't know this operator!\n";

		else if (input == "divide by zero")

			cout << "No division by zero!\n";

		else

			cout << num1 << ' ' << input << ' ' << num2 << " = " << 
      result << '\n';

		cout << "\nAgain.\n";
	}
  
	return 0;
}
