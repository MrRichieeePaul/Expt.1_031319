#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>

using namespace std;

int main()
{ 
	double boxNumberOfTicketsSold; 
	double sidelineNumberOfTicketsSold;
	double premiumNumberOfTicketsSold;
	double genAdNumberOfTicketsSold;


	cout << "Enter ticket prices and number of tickets sold seperated by spaces to calculate ticket sales..." << endl;

	cin >> boxNumberOfTicketsSold;
	cout << "Box ($250) " << "	" << "Tickets Sold: " << boxNumberOfTicketsSold << endl;
	cout << "Total Sale: " << setprecision(2) << fixed << (250.00 * boxNumberOfTicketsSold) << endl;

	cin >> sidelineNumberOfTicketsSold;
	cout << "Sideline ($100) " << "	" << "Tickets Sold: " << sidelineNumberOfTicketsSold << endl;
	cout << "Total Sale: " << setprecision(2) << fixed << 100.00 * sidelineNumberOfTicketsSold << endl;

	cin >> premiumNumberOfTicketsSold;
	cout << "Premium ($50) " << " " << "Tickets Sold: " << premiumNumberOfTicketsSold << endl;
	cout << "Total Sale: " << setprecision(2) << fixed << 50.00 * premiumNumberOfTicketsSold << endl;

	cin >> genAdNumberOfTicketsSold;
	cout << "General Admission ($25) " << " " << "Tickets Sold: " << genAdNumberOfTicketsSold << endl;
	cout << "Total Sale: " << setprecision(2) << fixed << 25 * genAdNumberOfTicketsSold << endl;

	cout << "Total Sale of Tickets: " << setprecision(2) << fixed << (250 * boxNumberOfTicketsSold) + (100 * sidelineNumberOfTicketsSold) + (50 * premiumNumberOfTicketsSold) + (25 * genAdNumberOfTicketsSold) << endl;
	_getch(); 
	return 0;
}