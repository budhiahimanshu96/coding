#include<bits/stdc++.h>
using namespace std;
# define INF 0x3f3f3f3f
#define ll long long int 
// iPair ==>  Integer Pair
typedef pair<ll, ll> iPair;
 
// This class represents a directed graph using
// adjacency list representation
class Graph
{
    ll V;    // No. of vertices
 
    // In a weighted graph, we need to store vertex
    // and weight pair for every edge
    list< pair<ll, ll> > *adj;
 
public:
    Graph(ll V);  // Constructor
 
    // function to add an edge to graph
    void addEdge(ll u, ll v, ll w);
 
    // prints shortest path from s
    void shortestPath(ll s);
};
 
// Allocates memory for adjacency list
Graph::Graph(ll V)
{
    this->V = V;
    adj = new list<iPair> [V];
}
 
void Graph::addEdge(ll u, ll v, ll w)
{
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}
 
// Prints shortest paths from src to all other vertices
void Graph::shortestPath(ll src)
{
    // Create a priority queue to store vertices that
    // are being preprocessed. This is weird syntax in C++.
    // Refer below link for details of this syntax
    // http://geeksquiz.com/implement-min-heap-using-stl/
    priority_queue< iPair, vector <iPair> , greater<iPair> > pq;
 
    // Create a vector for distances and initialize all
    // distances as infinite (INF)
    vector<ll> dist(V, INF);
 
    // Insert source itself in priority queue and initialize
    // its distance as 0.
    pq.push(make_pair(0, src));
    dist[src] = 0;
 
    /* Looping till priority queue becomes empty (or all
      distances are not finalized) */
    while (!pq.empty())
    {
        // The first vertex in pair is the minimum distance
        // vertex, extract it from priority queue.
        // vertex label is stored in second of pair (it
        // has to be done this way to keep the vertices
        // sorted distance (distance must be first item
        // in pair)
        ll u = pq.top().second;
        pq.pop();
 
        // 'i' is used to get all adjacent vertices of a vertex
        list< pair<ll, ll> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
        {
            // Get vertex label and weight of current adjacent
            // of u.
            ll v = (*i).first;
            ll weight = (*i).second;
 
            //  If there is shorted path to v through u.
            if (dist[v] > dist[u] + weight)
            {
                // Updating distance of v
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
 
    // Print shortest distances stored in dist[]
    for (ll i = 0; i < V; ++i)
        printf("%d ",dist[i]);
}
 
// Driver program to test methods of graph class
int main()
{
	
	//ifstream cin("testcase.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	ll T;
	cin>>T;
	while(T--){
	    ll N,K,X,M,S;
	    cin>>N>>K>>X>>M>>S;
	    Graph g(N);
	
			for(ll i=0;i<K;++i){
				for(ll j=i+1;j<K;++j){
				    g.addEdge(i, j, X);
				}			
			}	 
			for(ll i=0;i<M;++i){
			ll a,b,c;
			cin>>a>>b>>c;
		    g.addEdge(a-1,b-1,c);			
			}
		    g.shortestPath(S-1);
	
		cout<<endl;	
	}
 
    return 0;
}
