#include <iostream>
#include <vector>
#include "unos.h"
using namespace std;
int main()
{
    int n;
    vector<int> vecA;
    vector<int> vecB;

    cout << "Unesite broj brojeva" << endl;
    cin >> n;
    input(vecA, n);
    cout << "Unesite intervale" << endl;;
    int poc;
    int kraj;
    cin >> poc >> kraj;

    inputInterval(vecB, poc, kraj);
    print(vecA);
    print(vecB);


    return 0;
}
