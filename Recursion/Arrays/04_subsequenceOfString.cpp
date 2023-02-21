#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void subsequenceOfString(string s, int index = 0, string current = ""){
    if (index == s.length())
    {
        cout<<current<<endl;
        return;
    }
    subsequenceOfString(s,index+1,current+s[index]);    
    subsequenceOfString(s,index+1,current);    
}
int main()
{
    string s = "abc";
    subsequenceOfString(s);
    return 0;
}