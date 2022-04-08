#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {

        // print space i.e, 1'st triangle

        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }

        // print 2'nd triangle

        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }

        // print 3'rd triangle

        int start = i - 1;
        while (start)
        {
            cout << start;
            start--;
        }
        cout << endl;
        i++;
    }

    return 0;
}