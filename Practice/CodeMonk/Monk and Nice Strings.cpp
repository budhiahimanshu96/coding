/* https://www.hackerearth.com/practice/algorithms/sorting/insertion-sort/practice-problems/algorithm/monk-and-nice-strings-3/ */
#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define mod 1000000007
void check(ll a) { cout<<a<<endl; }
bool prime [1000001];
int sieve(int a){memset(prime,true,sizeof(prime));int p;int i;for(p=2;p*p<=a;p++){if(prime[p]==true){for(i=p*2;i<=a;i+=p)prime[i]=false;}}return 0;}
//vector<ll> a
//vector<pair<ll,ll> > a
string s[1000];
ll checkNumberSmall(string a, ll index){
	ll ans=0;
	for(ll i=0;i<index;++i){
		if(s[i]<a)
		ans++;
	}
	return ans;
}

int main(){
	//ifstream cin("testcase.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here

	int T;
	//cin>>T;
	T=1;
	while(T--){
		ll n;
		cin>>n;
		for(ll i=0;i<n;++i){
			cin>>s[i];
		}
		
		for(ll i=0;i<n;++i){
			cout<<checkNumberSmall(s[i],i)<<endl;
		}
	}


	//cout << setprecision (5) << ans << endl;
	return 0;
}

