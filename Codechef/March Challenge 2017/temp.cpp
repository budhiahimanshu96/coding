
#include<bits/stdc++.h>
using namespace std;

class AdjListNode
{
    long long int v;
    long long int weight;
	public:
    AdjListNode(long long int _v, long long int _w)  { v = _v;  weight = _w;}
    long long int getV()       {  return v;  }
    long long int getWeight()  {  return weight; }
};
 
// Class to represent a graph using adjacency list representation
class Graph
{
    long long int V;    // No. of vertices'
 
    // Polong long inter to an array containing adjacency lists
    list<AdjListNode> *adj;
 
    // A function used by shortestPath
    void topologicalSortUtil(long long int v, bool visited[], stack<long long int> &Stack);
	public:
    Graph(long long int V);   // Constructor
 
    // function to add an edge to graph
    void addEdge(long long int u, long long int v, long long int weight);
 
    // Finds shortest paths from given source vertex
    void shortestPath(long long int s);
};
 
Graph::Graph(long long int V)
{
    this->V = V;
    adj = new list<AdjListNode>[V];
}
 
void Graph::addEdge(long long int u, long long int v, long long int weight)
{
    AdjListNode node(v, weight);
    adj[u].push_back(node); 
}
 
void Graph::topologicalSortUtil(long long int v, bool visited[], stack<long long int> &Stack)
{
    // Mark the current node as visited
    visited[v] = true;
 
    // Recur for all the vertices adjacent to this vertex
    list<AdjListNode>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
    {
        AdjListNode node = *i;
        if (!visited[node.getV()])
            topologicalSortUtil(node.getV(), visited, Stack);
    }
 
    // Push current vertex to stack which stores topological sort
    Stack.push(v);
}
 
void Graph::shortestPath(long long int s)
{
    stack<long long int> Stack;
    long long int dist[V];
 
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (long long int i = 0; i < V; i++)
        visited[i] = false;
 
    // Call the recursive helper function to store Topological Sort
    // starting from all vertices one by one
    for (long long int i = 0; i < V; i++)
        if (visited[i] == false)
            topologicalSortUtil(i, visited, Stack);
 
    // Initialize distances to all vertices as infinite and distance
    // to source as 0
    for (long long int i = 0; i < V; i++)
        dist[i] = numeric_limits<long long int>::max() ;
    dist[s] = 0;
 
    // Process vertices in topological order
    while (Stack.empty() == false)
    {
        // Get the next vertex from topological order
        long long int u = Stack.top();
        Stack.pop();
 
        // Update distances of all adjacent vertices
        list<AdjListNode>::iterator i;
        if (dist[u] != numeric_limits<long long int>::max())
        {
          for (i = adj[u].begin(); i != adj[u].end(); ++i)
             if (dist[i->getV()] > dist[u] + i->getWeight())
                dist[i->getV()] = dist[u] + i->getWeight();
        }
    }
 
    // Prlong long int the calculated shortest distances
    for (long long int i = 0; i < V; i++)
        (dist[i] == numeric_limits<long long int>::max())? cout << "INF ": cout << dist[i] << " ";
}
 
// Driver program to test above functions
int main()
{
	
    Graph g(6);
    g.addEdge(0, 1, 5);
    g.addEdge(0, 2, 3);
    g.addEdge(1, 3, 6);
    g.addEdge(1, 2, 2);
    g.addEdge(2, 4, 4);
    g.addEdge(2, 5, 2);
    g.addEdge(2, 3, 7);
    g.addEdge(3, 4, -1);
    g.addEdge(4, 5, -2);
 
    long long int s = 1;
    cout << "Following are shortest distances from source " << s <<" \n";
    g.shortestPath(s);
 
    return 0;
}
