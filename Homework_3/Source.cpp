#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>
#include <iostream>

using namespace std;

void main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

	int tn = 0;

start:

	printf("task number:\t");
	scanf("%d", &tn);

	switch (tn)
	{
	case 1:
	{
		int quant=0;
		for (int i = 100; i < 1000; i++)
		{
			int a = 0, b = 0, c = 0;
			a = i % 10;
			b = i / 10;
			c = b % 10;
			b = b / 10;
			if (a == b || b == c || a == c) quant = quant++;
		}
		cout << quant << endl;
	}
	break;
	case 2:
	{
		int quant = 0;
		for (int i = 100; i < 1000; i++)
		{
			int a = 0, b = 0, c = 0;
			a = i % 10;
			b = i / 10;
			c = b % 10;
			b = b / 10;
			if (a != b && b != c && a != c) quant = quant++;
		}
		cout << quant << endl;
	}
	break;
	case 3:
	{
		int n, a=0;
		cout << "enter a number" << endl;
		cin >> n;
		while (n > 0)
		{
			if (n % 10 == 3 || n % 10 == 6)
			{
				n = n / 10;
				continue;
			}
			else a = a*10 + n % 10;
			n = n / 10;
		}
			while (a > 0)
			{
				cout << a % 10;
				a = a / 10;
			}
			cout << endl;
	}
	break;
	case 4:
	{
		int a, b;
		cout << "enter a number" << endl;
		cin >> a;
		for (b = 1; b <= a; b++)
		{
			if (a % (b*b) == 0 && a % (b*b*b) != 0)
				cout << b << " ";
		}
		cout << endl << endl;
	}
	break;
	case 5:
	{
		int a, b, c=0;
		cout << "enter a number" << endl;
		cin >> a;
		b = a;
		while (b > 0)
		{
			b = b % 10;
			c = c + b;
			b = b / 10;
		}
		if (pow(c, 3) == a*a) cout << "куб суммы цифр этого числа равен квадрату самого числа" << endl;

		else cout << "куб суммы цифр этого числа НЕ равен квадрату самого числа" << endl;
	}
	break;
	case 6:
	{
		int a, b;
		cout << "enter a number" << endl;
		cin >> a;
		for (b = 1; b <= a; b++)
		{
			if (a % b == 0)
				cout << b << " ";
		}
		cout << endl << endl;
	}
	break;
	case 7:
	{
		int a, b, c=0;
		cout << "enter two numbers" << endl;
		cin >> a >> b;
		if (a > b) c = b;
		else c = a;
		for (int i = 1; i <= c; i++)
		{
			if (a % i == 0 && b % i == 0)
				cout << i << " ";
		}
		cout << endl << endl;
	}
	break;
	default:
		printf("\nerror: no tasks\n\n");
	}
	goto start;
}