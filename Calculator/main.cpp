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

	/*cout << "������� ����� �������� '+', '-', '*', '/': " << endl;
	cin >> oper;
	cout << "������� ��� �����, ���� �����: " << endl;
	cin >> a >> b;*/
	cout << "������� ���������: "; cin >> a >> oper >> b;

	switch (oper)
	{
	case '+':cout << a + b;	break;
	case '-':cout << a - b;	break;
	case '*':cout << a * b;	break;
	case '/':cout << a / b; break;
		/*if (b != 0)
			cout << a / b;
		else
			cout << "�� ���� ������ ������!" << endl;*/
		break;

	}
	return 0;
#endif // CALCULATOR

#ifdef CALCULATOR_1
	double a, b, result;
	char oper;
	bool success = true;
	cout << "������� ���������: "; cin >> a >> oper >> b;

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
		cout << "������� ���������� �������";
		success = false;
	}

	if (success) cout << a << oper << b << '=' << result << endl;

#endif // CALCULATOR_1

	
}

	