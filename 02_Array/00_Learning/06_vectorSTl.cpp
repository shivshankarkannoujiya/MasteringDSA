#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int> &v){
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
void printVector2(vector<int> &v){
    for(auto it: v){
        cout << it << " ";
    }
    cout << endl;
}

int main(){

    // TODO: Vector Initialization
    vector<int> v; //default with size: 0
    vector<int> v2(5, -1); // vector with size:5 and specific value each place
    vector<int> v3 = {1, 2, 3, 4, 5, 6, 7};
    vector<int> v4{1, 2, 3, 4, 5};

    // printVector(v);
    // printVector(v2);
    // printVector(v3);
    // printVector(v4);

    // TODO: copy Vector
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> arr2(arr);

    // TODO: get starting and end value
    // cout << "First value: " << arr[0] <<endl;
    // cout << "last value: " << arr[arr.size()-1] <<endl;

    // TODO: Method 2    
    // cout << "First value: " << arr.front()<<endl;
    // cout << "last value: " << arr.back() <<endl;

    printVector2(arr);
}