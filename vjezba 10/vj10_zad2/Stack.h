#include <iostream>
using namespace std;

template <class T>
class Stack {

public:
	Stack();
	void push(T k);
	T pop();
	bool isEmpty();
	void print();

private:
	int size;
	T st[5];
};

template <class T> Stack<T>::Stack() { size = 0; }
template <class T> void Stack<T>::push(T k)
{
	cout << k << endl;
	size = size + 1;
	st[size] = k;
}

template <class T> bool Stack<T>::isEmpty()
{
	if (!size)
		return true;
	else
		return false;
}


template <class T> T Stack<T>::pop()
{
	T popped_element = st[size];
	size--;
	return popped_element;
}
template<class T> void Stack<T>::print()
{
	for (int i = 0; i < size; i++)
	{
		std::cout << "("<<st[i]<< ")";
	}
		std::cout << std::endl;
}

