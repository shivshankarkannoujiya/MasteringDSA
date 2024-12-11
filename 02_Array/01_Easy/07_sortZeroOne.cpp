#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sortZerosOne(int arr[], int size){
    int zeroCount = 0;
    int oneCount = 0;

    // Step 1: Count Zeeros and Ones
    for (int i = 0; i < size; i++){
        if(arr[i] == 0){
            zeroCount++;
        }else if(arr[i] == 1){
            oneCount++;
        }else{
            cout << "Zero and ones are present in array !!";
        }
    }

    // place in array : Using for loop
    // int i;
    // for (i = 0; i < zeroCount; i++){
    //     arr[i] = 0;
    // }

    // for (int j = i; j < size; j++){
    //     arr[j] = 1;
    // }

    // Using while loop
    int index = 0;
    while(zeroCount--){
        arr[index] = 0;
        index++;
    }

    while(oneCount--){
        arr[index] = 1;
        index++;
    }
}

int main(){
    int arr[9] = {1, 1, 0, 1, 1, 0, 1, 0, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    sortZerosOne(arr, size);
    printArray(arr, size);
}