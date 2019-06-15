#include<bits/stdc++.h>
using namespace std;
# define ll long long int 
# define INF numeric_limits<ll>::max()
typedef pair<ll, ll> iPair;
 
class Graph
{
    ll V;    // No. of vertices
 
    list< pair<ll, ll> > *adj;
 
public:
    Graph(ll V);  // Constructor
 
    void addEdge(ll u, ll v, ll w);
 
    void shortestPath(ll s);
};
 
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
 
void Graph::shortestPath(ll src)
{
    priority_queue< iPair, vector <iPair> , greater<iPair> > pq;
 
    vector<ll> dist(V, INF);
 
    pq.push(make_pair(0, src));
    dist[src] = 0;
 
    while (!pq.empty())
    {
        ll u = pq.top().second;
        pq.pop();
 
        list< pair<ll, ll> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
        {
            ll v = (*i).first;
            ll weight = (*i).second;
 
            if (dist[v] > dist[u] + weight)
            {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
 
    for (ll i = 0; i < V; ++i)
        printf("%d ",dist[i]);
}
 
// Driver program to test methods of graph class
int main()
{
	
	ifstream cin("testcase.txt");
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
