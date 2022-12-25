#include <bits/stdc++.h>
using namespace std;

/*void solve(string str, int i, string output, vector<string> &ans, string arr[])
{
    if (i == str.length())
    {
        ans.push_back(output);
        return;
    }

    int num = str[i] - '0';
    string value = arr[num];

    for (int k = 0; k < value.length(); k++)
    {
        output.push_back(value[k]);
        solve(str, i + 1, output, ans, arr);
        output.pop_back();
    }
}

int main()
{
    string map[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqr", "stuv", "wxyz"};
    string str;
    cin >> str;

    vector<string> ans;
    string output;

    int index = 0;

    solve(str, index, output, ans, map);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}
*/


void solve(string digit, string maps[], string output, vector<string> &ans, int index)
{
    int i;
    string value;
    if (index >= digit.length())
    {
        ans.push_back(output);

        return;  }

    int number = digit[index] - '0';
     value = maps[number];
    // cout<<"the value is "<<value;
    for (i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digit, maps, output, ans, index + 1);
        output.pop_back();
    }
}
int main()
{
    string digit = "23";
    string maps[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqr", "stu", "vwxyz"};
    string output;
    vector<string> ans;
    int index = 0;
    solve(digit, maps, output, ans, index);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}