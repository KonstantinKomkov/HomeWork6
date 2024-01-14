#include <stdio.h>
#include <locale.h>

int grow_up (int n) // Ф-я для определения ряда цифр по возрастанию
{
	printf("Данные на входе: %d\n", n);
	int flag = 0;
	while (n>0)
	{
		int num = n%10; // Последнее число в последовательности
		int same = (n/10)%10; // Предпоследнее число в последовательности
		if(num <= same)
		{
			puts("Данные на выходе: NO");
			flag = 1;
			break;
		}
		n /= 10;
	}
	if (flag == 0)
	{
		puts("Данные на выходе: YES");
	}
	return 0;
}

int main (void)
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	unsigned int a;
	puts("Введите одно целое неотрицательное число");
	scanf("%u", &a);
	grow_up(a);
	return 0;
}