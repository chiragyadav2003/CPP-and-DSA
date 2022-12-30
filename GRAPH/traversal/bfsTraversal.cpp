#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adj; // here we are assuming thar graph is undirected

    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // void printAdjList()
    // {
    //     for (auto i : adj)
    //     {
    //         cout << i.first << " -> ";
    //         for (auto j : i.second)
    //         {
    //             cout << j << " ";
    //         }
    //         cout << endl;
    //     }
    // }
};

void bfs(unordered_map<int, list<int>> &adjList, unordered_map<int, bool> &visited, vector<int> &ans, int node)
{
    queue<int> q;
    q.push(node);
    visited[node] = 1;

    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();
        ans.push_back(frontNode);

        for (auto i : adjList[frontNode])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

void createAdjList(vector<pair<int, int>> &edgePair, unordered_map<int, list<int>> &adjList)
{
    for (int i = 0; i < edgePair.size(); i++)
    {
        int u = edgePair[i].first;
        int v = edgePair[i].second;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
}

int main()
{
    Graph G;
    int n;
    cout << "enter number of vertices : ";
    cin >> n;
    int e;
    cout << "enter number of edges : ";
    cin >> e;

    vector<pair<int, int>> edgePair;

    cout << "enter pair of numbers of edge : \n";
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        edgePair.push_back(make_pair(u, v));
    }

    cout << "\nEdge pair list is : \n";
    for (auto i : edgePair)
    {
        cout << i.first << " - " << i.second << endl;
    }

    // adjoint list of graph
    unordered_map<int, list<int>> adjList;
    createAdjList(edgePair, adjList);
    cout << "\nAdj list of graph is : ";
    for (auto i : adjList)
    {
        cout << i.first << " -> ";
        for (auto j : i.second)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    unordered_map<int, bool> visited;
    vector<int> ans; // store traveral

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            bfs(adjList, visited, ans, i);
        }
    }

    cout << "\nBFS traversal is : ";
    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}