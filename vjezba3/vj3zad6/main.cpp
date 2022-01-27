#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	vector<string> v;
	int a;
	cout << "unesite broj" << endl;
	cin >> a;
	string str;
	cout << "Unesite string" << endl;
	cin >> str;
	int i = 1;
	v.push_back(str);
	while ( i < a)
	{
		cout << "Unesite string" << endl;
		cin >> str;
		v.push_back(str);
		 i++;
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	for (int i = 0; i < v.size(); i++)
	{
		reverse(v[i].begin(), v[i].end());
		cout <<v[i] <<endl;
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	return 0;
}
