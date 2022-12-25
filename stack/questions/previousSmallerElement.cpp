#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    // given vector from which previous smaller we have to find

    // all elements of given vector should be >=0
    vector<int> arr = {1, 3, 2, 6, 4, 7};

    stack<int> s;
    // we will push -1 in stack first as first element of vector's previous greater element will be always -1
    s.push(-1);

    int n = arr.size();

    vector<int> ans(n);

    for (int i = 0; i < arr.size(); i++)
    {
        int curr = arr[i];
        // we will pop element from stack until our top element becomes smaller than curr
        while (s.top() >= curr)
        {
            s.pop();
        }
        // after this our top element will be smaller than our curr element

        ans[i] = s.top();
        s.push(curr);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}