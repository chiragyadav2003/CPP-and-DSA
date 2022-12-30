// 1. WAP for BFS and DFS of a graph.
#include <bits/stdc++.h>

using namespace std;

class graph
{
public:
    unordered_map<int, list<int>> adjList;

    void addEdge(int u, int v)
    {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    void printAdjList()
    {
        for (auto i : adjList)
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
void prepareAdjList(unordered_map<int, list<int>> &adjList, vector<pair<int, int>> &edges)
{
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
}

void dfs(int node, vector<int> &temp, unordered_map<int, list<int>> &adj, unordered_map<int, bool> &visited)
{
    temp.push_back(node);
    visited[node] = 1; // make visited true

    for (auto i : adj[node])
    {
        if (!visited[i])
        {
            dfs(i, temp, adj, visited); // recursive call
        }
    }
}

int main()
{
    graph g;
    int n;
    cout << "enter number of nodes/vertex : ";
    cin >> n;
    int e;
    cout << "enter number of edges : ";
    cin >> e;

    cout << "enter pair of number for edge : \n";

    vector<pair<int, int>> edgePair;

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
        edgePair.push_back(make_pair(u, v));
    }

    // cout << "\n Pair result :\n";
    // for (auto i : edgePair)
    // {
    //     cout << i.first << "  ----   " << i.second << "\n";
    // }

    cout << "\nGraph adjacent list is : \n";
    g.printAdjList();

    unordered_map<int, list<int>> adjList;
    unordered_map<int, bool> visited; // to check if we have visited a particular edge or not

    prepareAdjList(adjList, edgePair);

    vector<int> temp;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            // vector<int> temp;
            dfs(i, temp, adjList, visited);
        }
    }
    cout << "\n\nDFS traversal is : ";
    for (auto i : temp)
    {
        cout << i << " ";
    }

    return 0;
}