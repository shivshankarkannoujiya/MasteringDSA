#include<iostream>
using namespace std;


/**
 * TODO: 1
 * 1. Create 10 Size Array 
 * 2. Take input in that array
 * 3. Doubleup each value of Array
 */
void takeInput(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << "Enter value at index " << i << " :";
        cin >> arr[i];
    }
}
void doubleUpEachValue(int arr[], int size){

    cout << "Doubling the Array Elements...";
    for (int i = 0; i < size; i++){
        arr[i] = 2 * arr[i];
    }
    cout << endl;
}
void printArray(int arr[], int size){
    cout << "Printing Array..." << endl;
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


/**
 * TODO: 2
 * 1. Take 5 size Array 
 * 2. Take input
 * 3. Print sum of all elements
 */
void printSumOfArrayElements(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    cout << "Sum is: " << sum << endl;
}

/*
    TODO: 3 
    Linear Search
 */
bool isTargetPresent(int arr[], int target, int size){
    for (int i = 0; i < size; i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}


/*
TODO: 4
    {1,0,0,1,0,1,0,0,1};
    Count zeros and Ones
!Aglorithn
1.Take Variables
    zeroCount
    oneCount
2. Run a loop on Array 
if got: 0 then zeroCount++
if got: 1 then oneCount++
3. Print: zeroCount and oneCount
*/
void countZerosOnes(int arr[], int size){
    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i < size; i++){
        if(arr[i] == 1){
            oneCount++;
        }else if(arr[i] == 0){
            zeroCount++;
        }else{
            cout << "Neither 0 nor 1 present in the Array" << endl;
        }
    }

    cout << "zeroCount: " << zeroCount << endl;
    cout << "oneCount:  " << oneCount << endl;
}

int main(){

    //TODO: 1
    // int arr[10];
    // takeInput(arr, 10);
    // doubleUpEachValue(arr, 10);
    // printArray(arr, 10);

    // TODO: 2
    // int score[5];
    // takeInput(score, 5);
    // printSumOfArrayElements(score, 5);

    // TODO: 3
    // int brr[5] = {1, 2, 3, 4, 5};
    // int target = 5;
    // bool ans = isTargetPresent(brr, target, 5);
    // if(ans == 1){
    //     cout << "Target value " << target << " is present in the Array" << endl;
    // }else{
    //     cout << "Target value " << target << " is not present in Array" << endl;
    // }

    // TODO: 4
    // int arr[5] = {1, 0, 0, 1, 0};
    // int arr[5] = {2,3,4,5,6};
    // countZerosOnes(arr, 5);
    
    cout << "Program Completed !!" << endl;
    return 0;
}

