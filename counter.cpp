#include <iostream>
using namespace std;

int main(){

	// TASK 1

	int dollars;
	int cents;
	int quarters;
	int dimes;
	int nickels;
	int pennies;
	double money;
	double remainder;

	cout<<"Please enter the amount of money to convert:"<<endl;
	cout<<"# of dollars: ";
	cin>>dollars;
	cout<<"# of cents: ";
	cin>>cents;

	money = (dollars + (cents * 0.010)) * 100;

	quarters = (int)money / 25;
	remainder = (int)money % 25;
	dimes = (int)remainder / 10;
	remainder = (int)remainder % 10;
	nickels = (int)remainder / 5;
	remainder = (int)remainder % 5;
	pennies = (int)remainder;

	cout<<"The coins are "<<quarters<<" quarters, "<<dimes<<" dimes, "<<nickels <<" nickels and "<<pennies<<" pennies."<<endl;

	// TASK 2

	cout<<"Please enter the number of coins:"<<endl;
	cout<<"# of quarters: ";
	cin>>quarters;
	cout<<"# of dimes: ";
	cin>>dimes;
	cout<<"# of nickels: ";
	cin>>nickels;
	cout<<"# of pennies: ";
	cin>>pennies;

	cents = quarters * 25 + dimes * 10 + nickels * 5 + pennies;
	dollars = cents / 100;
	remainder = cents % 100;
	cents = (int)remainder;

	cout<<"The total is "<<dollars<<" and "<<cents<<" cents."<<endl;

	return 0;
}
