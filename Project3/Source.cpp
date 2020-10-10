#include <iostream>



int main()
{
	// размер массива равен 20 (по заданию)
	const size_t N = 20;
	double a[N] = { 0.0 }; // создаем массив и инициализируем нулями
	bool b[N] = { false }; // булев массив - "false-ми"
	// инициализация генератора случайных чисел
	srand(0);
	// подсчет среднего значения в массиве а, изменение массива b
	double result = processArray(a, N, b);
	// вывод массивов на экран
	printArray(a, N);
	printBoolArray(b, N);
	// ...и среднего значения элементов массива а
	printf("Average: %g\n\n", result);
	return 0;
}