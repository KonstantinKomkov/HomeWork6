#include <stdio.h>
#include <locale.h>

int sum (int n) // Ф-я для определения суммы чисел от 1 до N
{
	int value = 0;
	for(int i=1; i<=n; i++)
	{
		value += i;
	}
	return value;
}

int main (void)
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	unsigned int a;
	puts("Введите одно целое неотрицательное число");
	scanf("%u", &a);
	printf("Данные на входе: %u\n", a);
	printf("Данные на выходе: %d\n", sum(a));
	return 0;
}