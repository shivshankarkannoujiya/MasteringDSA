#include<iostream>
using namespace std;


int main(){
    int arr[5];
    int n = 5;

    // TODO: Take input
    for (int i = 0; i < n; i++){

        cout << "Enter value at index  " << i << " : ";
        cin >> arr[i];
    }

    //TODO: Print Array
    cout << "Printing Array..." << endl;
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}