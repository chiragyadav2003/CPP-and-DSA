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
                cout << j << "  ";
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

int main()
{
    graph g;
    int n;
    cout << "enter number of nodes/vertex : ";
    cin >> n;

    int p = n;

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

    unordered_map<int, list<int>> adjList;

    prepareAdjList(adjList, edgePair);

    // create indegree storing vector
    // we must specify size also
    vector<int> indegree(n);

    for (auto i : adjList)
    {
        for (auto j : i.second)
        {
            indegree[j]++;
        }
    }

    // create queue and insert all indegree element
    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        if (indegree[i] == 0)
            q.push(i);
    }

    cout << "\nInitial indegree vector is : ";
    for (auto i : indegree)
    {
        cout << i << " ";
    }

    // create final answer vector
    vector<int> ans;

    cout << "ans size = " << ans.size();

    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        ans.push_back(front);

        cout << "\nfront = " << front;

        for (auto neighbour : adjList[front])
        {
            indegree[neighbour]--;
            if (indegree[neighbour] == 0)
            {
                q.push(neighbour);
            }
        }
    }

    cout << "\nSize of final answer is - " << ans.size();

    cout << "\n\nTopological sorting using KAHN's algorithm or BFS traversal is : ";

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}