#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, vector<vector<int>> &ans, int index)
{
    // base case
    if (index >= nums.size())
    {
        ans.push_back(nums);
    }
    for (int j = index; j < nums.size(); j++)
    {
        swap(nums[index], nums[j]);
        solve(nums, ans, index + 1);
        // backtrack
        swap(nums[index], nums[j]);
    }
}

vector<vector<int>> premute(vector<int> &nums)
{
    vector<vector<int>> ans;
    int index = 0;
    solve(nums, ans, index);
    return ans;
}

int main()
{
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    for(auto i : premute(nums)){
        for(auto j : i){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}