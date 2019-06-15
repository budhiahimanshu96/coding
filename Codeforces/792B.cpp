#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define mod 1000000007
void check(ll a) { cout<<a<<endl; }
bool prime [1000001];
int sieve(int a){memset(prime,true,sizeof(prime));int p;int i;for(p=2;p*p<=a;p++){if(prime[p]==true){for(i=p*2;i<=a;i+=p)prime[i]=false;}}return 0;}
vector<ll> a;
//vector<pair<ll,ll> > a

int main(){
	//ifstream cin("testcase.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here
	ll n,k;
	cin>>n>>k;
	for(ll i=1;i<=n;++i)
		a.push_back(i);	

	for(ll i=0;i<k;++i){
		ll aa;
		cin>>aa;
	}


	//cout << setprecision (5) << ans << endl;
	return 0;
}
