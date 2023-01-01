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
    }
}

void topoSort(int node, stack<int> &s, unordered_map<int, list<int>> &adjList, unordered_map<int, bool> &visited)
{

    visited[node] = 1;

    for (auto neighbour : adjList[node])
    {
        if (!visited[neighbour])
        {
            topoSort(neighbour, s, adjList, visited);
        }
    }

    // during return we will insert the data in stack
    s.push(node);
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

    cout << "\nGraph adjacent list is : \n";
    g.printAdjList();

    unordered_map<int, list<int>> adjList; // prepare adj list
    unordered_map<int, bool> visited;      // to check if we have visited a particular edge or not

    prepareAdjList(adjList, edgePair);

    vector<int> temp;

    stack<int> s; // to return input in LIFO order

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            // vector<int> temp;
            topoSort(i, s, adjList, visited);
        }
    }

    while (!s.empty())
    {
        temp.push_back(s.top());
        s.pop();
    }

    cout << "size = " << temp.size();

    cout << "\n\nTOPOLOGICAL sort using DFS traversal is : ";
    for (auto i : temp)
    {
        cout << i << " ";
    }

    return 0;
}