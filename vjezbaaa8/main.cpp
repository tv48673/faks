#include <iostream>
#include <vector>
#include "vrime.h"
#include "dodatno.h"
#include <algorithm>
using namespace std;

int main() {
    vector<Timer> v{ {2, 6, 9.118}, {2, 6, 15.251}, {2, 6, 9.925}, {2, 7, 15.222}, {2, 7, 10.775} };

    Timer avg(0,0,0);
    for (auto t : v)
        avg += t;
    avg /= v.size();
    cout << "avg: " << avg << endl;

    Timer tmax = *min_element(v.begin(), v.end());
    cout << "min: " << tmax << endl;

    for (auto& tm : v)
        cout << double(tm - tmax) << endl;

    Penalty p(5);
    for (auto& tm : v)
        p(tm);
}
