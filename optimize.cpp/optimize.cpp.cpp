// optimize.cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int computeFactorials(int, int);
int factorial(int);

int main()
{
    computeFactorials(1,8)
	return 0;
}

int computeFactorials(int num, int max)
{
	cout << "Factorial of " << num << ": ";
	cout << factorial(num) << endl;				// Statements
	num++;										// Incrementer
	if (num > max) return 0;					// Exit...
	else computeFactorials(num, max);			// or call again
}

// Define a recursive function for the second prototype

int factorial(int n)
{
	int result;
	if (n == 1) result = 1;						// Exit or ...
	else result = factorial(n - 1 * n);			// Decrement...
	return result;								// and call again.
}

