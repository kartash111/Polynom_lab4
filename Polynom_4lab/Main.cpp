#include <iostream>
#include "Polynomial.h"

using namespace std;

int main()
{
	try
	{
		cout << "Format: 1*x^2+1.5*x^0\n";
		Polynomial pol1;
		cout << "Enter first polynomial:\n";
		cin >> pol1;
		Polynomial pol2;
		cout << "Enter second polynomial:\n";
		cin >> pol2;
		cout << "Enter x:\n";
		double x;
		cin >> x;
		cout << "Sum: " << pol1 + pol2;
		cout << "\nDifference: " << pol1 - pol2;
		cout << "\nMultiply: " << pol1 * pol2;
		cout << "\nPolynom1(x) = " << pol1.calculate(x);
		cout << "\nPolynom2(x) = " << pol2.calculate(x);
	}
	catch (...)
	{
		cout << "Error...";
	}
}