#include<iostream>
using namespace std;
void main()
{
	int choice;
	cout << "enter a choice" << endl;
	cin >> choice;
	
	if ((choice >= 1) && (choice <= 10))
	{
		cout << "red" << endl;
	}

	else if ((choice >= 11) && (choice <= 20))
	{
		cout<<"blue"<<endl;
	}

	else if ((choice >= 21) && (choice <= 30))
	{
		cout<<"green"<<endl;
	}

	else
	{
		cout<<"invalid input"<<endl;
	}

	system("pause");
 }
