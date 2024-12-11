#include<iostream>
using namespace std;

void printAllTriplets(int arr[], int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            for (int k = 0; k < size; k++){
                cout << "Printing for " << "i: " << i << "," << "j: " << j << "," << "k: " << k << endl;
                cout << arr[i] << "," << arr[j] << "," << arr[k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main(){
    int arr[4] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    printAllTriplets(arr, size);
}