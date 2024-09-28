#include <iostream>
#include <string>

int main() {
	char op;
	double num1, num2;
	std::string continueCalc;

	bool cont = true;

	while (cont) {
		std::cout << "Enter your first number: " << std::endl;
		std::cin >> num1;

		std::cout << "Enter the operator(+, -, *, /): " << std::endl;
		std::cin >> op;

		std::cout << "Enter your second number: " << std::endl;
		std::cin >> num2;

		switch (op) {
		case '+':
			std::cout << "Result: " << num1 + num2 << std::endl;
			break;
		case '-':
			std::cout << "Result: " << num1 - num2 << std::endl;
			break;
		case '*':
			std::cout << "Result: " << num1 * num2 << std::endl;
			break;
		case '/':
			if (num2 != 0)
				std::cout << "Result: " << num1 / num2 << std::endl;
			else
				std::cout << "Error! Dividing by zero!" << std::endl;
			break;
		default:
			std::cout << "Error! The operator is incorrect!" << std::endl;
		}

		do {
			std::cout << "Do you want to perform another calculation? (y/n): " << std::endl;
			std::cin >> continueCalc;

			if (continueCalc == "y")
				cont = true;
			else if (continueCalc == "n")
				cont = false;
			else
				std::cout << "Error! Thats not an option!" << std::endl;
		} while (continueCalc != "y" && continueCalc != "n");
	}

	system("cls");
	return 0;
}