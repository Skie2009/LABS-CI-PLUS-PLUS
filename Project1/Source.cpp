#include <iostream>
#include <conio.h>
#include <time.h>
using namespace std;

int main() 
    {
    setlocale(LC_ALL, "rus");
        int a[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; // ������ �������������� ������
        srand(time(NULL)); // ����� ��������� ����� ������ ���
        for (int i = 0; i < 20; i++)
        {
            a[i] = rand() % 11; // ��������� ����� �� 1 �� 10
        }
        cout << "����:   "; // ����� �������
        for (int i = 0; i < 20; i++)
        {
            cout << a[i] << " ; ";
        }
        cout << endl;
        // ������ �������� ����� ������������� ����� � �������
        int element_counts[20] = { 0 };
        int same_elements[20] = { 0 };

        for (int i = 0; i < 20; i++)
        {
            for (int j = i; j < 20; j++)
                if (a[i] == a[j])
                    element_counts[i]++;
        }
        int max_count = element_counts[0];
        int same_elements_count = 0;
        for (int i = 1; i < 20; i++)
            if (element_counts[i] > max_count)
                max_count = element_counts[i];
        for (int i = 0; i < 20; i++)
        {
            if (element_counts[i] == max_count)
            {
                same_elements[same_elements_count] = a[i];
                same_elements_count++;
            }
        }
        int min = same_elements[0];
        for (int i = 1; i < same_elements_count; i++)
        {
            if (same_elements[i] < min)
                min = same_elements[i];
        }
        cout <<min<<" "; // ������� ���������� � �������
        cout << endl;
        return 0;
    }