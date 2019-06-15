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

int main(){
	//ifstream cin("testcase.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here

	ll n;
	cin>>n;

    ll* list = new ll[n];
	
	ll arr[n];
	for(ll i=1;i<=n;++i){
		arr[i-1]=i;
	}    

    for( ll i = 0; i < n; ++i) {
        cin >> list[i];
    }

	ll perm=0,min=0;
	
	ll diff=0;
	
	for(ll p=0;p<n;++p){
		min = min + fabs(list[p]-arr[p]);	
	}

	for(ll p=1;p<n;++p){
		diff=0;
	    ll* temp = new ll[1];
	
	    for( ll i = n-1; i < n ; ++i) {
	        temp[i-n+1] = list[i];
	    }
	
	    for( ll i = n-1; i >= 1; --i) {
	        list[i] = list[i-1];
	    }
	
	    for( ll i = 0; i < 1; ++i) {
	        list[i] = temp[i];
	    }	
	    
		delete [] temp;	

		for(ll i=0;i<n;++i){
			diff = diff + fabs(list[i]-arr[i]);	
		}
		
		if(diff<min){
			min=diff;
			perm=p;
		}
	}
	
	cout<<min<<" "<<perm<<endl;
	
	return 0;
}
