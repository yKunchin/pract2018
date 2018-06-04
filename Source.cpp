/*@file Lab6.1.с
@author Кунчин Я. С. , гр. 515В
@date 14. 04. 2018
@brief Лабораторная работа № 6

Строки. Параметры командной строки
Задание 1*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include<conio.h>

void Fibonacci_number(long double a)
{
	long double answer;
	long double s5 = sqrt(5);
	long double b = (1 + s5) / 2;
	long double c = (1 - s5) / 2;
	answer = (pow(b, a) - pow(c, a)) / s5;
	printf("The %.0Lf Fibonacci number: %.0Lf", a, answer);
}
int main(void)
{
	long double a;
	printf("Enter the number (0-71) : ");
	scanf("%Lf", &a);
	Fibonacci_number(a);
	_getch();
	return 0;
}