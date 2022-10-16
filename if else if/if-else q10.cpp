#include<iostream>
using namespace std;
void main()
{
	int choice;
	cout << "enter input" << endl;
	cin >> choice;

	if (choice <= 50)
	{
		cout << "quite" << endl;
	}

	else if ((choice >= 51) && (choice <= 70))
	{
		cout << "intesne" << endl;
	}

	else if ((choice >= 71) && (choice <=90))
	{
		cout<<"annoying"<<endl;
	}

	else if ((choice >= 91) && (choice <= 110))
	{
		cout<<"very annoying"<<endl;
	}

	else if (choice >= 110)
	{
		cout << "uncomfortable" << endl;
	}

	system("pause");

}
