#include<iostream>
using namespace std;
void main()
{
	char choice;
	float area_of_rectangle;
	float length_of_rectangle;
	float width_of_rectangle;
	float area_of_square;
	float length_of_square;
	float area_of_cirlce;
	float radius;
	
	cout << "Enter your choice "<<endl;
	cin >> choice;
	
	if (choice == 'r')
	{
		cout << "enter length of rectangle" << endl;
		cin >> length_of_rectangle;
		cout << "enter width of rectangle" << endl;
		cin >> width_of_rectangle;
		area_of_rectangle = (length_of_rectangle * width_of_rectangle);
		cout << "area of rectangle = " << area_of_rectangle << endl;
}
	else if (choice == 's')
	{
		cout << "enter the lenght of square" << endl;
		cin >> length_of_square;
		area_of_square = 2 * length_of_square;
		cout << "area of square=" << area_of_square << endl;
	}

	else if (choice == 'c')
	{
		cout << "enter radius of circle" << endl;
		cin >> radius;
		area_of_cirlce = 3.14 * (radius * radius);
		cout << "area of circle=" << area_of_cirlce << endl;
	}
	else
		cout<<"invalid input"<<endl;
	system("pause");
}
