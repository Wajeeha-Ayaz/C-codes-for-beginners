#include <iostream>
using namespace std;

void main()
{
	float quiz_1;
	float quiz_2;
	float quiz_3;
	float average;
	cout << "quiz_1" << endl;
	cin >> quiz_1;
	cout << "quiz_2" << endl;
	cin >> quiz_2;
	cout << "quiz_3" << endl;
	cin >> quiz_3;
	average = (quiz_1+quiz_2+quiz_3)/3;
	cout << average << endl;
	system("pause");


}