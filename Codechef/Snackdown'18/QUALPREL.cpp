/* https://www.codechef.com/SNCKQL19/problems/QUALPREL */
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

	int T;
	cin>>T;
	while(T--){
		ll ans=0;
		ll N,K;
		
		cin>>N>>K;
		ll S[N];
		
		for(ll i=0;i<N;++i){
			cin>>S[i];
		}
		
		sort(S, S+N, greater<ll>());
		
		ll temp = S[K-1];
		for(ll i=0;i<N;++i){
			if(S[i]>=temp)
			ans++;
			else 
			break;
		}
		cout<<ans<<endl;
	}


	//cout << setprecision (5) << ans << endl;
	return 0;
}

