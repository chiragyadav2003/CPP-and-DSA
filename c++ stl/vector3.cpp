#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a(5, 1);

    // copy vector a in new vector last
    vector<int> last(a);
    cout << "print vector last " << endl;
    for (int i : last)
    {
        cout << i << " ";
    }
}