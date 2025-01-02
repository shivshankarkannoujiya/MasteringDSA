#include<iostream>
using namespace std;

void shiftNegativeOneSide(int arr[], int size){
    int j = 0;
    for (int i = 0; i < size; i++){
        if(arr[i] < 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int arr[] = {23, -7, 12, -10, -11, 40, 60};
    int size = 7;
    shiftNegativeOneSide(arr, size);
    print(arr, size);
}