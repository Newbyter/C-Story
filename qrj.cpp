#include <stdio.h>
#include <iostream>
using namespace std;

void QRJ()
{
	// write your code here
	// any code ...
	int a, b, c;
	cout << "input a: ";
	cin >> a;
	cout << "input b: ";
	cin >> b;
	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	if (b != 0)
	{
		cout << "a / b = " << a / b << endl;
	}
	else
	{
		cout << "a / b = Inf" << endl;
	}
	printf("QRJ\n");
}