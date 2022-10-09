#include <iostream>
#include "calc.h"


using namespace std;


Calculator calc;


void menu()
{

	int x = 0;
	int y = 0;
	int total = 0;


	char user_input;

	cout << "Welcome to the simplest calculator ever. What would you like to calculate?" << "\n\n";
	cout << "z -> Exit" << "\n";
	cout << "1 -> Sum" << "\n";
	cout << "2 -> Subtraction" << "\n";
	cout << "3 -> Multiplication" << "\n";
	cout << "4 -> Division" << "\n";

	cout << "Please enter your selection: ";
	cin >> user_input;



	switch (user_input)
	{
	case 'z': cout << "missing feature"; break;
	case '1': cout << calc.sum(x, y, total) << endl; system("pause"); break;
	case '2': cout << calc.subtraction(x, y, total) << endl; system("pause"); break;
	case '3': cout << calc.multiplication(x, y, total) << endl; system("pause"); break;
	case '4': cout << calc.division(x, y, total) << endl; system("pause"); break;
	}

}

int main()
{


	menu();


	return 0;
}