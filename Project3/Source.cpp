#include <iostream>



int main()
{
	// ������ ������� ����� 20 (�� �������)
	const size_t N = 20;
	double a[N] = { 0.0 }; // ������� ������ � �������������� ������
	bool b[N] = { false }; // ����� ������ - "false-��"
	// ������������� ���������� ��������� �����
	srand(0);
	// ������� �������� �������� � ������� �, ��������� ������� b
	double result = processArray(a, N, b);
	// ����� �������� �� �����
	printArray(a, N);
	printBoolArray(b, N);
	// ...� �������� �������� ��������� ������� �
	printf("Average: %g\n\n", result);
	return 0;
}