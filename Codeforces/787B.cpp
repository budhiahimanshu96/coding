#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007
void check(ll a) { cout<<a<<endl; }
bool prime [1000001];
int sieve(int a){memset(prime,true,sizeof(prime));int p;int i;for(p=2;p*p<=a;p++){if(prime[p]==true){for(i=p*2;i<=a;i+=p)prime[i]=false;}}return 0;}
vector<ll> a;
//vector<pair<ll,ll> > a;

int main(){
	//ifstream cin("testcase.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here
	ll n,m;
	cin>>n>>m;
	ll ans=0;
	for(ll i=0;i<m;++i){
		ll q;
		cin>>q;
//		vector<ll> a;
		if(q==1){
			ans = -1;
			break;			
		}
		if(ans==-1){
			break;
		}
		for(ll j=0;j<q;++j){
			ll z;
			cin>>z;
			a.push_back(z);
		}
		sort(a.begin(),a.end());
		for(ll j=0;j<q;++j){
			if(binary_search(a.begin(),a.end(),-a.at(j)))
				break;
			if(j==q-1)
				ans=-1;			
		}
	}
	if(ans==-1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

	return 0;
}
