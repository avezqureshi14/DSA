#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fact = 1;
int factorialFunc(int n){
    if (n<=0)
    {
        return fact;
    }
    
    fact = fact * n;
    return factorialFunc(n-1);
}
int main()
{
    cout<<factorialFunc(7);
    return 0;
}