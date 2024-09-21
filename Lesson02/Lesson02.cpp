#include <iostream>
#include <cmath>
#include <cctype>
#include <list>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void MoreLessFive()
{
	int num;

	cout << "Enter a number between 1 and 10: " << endl;
	cin >> num;

	if (num < 1 || num > 10)
	{
		cout << "The number entered is invalid!!" << endl;
	}
	else
	{
		if (num == 5)
		{
			cout << "The number is equal to five." << endl;
		}
		else if (num < 5)
		{
			cout << "The number is less than five." << endl;
		}
		else if (num > 5)
		{
			cout << "The number is greater than five." << endl;
		}
	}
}

void ScoreToGrade()
{
	int number;

	cout << "Enter a number as the score: " << endl;
	cin >> number;

	if (number < 0 || number > 100)
	{
		cout << "Invalid score. Enter a score between 1-100.";
	}
	else
	{
		if (number >= 80)
		{
			cout << "A*";
		}
		else if (number >= 70 && number <= 79)
		{
			cout << "A";
		}
		else if (number >= 60 && number <= 69)
		{
			cout << "B";
		}
		else if (number >= 50 && number <= 59)
		{
			cout << "C";
		}
		else if (number >= 40 && number <= 49)
		{
			cout << "D";
		}
		else if (number >= 1 && number <= 39)
		{
			cout << "F";
		}
		else if (number < 1)
		{
			cout << "U";
		}
	}
}

void PrimeNumber()
{
	int num;

	cout << "Enter a number between 1 and 10: " << endl;
	cin >> num;

	if (num < 1 || num > 10)
	{
		cout << "Invalid number." << endl;
	}
	else
	{
		if (num == 1)
		{
			cout << "The number isn't prime." << endl;
		}
		else if (num == 2 || num == 3)
		{
			cout << "The number is prime." << endl;
		}
		else
		{
			bool isPrime = true;
			for (int i = 2; i <= sqrt(num); ++i)
			{
				if (num % i == 0)
				{
					isPrime = false;
					break;
				}
			}
			if (isPrime)
			{
				cout << "The number is prime." << endl;
			}
			else
			{
				cout << "The number isn't prime." << endl;
			}
		}
	}
}

void OddEven()
{
	int num;

	cout << "Enter a number: " << endl;
	cin >> num;

	if (num == 0)
	{
		cout << "Zero is considered even." << endl;
	}
	else if (num % 2 == 0 && num > 0)
	{
		cout << "The number is even and positive." << endl;
	}
	else if (num % 2 != 0 && num < 0)
	{
		cout << "The number is odd and negative." << endl;
	}
	else
	{
		cout << "No output." << endl;
	}
}

void PasswordChecker()
{
	string password;
	bool LowerCase = false;
	bool UpperCase = false;
	bool Length = false;
	bool Digit = false;

	cout << "Enter a password: " << endl;
	cin >> password;

	if (password.size() >= 8)
	{
		Length = true;
	}

	for (char c : password)
	{
		if (isupper(static_cast<unsigned char>(c)))
		{
			UpperCase = true;
		}
		if (islower(static_cast<unsigned char>(c)))
		{
			LowerCase = true;
		}
		if (isdigit(static_cast<unsigned char>(c)))
		{
			Digit = true;
		}
	}

	if (Length && UpperCase && LowerCase && Digit)
	{
		cout << "The password is strong" << endl;
	}
	else
	{
		cout << "The password is weak" << endl;
	}
}

void CaseConverter()
{
	char input;

	cout << "Enter a character: " << endl;
	cin >> input;

	if (islower(input))
	{
		cout << "Original: " << input << ". Converted character: " << static_cast<char>(toupper(input)) << "." << endl;
	}
	else if (isupper(input))
	{
		cout << "Original: " << input << ". Converted character: " << static_cast<char>(tolower(input)) << "." << endl;
	}
}

void IntAnalysis()
{
	int int1;
	int int2;
	int int3;
	int int4;
	int int5;
	bool duplicate = false;

	vector<int> numbers;

	cout << "Enter the first integers: " << endl;
	cin >> int1;
	cin >> int2;
	cin >> int3;
	cin >> int4;
	cin >> int5;

	numbers.push_back(int1);
	numbers.push_back(int2);
	numbers.push_back(int3);
	numbers.push_back(int4);
	numbers.push_back(int5);

	int min = numbers.front();
	for (int i = 0; i < numbers.size(); i++)
	{
		if (numbers[i] < min)
		{
			min = numbers[i];
		}
	}

	int max = 0;
	for (int i = 0; i < numbers.size(); i++)
	{
		if (numbers[i] > max)
		{
			max = numbers[i];
		}
	}

	sort(numbers.begin(), numbers.end());
	for (int i = 1; i < numbers.size(); i++)
	{
		if (numbers[i] == numbers[i - 1])
		{
			duplicate = true;
		}
	}

	if (duplicate)
	{
		cout << "The smallest number is: " << min << endl << "The largest number is: " << max << endl << "There are duplicates." << endl;
	}
	else
	{
		cout << "The smallest number is: " << min << endl << "The largest number is: " << max << endl << "There aren't duplicates." << endl;
	}
}

void VendingMachine()
{
	int input;

	cout << "Enter a number between 1 and 5: " << endl;
	cin >> input;

	switch (input)
	{
	case 1:
		cout << "You chose: Water" << endl;
		break;
	case 2:
		cout << "You chose: Pepsi" << endl;
		break;
	case 3:
		cout << "You chose: Coke" << endl;
		break;
	case 4:
		cout << "You chose: Vodka" << endl;
		break;
	case 5:
		cout << "You chose: Sprite" << endl;
		break;
	default:
		cout << "Invalid input." << endl;
			break;
	}
}

void Calculate()
{
	double num1;
	double num2;

	int input;

	enum OPERATION {NOTHING, ADDITION, SUBTRACTION, MULTIPLICATION, DIVISION};
	OPERATION operation = NOTHING;

	cout << "Enter two numbers: " << endl;
	cin >> num1;
	cin >> num2;

	cout << "Enter a number: " << endl;
	cin >> input;

	switch (input)
	{
	case 1:
		operation = ADDITION;
		break;
	case 2:
		operation = SUBTRACTION;
		break;
	case 3:
		operation = MULTIPLICATION;
		break;
	case 4:
		operation = DIVISION;
		break;
	default:
		cout << "Invalid input!!" << endl;
		break;
	}

	switch (operation)
	{
	case ADDITION:
		cout << "Addition: " << num1 + num2;
		break;
	case SUBTRACTION:
		cout << "Subtraction: " << num1 - num2;
		break;
	case MULTIPLICATION:
		cout << "Multiplication: " << num1 * num2;
		break;
	case DIVISION:
		cout << "Division: " << num1 / num2;
		break;
	default:
		break;
	}
}

int main()
{
	// MoreLessFive();

	// ScoreToGrade();

	// PrimeNumber();

	// OddEven();

	// PasswordChecker();

	// CaseConverter();

	// IntAnalysis();

	// VendingMachine();

	// Calculate();
	
	return 0;
}