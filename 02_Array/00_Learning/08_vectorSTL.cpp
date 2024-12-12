#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> v;
    cout << sizeof(v) << endl;

    // TODO: 2D Vector
    vector<vector<int>> arr(5, vector<int>(10, 0));

}

// 64-bit System: 24
// 32-bit System: 12


/*
TODO: Study
std::vector internals: A std::vector is a dynamic array that typically contains the following three pointers or elements:

    1. A pointer to the dynamically allocated memory for the elements.
    2. A value representing the size (number of elements currently in the vector).
    3. A value representing the capacity (total allocated memory for elements).

On a 64-bit system:
    A pointer is 8 bytes.
    size and capacity are typically size_t types, which are also 8 bytes each.

sizeof(std::vector) = 8 (pointer to data) + 8 (size) + 8 (capacity) = 24 bytes

 */