#include <stdio.h>
#include <locale.h>

unsigned long long factorial (int n) // Ф-я для определения факториала
{
	unsigned long long value = 1;
	for(int i=1; i<=n; i++)
	{
		value *= i;
	}
	return value;
}

int main (void)
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	unsigned short a;
	puts("Введите одно целое положительное число не больше 20");
	scanf("%hu", &a);
	printf("Данные на входе: %hu\n", a);
	printf("Данные на выходе: %llu\n", factorial(a));
	return 0;
}