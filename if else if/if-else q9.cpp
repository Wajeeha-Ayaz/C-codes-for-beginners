#include<iostream>
using namespace std;
void main()
{
	int choice;
	cout << "enter a choice" << endl;
	cin >> choice;

		if ((choice >= 80) && (choice <= 100))
		{
			cout << "Grade A" << endl;
		}

		else if ((choice >= 70) && (choice <= 79))
		{
			cout << "Grade B" << endl;
		}

		else if ((choice >= 60) && (choice <= 69))
		{
			cout << "Grade C" << endl;
		}

		else if ((choice >= 0) && (choice <= 59))
		{
			cout << "Grade F" << endl;
		}

		system("pause");
}
