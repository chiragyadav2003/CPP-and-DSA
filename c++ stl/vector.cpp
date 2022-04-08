#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    cout << "capacity = " << v.capacity() << endl;
    cout << "size = " << v.size() << endl;

    v.push_back(1);
    cout << "capacity = " << v.capacity() << endl;
    cout << "size = " << v.size() << endl;

    v.push_back(2);
    cout << "capacity = " << v.capacity() << endl;
    cout << "size = " << v.size() << endl;

    v.push_back(3);
    cout << "capacity = " << v.capacity() << endl;
    cout << "size = " << v.size() << endl;

    cout << "vector created is as follows :" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "element at 1 index = " << v.at(2) << endl;

    cout << "first element = " << v.front() << endl;
    cout << "last element = " << v.back() << endl;

    cout << "************" << endl;

    cout << "before pop :" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl;

    cout << "capacity = " << v.capacity() << endl;
    cout << "size = " << v.size() << endl;

    v.pop_back();

    cout << "after pop :" << endl;

    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl;

    cout << "capacity = " << v.capacity() << endl;
    cout << "size = " << v.size() << endl;

    cout << "************" << endl;

    cout << "before clear = " << endl;
    cout << "capacity = " << v.capacity() << endl;
    cout << "size = " << v.size() << endl;

    v.clear();
    cout << "after clear = " << endl;
    cout << "capacity = " << v.capacity() << endl;
    cout << "size = " << v.size() << endl;

    return 0;
}