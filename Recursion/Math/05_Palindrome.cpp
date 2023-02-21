#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool helper(string s, int start, int end)
{
    
    if (start >= end)
    {
        return true;
    }
    if (s[start] != s[end])
    {
        return false;
    }
    return helper(s, start + 1, end - 1);
}

bool isPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;
    return helper(s, start, end);

}

int main()
{
    string s = "roocecar";
    if (isPalindrome(s))
    {
        cout << "Yes it is a Palindrome" << endl;
    }
    else
    {

        cout << "No it is not a Palindrome" << endl;
    }

    return 0;
}