#include<iostream>
#include<vector>
using namespace std;


void sortColors(vector<int> &nums){
    int index = 0;
    int left = 0;
    int right = nums.size() - 1;

    while (index <= right) {
        if(nums[index] == 0) {
            swap(nums[index], nums[left]);
            left++;
            index++;
        }else if(nums[index] == 2) {
            swap(nums[index], nums[right]);
            right--;
        }else{
            // if got 1 ignore and move ahead
            index++; 
        }
    }
}

void print(vector<int> &nums){
    for(auto it: nums){
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums{1, 2, 0, 0, 1, 0, 1};
    sortColors(nums);
    print(nums);
}