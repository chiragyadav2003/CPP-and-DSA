#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    // given vector from which next smaller we have to find

    // all elements of given vector should be >=0
    vector<int> arr = {2, 1, 5, 6, 2, 3};

    stack<int> s;
    // we will push -1 in stack first as last element of vector's next greater element will be always -1
    s.push(-1);

    int n = arr.size();

    vector<int> ans(n);

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        int curr = arr[i];
        // we will pop element from stack until our top element becomes smaller than curr
        while (s.top() != -1 && arr[s.top()] >= curr)
        {
            s.pop();
        }
        // after this our top element will be smaller than our curr element

        ans[i] = s.top();
        // here i is index
        s.push(i);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}