#include<iostream>

using namespace std;
//#define CALCULATOR
//#define CALCULATOR_1

int main()
{
	setlocale(LC_ALL, "Russian");

#ifdef CALCULATOR
	char oper;
	double a, b;

	/*cout << "Введите любое действие '+', '-', '*', '/': " << endl;
	cin >> oper;
	cout << "Введите две цифры, либо числа: " << endl;
	cin >> a >> b;*/
	cout << "Введите выражение: "; cin >> a >> oper >> b;

	switch (oper)
	{
	case '+':cout << a + b;	break;
	case '-':cout << a - b;	break;
	case '*':cout << a * b;	break;
	case '/':cout << a / b; break;
		/*if (b != 0)
			cout << a / b;
		else
			cout << "На ноль делить нельзя!" << endl;*/
		break;

	}
	return 0;
#endif // CALCULATOR

#ifdef CALCULATOR_1
	double a, b, result;
	char oper;
	bool success = true;
	cout << "Введите выражение: "; cin >> a >> oper >> b;

	if (oper == '+')
		result = a + b;
	else if (oper == '-')
		result = a - b;
	else if (oper == '*')
		result = a * b;
	else if (oper == '/')
		result = a / b;
	else
	{
		cout << "Введите допустимую опрецию";
		success = false;
	}

	if (success) cout << a << oper << b << '=' << result << endl;

#endif // CALCULATOR_1

	
}

	