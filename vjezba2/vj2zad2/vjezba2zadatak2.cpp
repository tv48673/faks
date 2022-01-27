
#include <iostream>
using namespace std;


int& returnArrayRef(int* arr,int n)
{
	cout << " input position of element" << endl;
	int a = 0;
	cin >> a;
	if (a <= n)
		return arr[a];
	else
	{
		return arr[n];
	}
}

int main()
{

	int n = 0;
	cout << "Unesite velicinu niza" << endl;
	cin >> n;

	int* arr = new int[n];
	cout << "input element in array" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];


	}
	cout << endl;

	int& position = returnArrayRef(arr, n);

	position++;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] ;
	}
}
