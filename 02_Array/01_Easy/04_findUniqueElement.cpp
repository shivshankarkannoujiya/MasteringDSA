#include<iostream>
using namespace std;


/*
    Description: Each Elements Occurs twice except one
    find That single element  
    Ex: {1,1,2,3,3,5,5}
    Output: 2
*/

int getUniqueElement(int arr[], int size){

    int ans = 0;
    for (int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }

    return ans;
}

int main(){
    int arr[5] = {1, 2, 1, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int ans = getUniqueElement(arr, size);
    cout << "Unique Element is: " << ans << endl;

    return 0;
}