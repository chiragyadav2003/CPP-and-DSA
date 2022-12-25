#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
    // creation of map
    unordered_map<string, int> m;

    // insertion in map
    // for first time insertion there will be creation and for next time insertion, corrospond to that key then value will be updated
    // 1-creation will occur w.r.t. naman
    pair<string, int> p = make_pair("naman", 2);
    m.insert(p);

    // 2-creation will occur w.r.t. rahul
    pair<string, int> p2("rahul", 4);
    m.insert(p2);

    // 3-creation will occur w.r.t. ajay
    m["ajay"] = 3;
    //  now value corrospond to key "ajay" will be updated
    m["ajay"] = 7;

    // searching
    // 1
    cout << "value in map wrt key :" << endl;
    cout << "ajay : " << m["ajay"] << endl;
    // 2
    cout << "rahul : " << m.at("rahul") << endl;

    // searching value wrt an unknown key using at operator
    // it will give error as - terminate called after throwing an instance of 'std::out_of_range' what():  unordered_map::at
    // here no entry is present corrospond to ram so it will give error
    // cout << m.at("ram") << endl;

    // searching unknown value using m[" "]first and then at operator
    // here an entry is created wrt lalit and it will be storing 0 value
    cout << "lalit : " << m["lalit"] << endl;
    // now wrt lalit it will not give error even if we use at operator as an entry is created wrt lalit
    cout << "lalit : " << m.at("lalit") << endl;

    // size
    // here 4 entries are present -naman , ajay, rahul, lalit
    cout << "size = " << m.size() << endl;

    // to check presence of any key in a map
    // key ram is not present in map so it will give 0
    cout << "checking presence of key in map : " << endl;
    cout << "ram : " << m.count("ram") << endl;
    // key lalit is present in map whether it holds value 0
    // but it is present in map so count function will give output 1
    cout << "lalit : " << m.count("lalit") << endl;
    // key lalit is present in map
    cout << "ajay : " << m.count("ajay") << endl;

    // printing map
    // 1 - using auto function
    cout << "printing map :" << endl;
    for (auto i : m)
    {
        cout << i.first << " - " << i.second << endl;
    }
    cout << endl;

    // 2 - using iterator
    cout << "printing using iterator :" << endl;
    unordered_map<string, int>::iterator it = m.begin();
    while (it != m.end())
    {
        cout << it->first << " - " << it->second << endl;

        it++;
    }
    cout << endl;

    // erase
    m.erase("ajay");
    cout << "after erasing :" << endl;
    cout << "size = " << m.size() << endl;
    return 0;
}