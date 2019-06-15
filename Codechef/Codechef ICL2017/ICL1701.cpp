#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define mod 1000000007
void check(ll a) { cout<<a<<endl; }
bool prime [1000001];
int sieve(int a){memset(prime,true,sizeof(prime));int p;int i;for(p=2;p*p<=a;p++){if(prime[p]==true){for(i=p*2;i<=a;i+=p)prime[i]=false;}}return 0;}
//vector<pair<ll,ll> > a
int main(){
	//ifstream cin("testcase.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here
	ll N,K;
	ll ans=0;
	cin>>N>>K;
	ll A[N];
	ll B[N];
	vector<ll> a;
	
	for(ll i=0;i<N;++i){
		cin>>A[i];
	}	

		for(ll i=0;i<N-1;++i){
			if(A[i]<0){
				A[i]=A[i]*-1;
				A[i+1]=A[i+1]*-1;
				ans++;
				a.push_back(i+1);
			}
		}
		
		if(A[N-1]<0){
			ans++;
			a.push_back(N);
		}
		
	if(ans<=K){
	cout<<ans<<endl;
	for(ll i=0;i<a.size();++i){
		cout<<a[i]<<" ";
	}
	}
	else{
		cout<<"0"<<endl;
	}
	//cout << setprecision (5) << ans << endl;
	return 0;
}

