#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << endl;

    int row = 1;

    while (row <= n)
    {
        int col = 1;
        char ch = 'A' + n - row;
        // first number of every row is given by this

        while (col <= row)
        {

            cout << ch << " ";
            ch = ch + 1;

            // it will give output for col

            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}