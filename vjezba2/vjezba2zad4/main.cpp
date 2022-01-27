#include "Vector.h"
#include <iostream>
using namespace std;
void MyVector::vector_new()
{
	index = 0;
	Size = 1;
	arr = new int[Size];
}

void MyVector::vector_delete()
{
    index = 0;
	Size = 0;
	delete arr;
}

void MyVector::vector_push_back(int a)
{
	if (index == Size)
	{
		int* temp = new int[2*Size];
		for (int i = 0; i < Size; i++)
		{
			temp[i] = arr[i];
		}
		delete arr;
		Size *= 2;
		arr = temp;
	}
	arr[index] = a;
	++index;
}

void MyVector::vector_pop_back()
{
	--index;
	int* temp = new int[Size];
	for (int i = 0; i < index; i++)
	{
		temp[i] = arr[i];
	}
	delete arr;
	arr = temp;
}

int& MyVector::vector_front()
{
	return arr[0];
}


int& MyVector::vector_back()
{
	return arr[index - 1];
}

int MyVector::vector_size()
{
	return index;
}

void MyVector::vector_print()
{
	for (int i = 0; i < index; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main()
{
	MyVector vec;

	vec.vector_new();

	int a;
	cout << "unosi brojeve u niz " ;
	while (cin >> a)
		vec.vector_push_back(a);

	vec.vector_print();

	vec.vector_pop_back();

	vec.vector_print();

	vec.vector_delete();




    cout << "First element: " << vec.vector_front() << endl;
	cout << "Last element: " << vec.vector_back() << endl;
	vec.vector_delete();
}
