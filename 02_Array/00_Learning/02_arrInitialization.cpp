#include <iostream>
using namespace std;

int main()
{

    // TODO: Array Initialization
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int brr[5] = {1, 2, 3, 4, 5};
    int crr[5] = {1, 2};
    //!  error: too many initializers for 'int [2]'
    // int drr[2] = {1, 2, 3, 4, 5};

    // TODO: Accessing Elements
    int Err[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;
    cout << Err[0] << " ";
    cout << Err[1] << " ";
    cout << Err[2] << " ";
    cout << Err[3] << " ";
    cout << Err[4] << " ";
    cout << Err[5] << " ";
    cout << Err[6] << " ";
    cout << Err[7] << " ";
    cout << endl;

    // TODO: Print Array using loop
    for (int i = 0; i < 8; i++){
        cout << Err[i] << " ";
    }
    cout << endl;
}