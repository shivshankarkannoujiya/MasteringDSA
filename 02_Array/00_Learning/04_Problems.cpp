#include<iostream>
using namespace std;


void takeInput(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << "Enter value at index " << i << " :";
        cin >> arr[i];
    }
}

void doubleUpEachValue(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << 2 * arr[i] << " ";
    }
    cout << endl;
}

int main(){

    /**
     * 1. Create 10 Size Array 
     * 2. Take input in that array
     * 3. Doubleup each value of Array
     */

    int arr[10];
    takeInput(arr, 10);
    doubleUpEachValue(arr, 10);

    cout << "Program Completed..." << endl;
    return 0;
}