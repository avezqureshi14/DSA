#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sum = 0;

int sumOfDigits(int n){
    if (n == 0)
    {
        return 0;
    }

    return n%10 + sumOfDigits(n/10);
}
int main()
{
    cout<<sumOfDigits(1342);
    return 0;
}