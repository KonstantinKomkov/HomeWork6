#include <stdio.h>
#include <locale.h>

int is_happy_number (int n) // Ф-я для определения равенства суммы и произведения всех цифр
{
	printf("Данные на входе: %d\n", n);
	int sum = 0, value = 1, counter = 0;
	while (n>0)
	{
		int num = n%10; // Последнее число в последовательности
		sum += num;
		value *= num;
		counter ++;
		n /= 10;
	}
	if (sum == value && counter != 1) // Если сумма = произведению и введено не 1 цифра
	{
		printf("Данные на выходе: YES\nСумма = %d, Произведение = %d\n", sum, value);
	}
	else if (counter == 1) // Если введена 1 цифра
	{
		puts("Введите число из нескольких цифр");
	}
	else
	{
		printf("Данные на выходе: NO\nСумма = %d, Произведение = %d\n", sum, value);
	}
	return 0;
}

int main (void)
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	unsigned int a;
	puts("Введите одно целое неотрицательное число");
	scanf("%u", &a);
	is_happy_number(a);
	return 0;
}