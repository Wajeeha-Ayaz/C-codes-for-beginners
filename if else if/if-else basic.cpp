#include<iostream>
using namespace std;
void main()
{
	char choice;
	cout << "Enter your program" << endl;
	cin >> choice;
	if (choice =='C')
	{
		cout << "computr science" << endl;

	}
	else if (choice == 'S')
	{
		cout << "software engineering" << endl;

	}
	else if (choice == 'I')
	{
		cout << "information technology" << endl;

	}
	else
	{
		cout << "invalid input" << endl;
	}

	system("pause");
}
