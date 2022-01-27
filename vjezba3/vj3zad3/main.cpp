#include <vector>
#include <iostream>
#include <time.h>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v{ 1, 5, 8, 9, 6, 7, 3, 4, 2 };

	cout << endl;
	sort(v.begin(), v.end());
	int i = 0,poc = 0,kraj = 0,sum = 0;
	while (i < v.size())
	{
		cout << "[" << v[i] << "]";
		if (v[i] < v[poc])
			poc = i;
        i++;
	}
	cout << endl;
	v.insert(v.begin(), 0);
	cout << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout <<"["<<v[i]<<"]";
		if (v[i] > v[kraj])
			kraj = i;
		sum += v[i];
	}
	cout << endl;
	v.insert(v.begin() + 9, sum);
	cout << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout <<"["<<v[i]<<"]";
	}
	cout << endl;
	return 0;
}
