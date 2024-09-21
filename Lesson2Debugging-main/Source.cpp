#include <iostream>

int main()
{
	// Variables
	float firstNumber; // Changed  firstNumber, secondNumber and result to float for more accurate numbers
	float secondNumber;
	int operationChoice;
	float result = 0.0f;

	// Ask the user to enter two numbers
	std::cout << "Enter a first whole number (1-10): ";
	std::cin >> firstNumber;

	std::cout << "\nEnter a second whole number (1-10): ";
	std::cin >> secondNumber;

	if (firstNumber >= 1 && firstNumber <= 10
		&& secondNumber >= 1 && secondNumber <= 10)
	{
		// Ask the user which operation they would like to perform
		std::cout << "Select an operation to perform on the two numbers:\n";
		std::cout << "1. Addition\n";
		std::cout << "2. Subtraction\n";
		std::cout << "3. Multiplcation\n";
		std::cout << "4. Division\n";

		std::cout << "User entered: ";
		std::cin >> operationChoice;

		

		// Perform the selected operation
		switch (operationChoice)
		{
			case 1: // Addition
				result = firstNumber + secondNumber;
				break;
			case 2: // Subtraction
				result = firstNumber - secondNumber;
				break;
			case 3: // Multiplication
				result = firstNumber * secondNumber;
				break;
			case 4: // Division
				result = firstNumber / secondNumber;
				break;
			default: // Default case to catch any incorrect choices
				std::cout << "Invalid operation choice" << std::endl;
		}

		// Print out the result of the division
		std::cout << "\nThe result is: " << result << "\n";
	}
	else // Added else statement to catch any numbers in the incorrect range
	{
		std::cout << "Numbers aren't in correct range!" << std::endl;
	}

	return 0;
}