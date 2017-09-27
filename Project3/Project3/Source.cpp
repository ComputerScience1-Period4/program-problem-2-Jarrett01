/*Jarrett Reed 9/25/17 4th 
assignment: take in data */


#include <iostream> /
#include <conio.h> 

using namespace std;


void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// MAIN
void main() {
	// Variables
	int whole_number; // What is your age?
			 // void doesn't store value
	char last_intial; // First letter of your first name
	double $; // How much money do you have in your bank account?
	double myBankAccount = 0.1; // 10 cents 
	bool you_gots_mo_money;

	// User Queries 
	cout <<   "What is your favorite whole number : ";
	cin >> whole_number;
	cout << "What is your last intial : ";
	cin >> last_intial;
	cout << "How many 20 dollar bills do you have:";
	cin >> $;
	you_gots_mo_money = $ > myBankAccount; // checks to see if you got more money

											   // After questions print out stored data 
	cout << "Wow your favorite whole nu,ber is " << whole_number << " Thats interesting." << endl; // ENDL
	cout << "Your last letter was " << last_intial << " mine is R. \n"; // \n creates new line
	cout << "Wow you have $" << $ << ", 20 dollar bill in your wallet " << '\n'; // \n creates a new line
	if (you_gots_mo_money) {
		cout << "How many 20 dollar bills do you have: ";
	}



	// Pause
	pause();
}