#include <iostream>
#include <vector>
#include "unos.h"
using namespace std;


vector<int> usporedi(vector<int>& v1, vector<int>& v2)
{
	vector<int> temp;
	int i = 0;
	for(i; i < v1.size(); i++)
	{
	    int j = 0;
		bool b = true;
		while (j < v2.size())
		{
			if (v1[i] == v2[j])
			{
				b = false;
				break;
			}
            j++;
		}
		if (b)
			temp.push_back(v1[i]);


	}
	return temp;

}

int main()
{
	vector<int> vec1;
	vector<int> vec2;
	int a;
	int poc, kraj;
	cout << "Unesite interval" << endl;
	cin >> poc;
	cin >> kraj;
	cout << "Unesite broj brojeva" << endl;
	cin >> a;
	Input(vec1,a);
	InputInterval(vec2, poc, kraj);
	print(vec1);
	print(vec2);
	vector<int> vec3 = usporedi(vec1, vec2);
	print(vec3);






	return 0;
}
