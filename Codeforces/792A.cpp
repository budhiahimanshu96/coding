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
ll a[200000];
ll c=0;
ll m=1e10;

int main(){
	//ifstream cin("testcase.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here
	ll n,i;
	cin>>n;
	ll diff[n-1];
	for(i=0;i<n;++i){
		cin>>a[i];
	}
	sort(a,a+n);
	for(i=0;i<n-1;++i){
		diff[i] = a[i+1]-a[i];
		m = min(diff[i],m);
	}
	for(i=0;i<n-1;++i){
		if(diff[i]==m)
			c++;
	}
	cout<<m<<" "<<c<<endl;
	return 0;
}

