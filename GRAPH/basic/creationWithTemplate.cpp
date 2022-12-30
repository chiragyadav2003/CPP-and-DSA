#include <bits/stdc++.h>

using namespace std;

template <typename t>

class graph
{
public:
    unordered_map<t, list<t>> adjList;

    void addEdge(t u, t v, bool direction)
    {
        // direction = 0  for undirected
        // direction = 1  for directed

        adjList[u].push_back(v);

        if (direction == 0)
        {
            adjList[v].push_back(u);
        }
    }

    void print()
    {
        for (auto i : adjList)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << " , ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cout << "enter number of node : ";
    cin >> n;

    int m;
    cout << "enter number of edges : ";
    cin >> m;

    graph<int> g;

    cout << "enter edge pair for unordered graph storing int data : \n";
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        g.addEdge(u, v, 0);
    }
    g.print();

    graph<char> g2;

    cout << "enter edge pair for unordered graph storing character data : \n";
    for (int i = 0; i < m; i++)
    {
        char u, v;
        cin >> u >> v;

        g2.addEdge(u, v, 0);
    }

    g2.print();

    return 0;
}