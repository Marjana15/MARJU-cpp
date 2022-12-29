#include<iostream>
#include<array>
using namespace std;
int main()
{

    array<int,6> ar = {11, 12, 13, 14, 15, 16};

    cout << "First element of array is : ";
    cout << ar.front() << endl;


    cout << "Last element of array is : ";
    cout << ar.back() << endl;

    return 0;

}
