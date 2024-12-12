#include<iostream>
using namespace std;


void printPrincipleDiagonal(int arr[][3], int row){
    // i == j: we can use only one loop
    for (int i = 0; i < row; i++){
        cout << arr[i][i] << " ";
    }
    cout << endl;
}
void printSecondaryDiagonal(int arr[][3], int row, int col){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if(i + j == row - 1){
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
}


int main(){
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    int row = 3;
    int col = 3;
    printPrincipleDiagonal(arr, row);
    printSecondaryDiagonal(arr, row, col);
}   