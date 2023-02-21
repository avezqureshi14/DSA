#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int helper(int num, int count)
{
    int store = num;
    if (store == 0)
    {
        return count;
    }
    if (store % 2 == 0)
    {
        store = store / 2;
        count++;
    }
    else
    {
        store = store - 1;
        count++;
    }

    return helper(store, count);
}

int numberOfSteps(int num)
{
    int count = 0;
    return helper(num, count);
}
int main()
{
    cout<<"Number of Steps Required are "<<numberOfSteps(123);
    return 0;
}