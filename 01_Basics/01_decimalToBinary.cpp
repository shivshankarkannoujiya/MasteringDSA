#include<iostream>
#include<vector>
using namespace std;


void decimalToBinary(int n){

    vector<int> binary;

    if( n == 0){
        cout << "Binary is: " << 0 << endl;
        return;
    }

    while(n > 0){
        binary.push_back(n % 2);
        n = n / 2;
    }

    // printing binary in reverse
    for (int i = binary.size() - 1; i >= 0; i--){
        cout << binary[i] << " ";
    }
    cout << endl;
}


int main(){
    int n;
    cout << "Enter the decimal number: ";
    cin >> n;

    decimalToBinary(n);
}