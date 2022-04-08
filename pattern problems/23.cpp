#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        int space = 1;

        while (space <= n - i)

        //if we put condition of space inside while
        //it should be in increasing sequence
        //space++
        {
            cout << " ";
            space++;
        }

        while (j <= i)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}