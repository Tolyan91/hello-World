#include <iostream>
using namespace std; 

void calc()
{
	double a, b, r;	//Переменные a и b являются произвольными числами, а r является производной
	char s; //символьная переменная в которую записывается оператор (сложение, умножение, деление, вычитание)

	//ввод/вывод всякой пояснительной фигни
	cout << "Vvesti pervoe chislo: ";
	cin >> a;
	cout << "vvesti vtoroe chislo: ";
	cin >> b;
	cout << "Vvedite operaciy kotoruy nado proizvesti:\n";
	cout << "+, -, /, *\n";
	cin >> s;
	
	//оператор switch в котором происходит выбор операции
	switch (s)
	{
		case '+':	r = a + b;	break;
		case '-':	r = a - b;	break;
		case '/':	r = a / b;	break;
		case '*':	r = a * b;	break;

		default: cout << "neverniy simvol\n";
			break;
	}
	
	//вывод результата
	cout << "a " << s << " b = r" << endl;
	cout << a <<" "<< s <<" "<< b << " = " << r << endl;
}

int main()
{
	calc();


	system("pause");
	return 0;
}