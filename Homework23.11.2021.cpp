﻿/*
homework
created by Sinitsyn A.
23.11.2021
*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	cout << 35 % 2 << endl;
	/*
	1. Написать программу, проверяющую что сумма двух
	(введенных с клавиатуры) чисел лежит в пределах от 10 до 20
	(включительно), если да - вывести строку "true", в противном 
	случае - "false".
	*/
	cout << "\n\nЗадание 1\n" << endl;

	cout << "Введите первое число: " << endl;
	int firstNumber;
	cin >> firstNumber;
	cout << "Введите второе число: " << endl;
	int secondNumber;
	cin >> secondNumber;
	int sum;
	sum = firstNumber + secondNumber;

	if (sum >= 10 && sum <= 20)
	{
		cout << "true" << endl;
	}

	else
	{
		cout << "false" << endl;
	}

	/*
	2. Написать программу, выводящую на экран "true", если две 
	целочисленные константы, объявленные в ее начале либо обе равны 
	десяти сами по себе, либо их сумма равна десяти.
	Иначе "false".
	*/

	cout << "\n\nЗадание 2\n" << endl;

	cout << "Введите первое число: " << endl;
	int firstNumber_2;
	cin >> firstNumber_2;
	cout << "Введите второе число: " << endl;
	int secondNumber_2;
	cin >> secondNumber_2;

	int sum_2;
	

	if (firstNumber_2 == 10 && secondNumber_2 == 10)
	{
		cout << "true" << endl;
	}

	if ((firstNumber_2 + secondNumber_2) == 10)
	{
		cout << "true" << endl;
	}

	else
	{
		cout << "false" << endl;
	}

	/*
	3. Написать программу которая выводит на экран список всех 
	нечетных чисел от 1 до 50. Например: "Your numbers: 1 3 5 7 9
	11 13 ...". Для решений используйте любой С++ цикл.
	*/

	cout << "\n\nЗадание 3\n" << endl;

	for (size_t i = 0; i <= 50; ++i)
	{
		if (i % 2 != 0)
		{
			cout << i;
		}

		else
		{
			cout << "  ";
		}

	}

	/*
	4. Со звездочкой. Написать программу, проверяющую, является ли 
	некоторое число - простым. Простое число - это целое положительное 
	число, которое делится без остатка только на единицу и себя само.
	*/

	cout << "\n\nЗадание 4\n" << endl;

	int i;
	cin >> i;

	if (i == 1)
	{
		cout << "Именно чтобы обеспечить единственность в этой теореме, единица не считается простым числом!" << endl;
	}

	if (i % 2 == 0)
	{

		if (i == 2)
		{
			cout << "Простое число!" << endl;
		}
		else
		{
			cout << "Не простое!" << endl;
		}

	}


	else if (i == 3)
	{
		cout << "Простое число!" << endl;
	}


	else
	{

		if (i % 3 == 0)
		{
			cout << "Не простое число!" << endl;
		}

		else
		{
			cout << "Простое число!" << endl;
		}
	}

	/*
	5. Со звездочкой. Пользователь вводит с клавиатуры число (год):
	от 1 до 3000. Написать программу, которая определяет является ли 
	этот год високосным. Каждый 4-й год является високосным, кроме 
	каждого 100-го, при этом каждый 400-й - високосный. Вывести 
	результаты работы программы в консоль.
	*/


	cout << "\n\nЗадание 5\n" << endl;

	cout << "Введите год от 1 до 3000 лет?" << endl;
	int year;
	cin >> year;

	if (year >= 1 && year <= 3000)
	{
		if (year % 4 == 0)
		{

			if (year % 100 == 0)
			{
				if (year == 400 || year == 1400 || year == 2400)
				{
					cout << "Високосный год!" << endl;
				}
				else
				{
					cout << "Невисокосный год!" << endl;
				}
			}

			else
			{
				cout << "Високосный год!" << endl;
			}

		}
		else
		{
			cout << "Не високосный год!" << endl;
		}
	}

	else
	{
		cout << "Твое число выходит за рамки заданных параметров (от 1 до 3000 лет)!" << endl;
	}


}