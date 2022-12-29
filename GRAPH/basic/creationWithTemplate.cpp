#include <iostream>
#include <unordered_map>
#include <list>

using namespace std;

template <typename t>

class graph
{
public:
    unordered_map<t, list<t>> adj;

    void addEdge(t u, t v, bool direction)
    {
        // direction == 0 =>unordered
        // direction == 1 =>ordered
        adj[u].push_back(v);

        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for (auto i : adj)
        {
            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << j << " ,";
            }
            cout << endl;
        }
    }
};

int main()
{
    //    * for int
    // graph<int> g;

    // int n;
    // cout << "enter number of edges : ";
    // cin >> n;

    // cout << "enter value of nodes of edge respectively : \n";
    // for (int i = 0; i < n; i++)
    // {
    //     int u, v;
    //     cin >> u >> v;
    //     g.addEdge(u, v, 0);
    // }

    // g.printAdjList();

    // !for characters
    // graph<char> g;

    // int n;
    // cout << "enter number of edges : ";
    // cin >> n;

    // cout << "enter value of nodes of edge respectively : \n";
    // for (int i = 0; i < n; i++)
    // {
    //     char u, v;
    //     cin >> u >> v;
    //     g.addEdge(u, v, 0);
    // }

    // g.printAdjList();

    return 0;
}