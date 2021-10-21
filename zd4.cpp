


#include <iostream>
using namespace std;
int findMinimum(int a, int n)
{
    return a < n ? a : n;

}


int findMaximum(int a, int n)
{

return a > n ? a : n;

}

int findMinRec(int A[], int n)
{
    // if size = 0 means whole array has been traversed
    if (n == 1)
        return A[0];
    return findMinimum(A[n-1], findMinRec(A, n-1));
}

int findMaxRec(int A[], int n)
{
    // if size = 0 means whole array has been traversed
    if (n == 1)
        return A[0];
    return findMaximum(A[n-1], findMinRec(A, n-1));
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

    int miin = findMinRec(arr, n);

    int maax = findMaxRec(arr, n);

    cout << "\n\n\nNajmanji broj u nizu je : " << miin;

    cout << "\n\nNajveci broj u nizu je: " << maax << "\n\n\n";

    return 0;
}
