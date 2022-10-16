#include<iostream>
using namespace std;
void main()
{
	char choice;
	cout << "enter a choice" << endl;
	cin >> choice;

	if (choice == '1')
	{
		cout << "monday" << endl;
	}

	else if (choice == '2')
	{
		cout << "tuesday" << endl;
	}

	else if (choice == '3')
	{
		cout << "wednesday" << endl;
	}
	else if (choice == '4')
	{
		cout << "thursday" << endl;
	}
	else if (choice == '5')
	{
		cout << "friday" << endl;
	}

	else
	{
		cout << "invalid input" << endl;
	}

	system("pause");
}