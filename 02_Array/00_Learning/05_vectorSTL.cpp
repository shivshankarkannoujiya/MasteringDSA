#include<iostream>
#include<vector>
using namespace std;


void printvector(vector<int> &v){
    for (int i = 0; i < v.size(); i++){
        // cout << v[i] << " ";
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main(){
    // TODO: Static memory allocation
    // int arr[5];

    // TODO: Dynamic Memory Allocation
    // int n;
    // cin >> n;
    // int *brr = new int[n]; //💬 Each element would be 0 or garbage

    // TODO: vector
    vector<int> v;

    // TODO: capacity and size
    // while(true){
    //     int data;
    //     cin >> data;
    //     v.push_back(data);
    //     cout << "Capacity: " << v.capacity() << " and " << "size: " << v.size() << endl;
    // }

    // TODO: Insert
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);

    // TODO: delete data from vector
    // v.pop_back();


    //TODO: Taking input

    int size;
    cin >> size;
    for (int i = 0; i < size; i++){
        int data;
        cin >> data;
        v.push_back(data);
    }
    printvector(v);

    // TODO: clear whole vector
    // v.clear();


    
    cout << "Program completed !!" << endl;
}