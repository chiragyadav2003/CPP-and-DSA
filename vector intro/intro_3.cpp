#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // here v[1] used to update i index element of vector
    v[1] = 100;

    // do not use []  for inserting element in vector
    v[3] = 4;
    v[4] = 9;

    v.push_back(44);
    v.push_back(54);

    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << endl;
    }
    /* cout<<v[0]<<endl;
     cout<<v[1]<<endl;
     cout<<v[2]<<endl;
     cout<<v[3]<<endl;
     cout<<v[4]<<endl;
     */
    return 0;
}