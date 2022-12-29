#include<iostream>
#include<array>
using namespace std;
int main()
{


    array<int,6> ar = {11,12, 13, 14, 15, 16};


    array<int,6> ar1 = {17, 18, 19, 20, 21, 22};


    cout << "The first array elements before swapping are : ";
    for (int i=0; i<6; i++)
        cout << ar[i] << " ";
    cout << endl;
    cout << "The second array elements before swapping are : ";
    for (int i=0; i<6; i++)
        cout << ar1[i] << " ";
    cout << endl;


    ar.swap(ar1);

    cout << "The first array elements after swapping are : ";
    for (int i=0; i<6; i++)
        cout << ar[i] << " ";
    cout << endl;
    cout << "The second array elements after swapping are : ";
    for (int i=0; i<6; i++)
        cout << ar1[i] << " ";
    cout << endl;

    return 0;

}
