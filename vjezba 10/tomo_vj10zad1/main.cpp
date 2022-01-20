#include<iostream>
using namespace std;

template <typename T>
int Partition(T arr[],int start,int kraj){

	int pivot = kraj;
	int j = start;
	for(int i=start;i<kraj;++i){
		if(arr[i]<arr[pivot]){
			swap(arr[i],arr[j]);
			++j;
		}
	}
	swap(arr[j],arr[pivot]);
	return j;

}
template <>
int Partition<char>(char arr[],int start,int kraj)
{
	int pivot = kraj;
	int j = start;
	for(int i=start;i<kraj;++i){
		if(tolower(arr[i])<tolower(arr[pivot])){
			swap(arr[i],arr[j]);
			++j;
		}
	}
	swap(arr[j],arr[pivot]);
	return j;

}
template <typename T>
void Quicksort(T arr[],int start, int kraj ){

	if(start<kraj){
		int p = Partition(arr,start,kraj);
		Quicksort(arr,start,p-1);
		Quicksort(arr,p+1,kraj);
	}

}
template <typename T>
void PrintArray(T arr[], int n){
	for(int i=0;i<n;++i)
		cout<<arr[i]<<" ";
	cout<<"\n";
}

int main() {
    char arrChar[] = { 'b','e','i','o','u','g','d','D'};
    int nChar = sizeof(arrChar) / sizeof(char);
    Quicksort(arrChar,0,nChar-1);
    cout<<"sortitana slova: "<<endl;
    PrintArray(arrChar, nChar);


	int arr[] = { 1 , 4 , 9 , 21 , 3 , 2 , 10 , 37, 45, 5, 3, 0 };
	int n = sizeof(arr)/sizeof(int);

	Quicksort(arr,0,n-1);

	cout<<"sortirani brojevi: "<<endl;
	PrintArray(arr, n);



}
