#include "calc.h"
#include <iostream>

using namespace std;


// Functions to perform different calculations; +, - , *, /


int Calculator::sum(int x, int y, int total)
{
	cout << "x: ";
	cin >> x;

	cout << "\ny: ";
	cin >> y;

	total = x + y;

	return total;
}

int Calculator::subtraction(int x, int y, int total)
{
	cout << "x: ";
	cin >> x;

	cout << "\ny: ";
	cin >> y;

	total = x - y;

	return total;
}

int Calculator::multiplication(int x, int y, int total)
{
	cout << "x: ";
	cin >> x;

	cout << "\ny: ";
	cin >> y;

	total = x * y;

	return total;
}

int Calculator::division(int x, int y, int total)
{
	cout << "x: ";
	cin >> x;

	cout << "\ny: ";
	cin >> y;

	total = x / y;

	return total;
}

