#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPresent(int arr[][3], int m, int n, int target)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == target)
                return true;
        }
    }
    return false;
}
int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    int target;
    cout<<"Enter the element to Search"<<endl;
    cin>>target;
    if (isPresent(arr, 3, 3,target))
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}