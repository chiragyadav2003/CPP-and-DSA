#include <bits\stdc++.h>
using namespace std;

bool checkPalindrome(string &str, int i, int j)
{
    if (i > j)
        return 1;

    if (str[i] != str[j])
        return 0;

    if (str[i] == str[j])
    {
        i++;
        j--;
    }

    return checkPalindrome(str, i, j);
}

int main()
{
    string str;

    cout << "enter the string :" << endl;

    cin >> str;

    int i = 0;
    int j = str.length() - 1;

    bool ans = checkPalindrome(str, i, j);

    if(ans)
    cout<<"string is palindrome";

    else
    cout<<"not palindrome";

    return 0;
}