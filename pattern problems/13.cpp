#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << endl;

    int row = 1;
    char ch = 'A';

    // here it is independent of row and column
    // and behaves as of case of counting series
    // so we write it as in upper part

    while (row <= n)
    {
        int col = 1;

        while (col <= n)
        {

            cout << ch << " ";
            ch = ch + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}