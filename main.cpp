#include <iostream>
using namespace std;

int n, x, y;

void pluss(int x, int y, int n)
{
	n = x + y;
	cout << "Рузультат:" << n<< endl;
}
void minuss(int x, int y, int n)
{
	n = x - y;
	cout << "Рузультат:" << n << endl;
}
void umn(int x, int y, int n)
{
	n = x * y;
	cout << "Рузультат:" << n << endl;
}
void deli(int x, int y, int n)
{
	if (y != 0)
	{
		n = x / y;
		cout << "Рузультат:" << n << endl;
	}
	else
		cout << "На 0 делить нельзя!";
}
void fun1(int x, int y, int n)
{
	n = x % y;
	cout << "Рузультат:" << n << endl;
}
void fun2(int x, int y, int n)
{
	n = pow(x, y);
	cout << "Рузультат:" << n << endl;
}
void fun3(int x, int n)
{
	n = !x;
	cout << "Рузультат:" << n << endl;
}
void fun4(int x, int y, int n)
{
	n = x & y;
	cout << "Рузультат:" << n << endl;
}
void fun5(int x, int y, int n)
{
	n = x | y;
	cout << "Рузультат:" << n << endl;
}
void fun6(int x, int n)
{
	n = x < 1;
	cout << "Рузультат:" << n << endl;
}
void fun7(int x, int n)
{
	n = x > 1;
	cout << "Рузультат:" << n << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	char a, soglas;
	soglas = 'y';
	while (soglas == 'y')
	{		
		cout << "Выберите операцию [+, -, *, /, %, ^, !, &, |, <, >]:";
		cin >> a;
		if (a != '<' || a != '>' || a != '!')
		{
			cout << "Введите 1 число";
			cin >> ::x;
			cout << "Введите 2 число";
			cin >> ::y;
		}
		else
		{
			cout << "Введите число";
			cin >> ::x;
		}
		switch (a)
		{
		case'+':
			pluss();
			break;

		case'-':
			minuss();
			break;

		case'*':
			umn();
			break;

		case'/':
			deli();
			break;

		case'%':
			fun1();
			break;

		case'^':
			fun2();
			break;

		case'!':
			fun3();
			break;

		case'&':
			fun4();
			break;

		case'|':
			fun5();
			break;

		case'<':
			fun6();
			break;

		case'>':
			fun7();
			break;
		default:
			cout << "Ошибка"<< endl;

		}
		cout << "Продолжить работу? y/n \n";
		cin >> soglas;
	}
		return 0;
}
