#include<iostream>
#include<limits.h>
using namespace std;

// TODO: find Minimum Number in an Array
int getMin(int arr[], int size){
    int minNum = INT_MAX;
    for (int i = 0; i < size; i++){
        if(arr[i] < minNum){
            minNum = arr[i];
        }
    }
    return minNum;
}

// TODO: find Maximum Number in an Array
int getMax(int arr[], int size){
    int maxNumber = INT_MIN;
    for (int i = 0; i < size; i++){
        if(arr[i] > maxNumber){
            maxNumber = arr[i];
        }
    }
    return maxNumber;
}

int main(){
    int arr[5] = {-1, 1, 3, 4, 5};
    int minNumber = getMin(arr, 5);
    int maxNumber = getMax(arr, 5);
    cout << "Minimum Number is: " << minNumber << endl;
    cout << "Maximum Number is: " << maxNumber << endl;
}