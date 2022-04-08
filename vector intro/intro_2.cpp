#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v[1] = 100;

    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;

    return 0;
}