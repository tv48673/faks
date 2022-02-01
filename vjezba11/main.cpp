#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <string>
using namespace std;

class X {
public:
	string abc;
	X(const char* s) : abc(s) {}
};
void load(vector<int>* v)
{
	ifstream fin("numbers.txt");
	if (!fin)
		throw X("nije pronaden");
	istream_iterator<int> *it(fin);
	istream_iterator<int> eos;
	copy(it, eos, back_inserter(*v));
}
int main()
{
	vector<int> v;
	try
	{
		load(&v);
	}
	catch (X x)
	{
		cout << x.err<< endl;
	}
	int t = 500;
	int num = count_if(v.begin(), v.end(), [t](int x) {return x > t; });
	auto max = max_element(v.begin(), v.end());
	auto min = min_element(v.begin(), v.end());
	cout << "veci od 500: " << num << endl;
	cout << " najmanji: " << *min << endl;
	cout << "najveci;  " << *max << endl;
	v.erase(remove_if(v.begin(), v.end(), [](const int& x) {return x < 300; }),v.end());
	sort(v.begin(), v.end(),greater<int>());
	ostream_iterator<int> it(cout, "\n");
	copy(v.begin(), v.end(), it);

return 0;

}
