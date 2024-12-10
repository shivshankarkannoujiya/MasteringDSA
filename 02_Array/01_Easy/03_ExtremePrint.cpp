#include <iostream>
using namespace std;

// TODO: Extreme Print in an Array
/*
Given: {1,2,3,4,5,6};
Output: 10, 60, 20, 50, 30, 40
TODO: Catch in Odd length of Array, Dry Run
!Algorithm
    1. Take 2 pointers, {left and right}
    2. Print: arr[left], arr[right]
    3. if odd: Both Pointers will point to the same element
    4. In this case we print only One: left or right
    Because, if we will print both then same elements gets print 2 times
*/

void printExtreme(int arr[], int size){
    int left = 0;
    int right = size - 1;

    

    while(left <= right){

        if(left == right){
            cout << arr[left] << " ";
        }else{
            cout << arr[left] << " ";
            cout << arr[right] << " ";
        }
        left++;
        right--;
    }
    cout << endl;
}


int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printExtreme(arr, size);
}