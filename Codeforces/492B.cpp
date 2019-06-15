/*  */
#include<bits/stdc++.h>

using namespace std;

void check(long long a) { cout<<a<<endl; }
bool prime [1000001];
int sieve(int a){memset(prime,true,sizeof(prime));int p;int i;for(p=2;p*p<=a;p++){if(prime[p]==true){for(i=p*2;i<=a;i+=p)prime[i]=false;}}return 0;}
#define ll long long int
#define mod 1000000007
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here
	
	ll n,l,i;
	cin>>n>>l;
	ll a[n];
	for(i=0;i<n;++i){
		cin>>a[i];
	}
	
	sort(a,a+n);
	ll maxdist = 0;
	for(i=0;i<n-1;++i){
		maxdist = max(a[i+1]-a[i],maxdist);
	}
	
	double ans = max(maxdist,2*max(a[0],l-a[n-1]));
	
	printf("%.10f\n",ans/2.0);
//	cout<<ans/2.0<<setprecision(10)<<endl;
		
	
	return 0;
}


