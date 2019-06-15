#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define mod 1000000007
void check(ll a) { cout<<a<<endl; }
bool prime [1000001];
int sieve(int a){memset(prime,true,sizeof(prime));int p;int i;for(p=2;p*p<=a;p++){if(prime[p]==true){for(i=p*2;i<=a;i+=p)prime[i]=false;}}return 0;}
//vector<ll> a
//vector<pair<ll,ll> > a

char s[1000000]={'a'};

int main(){
	ifstream cin("testcase.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here

	ll n;
	cin>>n;
	ll m=0;
	while(n--){
		string str;
		cin>>str;
		ll x=str.size();
		ll t;
		cin>>t;
		while(t--){
			ll a;
			cin>>a;
			if((a+x)>m)
				m=a+x;
			a--;
			for(ll i=a,j=0;j<x,i<=a+x;++i,++j){
				s[i]=str[j];
			}
		}
	}
	m--;
	cout<<m<<endl;
	for(ll i=0;i<m;++i){
		cout<<s[i];
	}

	//cout << setprecision (5) << ans << endl;
	return 0;
}
