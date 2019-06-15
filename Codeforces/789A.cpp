/*  */
#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define mod 1000000007
void check(ll a) { cout<<a<<endl; }
bool prime [1000001];
int sieve(int a){memset(prime,true,sizeof(prime));int p;int i;for(p=2;p*p<=a;p++){if(prime[p]==true){for(i=p*2;i<=a;i+=p)prime[i]=false;}}return 0;}
//vector<ll> a
//vector<pair<ll,ll> > a
int main(){
	//ifstream cin("testcase.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here
	ll n,k;
	ll ans=0;
	cin>>n>>k;
	ll w[n];
	ll i;
	for(i=0;i<n;++i){
		cin>>w[i];
		if(w[i]<=k)
			w[i]=1;
		else{
			ll temp1;
			temp1 = w[i]%k;
			if(temp1==0)
				w[i]=w[i]/k;
			else 
				w[i]=(w[i]/k)+1;
		}					
	}
	
	for(i=0;i<n;++i){
		ans = ans+w[i];
	}
	ans = (ans/2) + (ans%2);
	cout<<ans<<endl;
	
	return 0;
}
