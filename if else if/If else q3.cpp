#include<iostream>
using namespace std;
void main()
{
	char choice;
	cout << "enter a choice" << endl;
	cin >> choice;

	if (choice == 'n')
	{
		cout << "north" << endl;

	}
	else if (choice == 's')
	{
		cout << "south" << endl;
	}
	else if (choice == 'e')
	{
		cout << "east" << endl;
	}
	else if (choice == 'w')
	{
		cout << "west" << endl;
	}

	else
	{
		cout << "invalid input" << endl;
	}
	system("pause");

}
