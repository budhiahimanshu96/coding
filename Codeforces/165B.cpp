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

ll solve(ll a , ll b){
	ll l,r,mid;
	l = 1;
	r = a+a;
	ll temp=0,ans=0;
	while(l<r){
		mid = (l+r)/2;
//		cout<<"MID:"<<mid<<" ";
		temp=mid;
		ans=0;
		while(temp){
			ans += temp;
			temp/=b;
//			cout<<"ANS no. "<<i<<" for "<<mid<<" "<<ans<<" ";
		}
//		cout<<endl;
		if(ans<a) l = mid+1;
		else r = mid;
	}
	return l;	
}

int main(){
	//ifstream cin("testcase.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here
	ll n,k;
	cin>>n>>k;
	cout<<solve(n,k)<<endl;
	//cout << setprecision (5) << ans << endl;
	return 0;
}
