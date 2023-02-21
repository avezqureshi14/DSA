#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string helper(string &s1, string s2, int temp1,int n)
{
    if (temp1 == n)
    {
        return s2;
    }
    if (s1[temp1] != 'a')
    {
        s2 = s2 + s1[temp1];
    }
    temp1++;

    return helper(s1, s2, temp1, n);
}

string copyString(string s1)
{
    string s2;
    int n = s1.length();
    int temp1 = 0;
    return helper(s1, s2, temp1, n);
}

int main()
{
    string s = "abaac";
    string ans = copyString(s);
    for (int i = 0; i < ans.length(); i++)
    {
        cout << ans[i];
    }

    return 0;
}
