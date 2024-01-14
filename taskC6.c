#include <stdio.h>
#include <locale.h>
#include <math.h>

unsigned long long sum (unsigned short n) // Ф-я для определения количество зерен на доске
{
	unsigned long long value = 0;
	value = pow(2,n-1);
	return value;
}

int main (void)
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	unsigned short a;
	puts("Введите одно целое неотрицательное число от 1 до 64");
	scanf("%hu", &a);
	printf("Данные на входе: %hu\n", a);
	printf("Данные на выходе: %llu\n", sum(a));
	return 0;
}