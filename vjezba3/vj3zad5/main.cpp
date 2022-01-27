#include <iostream>
#include <string>
using namespace std;

int provjera(string& a, string& b)
{
	int num = 0;
	size_t pos = a.find(b);
	while (pos != string::npos)
	{
		++num;
		pos = a.find(b,b.size() + pos);
	}
	return num;
}


int main()
{
	string str1;
	cout << "unesi 1. string" << endl;
	cin >> str1;

	string str2;
	cout << "Unesi podstring" << endl;
	cin >> str2;
	cout <<  provjera(str1, str2)<< endl;


	return 0;
}
