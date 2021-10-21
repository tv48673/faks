

#include <iostream>
using namespace std;
int findMinimum(int a[], int n)
{
    int mn = a[0];

    for (int i = 0; i < n; i++)
    {
       if(mn > a[i]) {
         mn=a[i];
    }

    }
return mn;
}

int findMaximum(int a[], int n)
{
    int mx = a[0];

    for (int i = 0; i < n; i++)
    {
        if(mx < a[i]) {
         mx = a[i];
      }
    }
    return mx;
}

int main()
{

    int n;
    cout << " unesi velicinu niza: ";
    cin >> n;

    int arr[n], i, pos;

    cout << "\n\n Unesi " << n << " elementa niza: \n\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    int miin = findMinimum(arr, n);

    int maax = findMaximum(arr, n);

    cout << "\n\n\nNajmanji broj u nizu je : " << miin;

    cout << "\n\nNajveci broj u nizu je: " << maax << "\n\n\n";

    return 0;
}
