#include <vector>
#include <iostream>
#include <time.h>
using namespace std;

void eraseElement(vector<int>& v, int a)
{
	v.erase(v.begin() + a);
}


int main()
{
    vector<int> v{ 1, 2, 3, 4, 5, 6, 7 };
	int a;
	cout << "unesi poziciju" << endl;
	cin >> a;
	int i = 0;
    eraseElement(v, a);
	while( i < v.size())
	{
		cout <<"["<<v[i]<<"]";
		i++;
	}
	cout << endl;
return 0;
}
