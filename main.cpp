#include <iostream>
#include <math.h>
using namespace std;

void pluss(int x, int y)
{
	cout << "Рузультат:" << x + y << endl;
}
void minuss(int x, int y)
{
	cout << "Рузультат:" << x - y << endl;
}
void umn(int x, int y)
{
	cout << "Рузультат:" << x * y << endl;
}
void deli(int x, int y)
{
	if (y != 0)
		cout << "Рузультат:" << x / y << endl;
	else
		cout << "На 0 делить нельзя!";
}
void fun1(int x, int y)
{
	cout << "Рузультат:" << x % y << endl;
}
void fun2(int x, int y)
{
	cout << "Рузультат:" << pow(x , y) << endl;
}
void fun3(int x)
{
	cout << "Рузультат:" << !x << endl;
}
void fun4(int x, int y)
{
	cout << "Рузультат:" << (x & y) << endl;
}
void fun5(int x, int y)
{
	cout << "Рузультат:" << (x | y) << endl;
}
void fun6(int x)
{ 
	cout << "Рузультат:" << (x << 1) << endl;
}
void fun7(int x)
{
	cout << "Рузультат:" << (x >> 1) << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int x,y;
	char a, soglas;
	soglas = 'y';
	while (soglas == 'y')
	{		
		cout << "Выберите операцию [+, -, *, /, %, ^, !, &, |, <<, >>]:";
		cin >> a;
		if ((a != '<') && (a != '>') && (a != '!'))
		{
			cout << "Введите 1 число";
			cin >> x;
			cout << "Введите 2 число";
			cin >> y;
		}
		else
		{
			cout << "Введите число";
			cin >> x;
		}
		switch (a)
		{
		case'+':
			pluss(x,y);
			break;

		case'-':
			minuss(x,y);
			break;

		case'*':
			umn(x,y);
			break;

		case'/':
			deli(x,y);
			break;

		case'%':
			fun1(x,y);
			break;

		case'^':
			fun2(x,y);
			break;

		case'!':
			fun3(x);
			break;

		case'&':
			fun4(x,y);
			break;

		case'|':
			fun5(x,y);
			break;

		case'<<':
			fun6(x);
			break;

		case'>>':
			fun7(x);
			break;
		default:
			cout << "Ошибка"<< endl;

		}
		cout << "Продолжить работу? y/n \n";
		cin >> soglas;
	}
		return 0;
}
