#include<iostream>
using namespace std;
void main()
{
	char choice;
	cout << "enter your choice" << endl;
	cin >> choice;

	if (choice == 'm')
	{
		cout << "morning" << endl;
	}

	else if (choice == 'a')
	{
		cout << "afternoon" << endl;

	}

	else if (choice == 'e')
	{
		cout << "evening" << endl;
	}

	else if (choice == 'n')
	{
		cout << "night" << endl;
	}

	else

	{
		cout << "invalid input" << endl;
	}

	system("pause");

		

}
