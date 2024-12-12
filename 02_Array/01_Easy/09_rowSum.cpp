#include<iostream>
using namespace std;


void printRowSum(int arr[][3], int row, int col){
    for (int i = 0; i < row; i++){
        int sum = 0;
        for (int j = 0; j < col; j++){
            sum += arr[i][j];
        }
        cout << "Sum of row: " << i << " : " << sum << endl;
    }
}

int main(){

    int arr[3][3] = {
        {1,2,3}, // 0 =>  6
        {4,5,6}, // 1 =>  15
        {7,8,9}, // 2 =>  24
    };

    int row = 3;
    int col = 3;
    printRowSum(arr, row, col);
}