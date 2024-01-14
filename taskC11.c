#include <stdio.h>
#include <locale.h>

int nod (int a, int b) // Ф-я для определения наибольшего общего делителя двух натуральных чисел
{
	while (a && b)
	{
		if (a >= b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	return a | b;
}

int main (void)
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	unsigned int a, b;
	puts("Введите два целых положительных числа через пробел");
	scanf("%u %u", &a, &b);
	printf("Данные на входе: %u %u\n", a, b);
	printf("Данные на выходе: %d\n", nod(a,b));
	return 0;
}