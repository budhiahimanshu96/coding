/* https://www.hackerearth.com/problem/algorithm/monk-being-monitor/ */
#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define mod 1000000007
void check(ll a) { cout<<a<<endl; }
bool prime [1000001];
int sieve(int a){memset(prime,true,sizeof(prime));int p;int i;for(p=2;p*p<=a;p++){if(prime[p]==true){for(i=p*2;i<=a;i+=p)prime[i]=false;}}return 0;}
//vector<ll> a
vector<pair<ll,ll> > a;
ll h[100000];
ll freq(ll v,ll no){
	ll ans=0;
	for(ll i=0;i<no;++i)
		if(h[i]==v)
			ans++;
	
	return ans;
}

bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
}

int main(){
	//ifstream cin("testcase.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here

	int T;
	cin>>T;
	while(T--){
		ll n;
		cin>>n;
		for(ll i=0;i<n;++i)
			cin>>h[i];
		
		for(ll i=0;i<n;++i)
			a.push_back( make_pair(h[i],freq(h[i],n)) );
		
		sort(a.begin(),a.end(),sortbysec);
		
		for(ll i=0;i<n;++i)
			cout<<a[i].first<<" "<<a[i].second<<endl;		
		
		if(a[n-1].second-a[0].second <=0)
		cout<<1<<endl;
		else
		cout<<a[n-1].second-a[0].second<<endl;
	}


	//cout << setprecision (5) << ans << endl;
	return 0;
}

