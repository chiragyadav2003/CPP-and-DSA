#include <iostream>
#include <unordered_map>
#include <list>

using namespace std;

class graph
{

public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool direction)
    {
        // direction == 0 =>undirected
        // direction == 1 =>directed
        adj[u].push_back(v);

        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printList()
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

    graph g;

    int m;
    cout << "enter number of edges :\n";
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int p, q;
        cout << "enter nodes of edges : \n";
        cin >> p >> q;
        g.addEdge(p, q, 0);
    }

    cout << "list is : \n";
    g.printList();

    return 0;
}