#include <iostream>
using namespace std;

int n, x, y;

void pluss()
{
	::n = ::x + ::y;
	cout << "Рузультат:" << ::n<< endl;
}
void minuss()
{
	::n = ::x - ::y;
	cout << "Рузультат:" << ::n << endl;
}
void umn()
{
	::n = ::x * ::y;
	cout << "Рузультат:" << ::n << endl;
}
void deli()
{
	if (::y != 0)
	{
		::n = ::x / ::y;
		cout << "Рузультат:" << ::n << endl;
	}
	else
		cout << "На 0 делить нельзя!";
}
void fun1()
{
	::n = ::x % ::y;
	cout << "Рузультат:" << ::n << endl;
}
void fun2()
{
	::n = pow(::x, ::y);
	cout << "Рузультат:" << ::n << endl;
}
void fun3()
{
	::n = !::x;
	cout << "Рузультат:" << ::n << endl;
}
void fun4()
{
	::n = ::x & ::y;
	cout << "Рузультат:" << ::n << endl;
}
void fun5()
{
	::n = ::x | ::y;
	cout << "Рузультат:" << ::n << endl;
}
void fun6()
{
	::y = 1;
	::n = ::x < ::y;
	cout << "Рузультат:" << ::n << endl;
}
void fun7()
{
	::y = 1;
	::n = ::x > ::y;
	cout << "Рузультат:" << ::n << endl;
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
