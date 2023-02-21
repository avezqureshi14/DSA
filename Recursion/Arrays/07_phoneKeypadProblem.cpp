#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(string digits, int index, vector<string> &ans, string output, vector<string> mapping)
{
    if (index >= digits.length())
    {
        ans.push_back(output);
        return;
    }

    int number = digits[index] - '0';
    string value = mapping[number];
    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digits, index + 1, ans, output, mapping);
        output.pop_back();
    }
}

vector<string> phoneKeyPad(string digits)
{
    int index = 0;
    vector<string> ans;
    string output = "";
    vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, index, ans, output, mapping);

    return ans;
}
int main()
{
    string digits = "23";
    for(auto i : phoneKeyPad(digits)){
        cout<<i<<" ";
    }
    return 0;
}