#include <bits/stdc++.h>
using namespace std;



void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;


        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main()
{
    int arr[] = { 1,5,0,4,23,40,56,75,34,44 };
    int N =10;

    insertionSort(arr, N);
    cout<<"array after using insertion sort:"<<endl;
    printArray(arr, N);

    return 0;
}
