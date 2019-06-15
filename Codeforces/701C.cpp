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
	ll n;
	cin>>n;
	char s[n];
	scanf("%s",&s);
	int aa[52]={0};
	for(ll i=0;i<n;++i){
		if((int)s[i]>=65 || (int)s[i]<=90)
			aa[(int)s[i]-65]++;
		else if((int)s[i]>=97 || (int)s[i]<=122)
			aa[(int)s[i]-97+26]++;
	}
	ll type=0;
	for(ll i=0;i<52;++i){
		if(aa[i]>0)
			type++;
	}
//	cout<<type;

	
	
	
	//cout << setprecision (5) << ans << endl;
	return 0;
}

