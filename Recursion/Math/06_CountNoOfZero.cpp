#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int helper(int n, int count){
    if (n == 0){
        return count;
    }
    int num = n%10;
    if(num == 0){
      count++;
    }
    return helper(n/10, count);
}

int countingZero(int n){
    int count = 0;
    return helper(n, count);
}

int main()
{
    cout<<countingZero(5000210);
    return 0;
}
