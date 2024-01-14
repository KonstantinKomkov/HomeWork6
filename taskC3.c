#include <stdio.h>
#include <locale.h>

int middle (int a, int b) // Ф-я для определения среднего арифметического 2 аргументов
{
	int value = (a + b)/2;
	return value;
}

int main (void)
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	unsigned int a, b;
	puts("Введите два целых неотрицательных числа через пробел");
	scanf("%u %u", &a, &b);
	printf("Данные на входе: %u %u\n", a, b);
	printf("Данные на выходе: %d\n", middle(a,b));
	return 0;
}