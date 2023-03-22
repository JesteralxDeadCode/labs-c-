#include <iostream>

using namespace std;


int Num1()
{
	int a, b;

	cout << "введите число:";
	cin >> a;
	cout << "введите число:";
	cin >> b;


	return a + b;
}

int Num2()
{
	int result = 0;
	int x;

	for (int i = 0; i < 5; i++)
	{
		cout << "введите число:";
		cin >> x;

		result += x;
	}

	return result;
}

int Num3()
{
	int x;
	int result = 0;

	cout << "введите число:";
	cin >> x;

	if (x < 0)
	{
		result = x ^ 2;
	}
	else if(x > 0)
	{
		result = x * -1;
	}
	else
	{
		result = 7;
	}

	return result;
}

int Num4()
{
	int result = 0, x;

	for (int i = 0; i < 5; i++)
	{
		do
		{
			cout << "введите число (отрицательные не учитываються):";
			cin >> x;

		} while (x > 0);
		result += x;
	}

	return result;
}

int Num5()
{
	int result = 0, x;

	for (int i = 0; i < 5; i++)
	{
		cout << "введите число :";
		cin >> x;
		if (x > 0)
		{
			result += x;
		}
	}

	return result;
}

double Num6(double x, double a)
{
	double result;

	result = (x * x + a) / (x + a);

	return result;
}

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Обозреватель 1 лабы Ч.М" << endl;

	bool test = true;
	int x = 0, y = 0;

	do
	{
		cout << "введите номер задания :";
		cin >> x;

		switch (x)
		{
		case 1:
			cout << "ваш результат :" << Num1() << endl;
			break;
		case 2:
			cout << "ваш результат :" << Num2() << endl;
			break;
		case 3:
			cout << "ваш результат :" << Num3() << endl;
			break;
		case 4:
			cout << "ваш результат :" << Num4() << endl;
			break;
		case 5:
			cout << "ваш результат :" << Num5() << endl;
			break;
		case 6:
			cout << "ваш результат :" << endl;
			for (int i = 0; i < 3; i++)
			{
				double x, y;

				if (i == 0)
				{
					x = 1;
				}
				else if (i == 1)
				{
					x = 5;
				}
				else
				{
					x = 0.2;
				}

				for (int a = 0; a < 3; a++)
				{
					if (a == 0)
					{
						y = 1.5;
					}
					else if (a == 1)
					{
						y = 10;
					}
					else
					{
						y = 0.5;
					}

					cout << Num6(x, y) << endl;
				}
			}
			cout << endl;
			break;
		}
		
		cout << "повторить тест ?" << endl << "1 - да 2 - нет:";
		cin >> y;

		if (y == 1)
		{
			test = true;
		}
		else if (y == 2)
		{
			test = false;
		}
		else
		{
			cout << "неверное число, тест остановлен" << endl; 
			test = false;
		}


	} while (test == true);

	return 0;
}