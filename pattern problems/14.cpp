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

        while (col <= n)
        {

            char ch = 'A' + row + col - 2;

            //here output depends on both row and columd
            //so we write it under both only
            

            cout << ch << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}