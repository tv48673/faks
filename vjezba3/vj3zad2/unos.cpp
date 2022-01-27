#include "unos.h"
using namespace std;

void print(vector<int>& v)
{
    int i = 0;
    while(i < v.size())
    {
        cout << "(" << v[i] << ") ";
        i++;
    }
    cout << endl;

}

void Input(vector<int>& v, int a)
{
    srand(time(NULL));
    int i = 0;
    while (i < a)
    {
        v.push_back(rand() % 10);
        i++;
    }

}
void InputInterval(vector<int>& v, int poc, int kraj)
{
    int max = kraj;
    int min = poc;

    int x;
    cout << "Unesite broj izmedu intervala " <<endl;
    cin >> x;
    while (x >= min && x <= max)
    {
        v.push_back(x);
        cout << "Unesite broj izmedu intervala " << endl;
        cin >> x;
    }

}
