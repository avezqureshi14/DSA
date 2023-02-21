#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool helper(int arr[], int n, int temp1, int temp2){
    if (temp2 == n)
    {
        return true;
    }

    if (arr[temp2] < arr[temp1])
    {
        return false;
    }

    return helper(arr,n,++temp1,++temp2); //important
    // return helper(arr,n,temp2,temp2+1); //important
}

bool isSorted(int arr[], int n){
    int temp1 = 0;
    int temp2 = 1;
    return helper(arr,n,temp1,temp2);
}
int main()
{
    int arr[] = {1,2,-4,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    if (isSorted(arr,n))
    {
        cout<<"Yeah it is Sorted"<<endl;
    }
    else{
        cout<<"Nope, it is not Sorted"<<endl;
    }
    
    return 0;
}