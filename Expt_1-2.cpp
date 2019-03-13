#include<iostream>
#include<conio.h>
#include<string>
#include<iomanip>
using namespace std; 

int main ()
{
	float mass;
	float density;

	cout << "Enter mass in grams and density in grams per cubic centimeters... " << endl;
	cin >> mass >> density;
	cout << "Volume: " << setprecision(2) << fixed << mass / density << endl;
	_getch();
	return 0;
}
