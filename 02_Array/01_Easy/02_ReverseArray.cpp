#include<iostream>
using namespace std;

// TODO: Reverse Array 
void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void reverseArray(int arr[], int size){
    int left = 0;
    int right = size - 1;

    while(left <= right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

}

int main(){
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, size);
    printArray(arr, size);
}