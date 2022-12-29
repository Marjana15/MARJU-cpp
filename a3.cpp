#include<iostream>
#include<array>
using namespace std;
int main()
{
    // Initializing the array elements
    array<int,6> ar = {11, 12, 13, 14, 15, 16};


    cout << "The number of array elements is : ";
    cout << ar.size() << endl;


    cout << "Maximum elements array can hold is : ";
    cout << ar.max_size() << endl;

    return 0;

}
