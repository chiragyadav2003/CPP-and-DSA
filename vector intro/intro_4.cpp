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

    cout << "before pop_back size is = " << v.size() << endl;

    // pop_back function use to delete last element in vector
    // and it will also result in decrease in size of vector
    v.pop_back();

    cout << "after pop_back fun size is = " << v.size() << endl;

    // v.size() is used to get size of vector

    for (int i = 0; i < v.size(); i++)
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