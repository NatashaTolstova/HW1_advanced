/*
Задание 1. Сколько раз встречается максимум

На стандартном потоке ввода задается натуральное число N (N > 0), после
которого следует последовательность из N целых чисел.
На стандартный поток вывода напечатайте, сколько раз в этой
последовательности встречается максимум.
Указание: использовать массивы запрещается.

Данные на входе:
Натуральное число N (N > 0), после которого следует
последовательность из N целых чисел.
Данные на выходе:
Одно целое число.
*/

#include <stdio.h>

int main()
{

	int N, max = 0, count = 0;

	printf("Enter a natural number N (N > 0), followed by a sequence of N integers:\n");
	scanf("%d", &N);

	int num;

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num);

		if (num > max || i == 0)
		{
			max = num;
			count = 1;
		}
		else if (num == max)
		{
			count++;
		}
	}

	printf("Maximum occurs in the sequence: %d\n", count);

	return 0;
}