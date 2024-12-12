#include<iostream>
#include<limits.h>
using namespace std;

// TODO: 1
void printArrayRowWise(int arr[][4], int row, int col){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// TODO: 2
void printArrayColWise(int arr[][4], int row, int col){
    for (int i = 0; i < col; i++){
        for (int j = 0; j < row; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

// TODO: 3
void takeInputRowWise(int arr[][4], int row, int col){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << "Enter value at: " << "i = " << i << " , " << "j = " << j<< " : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
}


// TODO: 4
bool linearSearch(int arr[][3], int row, int col, int target){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if(arr[i][j] == target) {
                return true;
            }
        }
    }

    return false;
}

// TODO: get Min/Max
int getMax(int arr[][3], int row, int col){
    int max = INT_MIN;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }

    return max;
}
int getMin(int arr[][3], int row, int col){
    int min = INT_MAX;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if(arr[i][j] < min){
                min = arr[i][j];
            }
        }
    }

    return min;
}


int main(){

    // TODO:  Initialize 2D Array

    // int arr[3][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,0,1,2}
    // };

    // int brr[][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,0,1,2}
    // };

    
    // Both will through Error atleast we have to provide the : `Col`
    // Same Condition Apply when we pass the array into fn
    // int crr[][] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,0,1,2}
    // };

    // int drr[3][] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,0,1,2}
    // };

    // TODO: Print Array
    // printArrayRowWise(arr, 3, 4);
    // printArrayColWise(arr, 3, 4);

    // TODO: Take input

    // int Arr[3][4];
    // int row = 3;
    // int col = 4;
    // takeInputRowWise(Arr, row, col);
    // printArrayRowWise(Arr, row, col);

    // TODO: linearSearch
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int row = 3;
    int col = 3;
    int target = 19;

    // bool isTargetPresent = linearSearch(arr, row, col, target);
    // if(isTargetPresent){
    //     cout << "Target Found" << endl;
    // }else{
    //     cout << "Target Not Found" << endl;
    // }

    // TODO: Min/Max
    int maxNum = getMax(arr, row, col);
    int minNum = getMin(arr, row, col);

    cout << "Max: " << maxNum << endl;
    cout << "Min: " << minNum << endl;
}