#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int reverseNumber(int n){
    if (n <= 0)
    {
        return n;
    }
    cout<<n%10;
    return reverseNumber(n/10);    
}
int main()
{
    reverseNumber(12345);
    return 0;
}