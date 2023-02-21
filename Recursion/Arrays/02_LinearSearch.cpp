#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int helper(int arr[], int n, int temp, int target){
    if (arr[temp] == target)
    {
        return temp;
    }
    if (temp == n)
    {
        return -1;
    }
    return helper(arr,n,temp+1,target);
}
int LinearSearch(int arr[], int n,int target){
    return helper(arr,n,0,target);
}
int main()
{
    int arr[] = {1,8,7,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 7;
    cout<<"The Position of the Given Target is "<<LinearSearch(arr,n, target);
    return 0;
}