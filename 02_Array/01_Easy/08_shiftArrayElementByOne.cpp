#include<iostream>
using namespace std;


void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void shiftArrayElementByOne(int arr[], int size){

    // step 1: store last Element into temp 
    int temp = arr[size - 1];

    // step 2: arr[i] = arr[i-1]
    for (int i = size - 1; i >= 1; i--){
        arr[i] = arr[i - 1];
    }

    // step 3: arr[0] = temp
    arr[0] = temp;
}


int main(){
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    shiftArrayElementByOne(arr, size);
    printArray(arr, size);
}