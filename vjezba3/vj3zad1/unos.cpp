
#include "unos.h"
using namespace std;


void print(vector<int>& v)
{
    int i=0;
    while (i< v.size())
    {
        cout << "[" << v[i] << "] ";
        i++;
    }
    cout << endl;

}

void input(vector<int>& v, int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        v.push_back(rand() % 100);
    }

}
void inputInterval(vector<int>& v, int poc, int kraj)
{
    int min = poc;
    int max = kraj;

    int x;
    cout << "Unesite broj izmedu zeljenih intervala " << endl;
    cin >> x;
    while (x > min && x < max)
    {
        v.push_back(x);
        cout << "Unesite broj izmedu zeljenih intervala " << endl;
        cin >> x;
    }

}
