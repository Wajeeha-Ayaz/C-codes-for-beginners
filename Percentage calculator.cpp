
#include <iostream>
using namespace std;

void main()
{
	float obtained_marks;
	float total_marks;
	float percentage;
	cout << "obtainedmarks" << endl;
	cin >> obtained_marks;
	cout << "toalmarks" << endl;
	cin >> total_marks;
	percentage = (obtained_marks/total_marks)*100;
	cout << percentage << endl;
	system("pause");
}
