#include<iostream>
using namespace std;
void main()
{
	char choice;
	cout << "enter a choice" << endl;
	cin >> choice;

	if ((choice == 'c') || (choice == 'C'))
	{
		cout << "computer sciences" << endl;
	}

	else if ((choice == 's') || (choice == 'S'))
	{
		cout << "software engineering" << endl;
	}

	else if ((choice == 'i') || (choice == 'I'))
	{
		cout << "information technology" << endl;
	}

	else
	{
		cout << "invalid input" << endl;
	}

	system("pause");

}
