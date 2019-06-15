#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define mod 1000000007
void check(ll a) { cout<<a<<endl; }
bool prime [1000001];
int sieve(int a){memset(prime,true,sizeof(prime));int p;int i;for(p=2;p*p<=a;p++){if(prime[p]==true){for(i=p*2;i<=a;i+=p)prime[i]=false;}}return 0;}
//vector<ll> a
//vector<pair<ll,ll> > a
ll n,k;

int main(){
	//ifstream cin("testcase.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here
	ll i;
	cin>>n>>k;
	ll a[n],b[n];
	for(i=0;i<n;++i)
		cin>>a[i];
	for(i=0;i<n;++i)
		cin>>b[i];
	ll c[n],d[n];
	for(i=0;i<n;++i){
		c[i] = b[i] / a[i];
		d[i] = b[i] % a[i];
	}
	ll mini = c[0];
	for(i=0;i<n;++i)	
			mini = min(mini,c[i]);
	

			
	//cout << setprecision (5) << ans << endl;
	return 0;
}
