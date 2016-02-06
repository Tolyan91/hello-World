#include <iostream>
using namespace std; 

void calc()
{
	double a;
	double b;
	double r;
	char s;
	cout << "Vvesti pervoe chislo: ";
	cin >> a;
	cout << "vvesti vtoroe chislo: ";
	cin >> b;
	cout << "Vvedite operaciy kotoruy nado proizvesti:\n";
	cout << "+, -, /, *\n";
	cin >> s;
	switch (s)
	{
		case '+':	r = a + b;	break;
		case '-':	r = a - b;	break;
		case '/':	r = a / b;	break;
		case '*':	r = a * b;	break;

		default: cout << "neverniy simvol\n";
			break;
	}
	cout << "a " << s << " b = r" << endl;
	cout << a <<" "<< s <<" "<< b << " = " << r << endl;
}

int main()
{
	calc();


	system("pause");
	return 0;
}