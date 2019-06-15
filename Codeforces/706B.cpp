/*  */
#include<bits/stdc++.h>

using namespace std;

void check(long long a) { cout<<a<<endl; }
bool prime [1000001];
int sieve(int a){memset(prime,true,sizeof(prime));int p;int i;for(p=2;p*p<=a;p++){if(prime[p]==true){for(i=p*2;i<=a;i+=p)prime[i]=false;}}return 0;}
#define ll long long int
#define mod 1000000007
//vector<ll> a
//vector<pair<ll,ll> > a
ll n,q,i;
ll x[100000];

ll solve(ll m){
	ll l=0,r=n-1,ans,mid;
	while(l<=r){
		mid = (l+r)>>1;
		if(x[mid]<=m)
			l = mid+1;
		else
		r = mid-1;
	}	
	return r;
}


int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here
	cin>>n;
	for(i=0;i<n;++i)
		cin>>x[i];	
	sort(x,x+n);
	cin>>q;
	for(i=0;i<q;++i){
		ll m;
		cin>>m;
		ll ans = (solve(m)+1);
		if(m<x[0]){
			cout<<"0"<<endl;
		}
		else if(m>x[n-1]){
			cout<<n<<endl;
		}
		else
		cout<<ans<<endl;
	}
		
	return 0;
}

