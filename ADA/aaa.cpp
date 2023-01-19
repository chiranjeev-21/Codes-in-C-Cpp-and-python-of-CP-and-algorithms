#include <iostream>
#include <list>
#include <stack>
using namespace std;
class Graph
{
    int V;
    list<int> *adj;
    void topologicalSortUtil(int v, bool visited[],
                             stack<int> &Stack);

public:
    Graph(int V);
    void addEdge(int v, int w);
    void topologicalSort();
};
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}
void Graph::topologicalSortUtil(int v, bool visited[],
                                stack<int> &Stack)
{
    visited[v] = true;
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            topologicalSortUtil(*i, visited, Stack);
    Stack.push(v);
}
void Graph::topologicalSort()
{
    stack<int> Stack;
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
    for (int i = 0; i < V; i++)
        if (visited[i] == false)
            topologicalSortUtil(i, visited, Stack);
    while (Stack.empty() == false)
    {
        cout << Stack.top() << " ";
        Stack.pop();
    }
}
int main()
{
    Graph g(10);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 1);
    g.addEdge(2, 4);
    g.addEdge(3, 5);
    g.addEdge(3, 4);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(5, 1);
    g.addEdge(5, 2);
    g.addEdge(6, 3);
    g.addEdge(7, 1);
    g.addEdge(8, 1);
    g.addEdge(9, 2);
    cout << "Following is a Topological Sort of the given"<<"\n";
    g.topologicalSort();
    return 0;
}