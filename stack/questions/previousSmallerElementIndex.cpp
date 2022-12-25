#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    // given vector from which previous smaller we have to find

    // all elements of given vector should be >=0
    vector<int> arr = {2, 1, 5, 6, 2, 3};

    stack<int> s;
    // here we will be inserting index in the stack
    //  we will push -1 in stack first as first element of vector's previous greater element will be always -1
    s.push(-1);

    int n = arr.size();

    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        // we will pop element from stack until our top element becomes smaller than curr
        // here we will be comparing values of index as stack is storing indexes
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