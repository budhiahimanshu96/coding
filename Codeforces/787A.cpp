#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007
void check(ll a) { cout<<a<<endl; }
bool prime [1000001];
int sieve(int a){memset(prime,true,sizeof(prime));int p;int i;for(p=2;p*p<=a;p++){if(prime[p]==true){for(i=p*2;i<=a;i+=p)prime[i]=false;}}return 0;}
vector<ll> A,B;
//vector<pair<ll,ll> > a

int main(){
	//ifstream cin("testcase.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here
	
	ll a,b,c,d;
	cin>>a>>b>>c>>d;
	if(b==d){
		cout<<b<<endl;
		return 0;
	}
	
	for(ll i=1;i<1000;++i){
		for(ll j=1;j<1000;++j){
			if((j*c - i*a) == (b-d+c-a)){
				cout<<(b+(i-1)*a)<<endl;
				return 0;
			}
		}
	}
	cout<<-1<<endl;
	//cout << setprecision (5) << ans << endl;
	return 0;
}

