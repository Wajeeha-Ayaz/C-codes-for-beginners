#include<iostream>
using namespace std;
void main()
{
	float number_A;
	float number_B;
	char choice;
	float answer;
	cout << "enter a number A" << endl;
	cin >> number_A;
	cout << "enter number B" << endl;
	cin >> number_B;
	cout << "enter a choice" << endl;
	cin >> choice;

	if (choice == '+')
	{
		answer = number_A + number_B;
			cout << "answer=" << answer << endl;
	}

	else if (choice == '-')
	{
		answer = number_A - number_B;
		cout << "answer=" << answer << endl;
	}

	else if (choice == '*')
	{
		answer = number_A * number_B;
		cout << "answer=" << answer << endl;
	}

	else if (choice == '%')
	{
		answer = number_A / number_B;
		cout << "answer=" << answer << endl;
	}

	else
	{
		cout << "invalid input" << endl;
	}

	system("pause");
}


