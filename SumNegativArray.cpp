// Написать функцию, возращающую сумму всех отрицательных значнеий массива


#include <iostream>
#include <windows.h>
#include <random>

using namespace std;


template <typename T>
void FillArray(T arr[], int size);

template <typename T>
void PrintArray(T arr[], int size);

template <typename T>
void ReverseArray(T arr[], int size);

template <typename T>
T SumNegativ(T arr[], int size);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int sizze = 30;
	int Array[sizze];

	FillArray(Array, sizze);
	cout << "Массив до предобразования :" << endl;
	PrintArray(Array, sizze);
		
	cout << "Сумма отрицательных чисел в массиве : " << SumNegativ(Array, sizze) << endl;	
}


template <typename T>
void FillArray(T arr[], int size) {
	random_device Random;

	for (size_t i = 0; i < size; i++)
	{
		arr[i] = Random() % (100 + 50) - 50;
	}
}

template <typename T>
void PrintArray(T arr[], int size) {
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

template <typename T>
T SumNegativ(T arr[], int size) {
	T sum = 0		;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] < 0) sum += arr[i];
	}

	return sum;
}