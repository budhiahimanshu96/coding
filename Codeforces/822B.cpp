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

	ll n,m;
	cin>>n>>m;
	string s,t;
	cin>>s>>t;
	
	vector<ll> ans,temp;
	ll sym=n,temp1;
	
	for(ll i=0;i<n;++i){
		for(ll j=0;j<)
	}
	


	//cout << setprecision (5) << ans << endl;
	return 0;
}
