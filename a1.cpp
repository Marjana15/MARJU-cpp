#include<iostream>
#include<array>
#include<tuple>
using namespace std;
int main()
{

    array<int,6> ar = {11,12,13,14,15,16};


    cout << "The array elements are (using at()) : ";
    for ( int i=0; i<6; i++)
        cout << ar.at(i) << " ";
    cout << endl;


    cout << "The array elements are (using get()) : ";
    cout << get<0>(ar) << " " << get<1>(ar) << " ";
    cout << get<2>(ar) << " " << get<3>(ar) << " ";
    cout << get<4>(ar) << " " << get<5>(ar) << " ";
    cout << endl;

    cout << "The array elements are (using operator[]) : ";
    for ( int i=0; i<6; i++)
        cout << ar[i] << " ";
    cout << endl;

    return 0;

}
