#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size()-1;
        while(mid <= high){
            switch( nums[mid]){
                case 0:
                    swap(nums[low++],nums[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid],nums[high--]);
                    break;
            }
        }
    }

void printVector(vector<int>nums){
    for(auto i : nums){
        cout<<i;
    }
}

int main()
{
    vector<int>nums;
    nums.push_back(2);
    nums.push_back(0);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(0);
    sortColors(nums);
    printVector(nums);

    return 0;
}