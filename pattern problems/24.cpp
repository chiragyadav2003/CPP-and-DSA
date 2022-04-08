#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    int count = 1;

    while (i <= n)
    {
        // pehle space print kar lete hain
        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        int j = 1;

        while (j <= i)
        {
            cout << count;
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}