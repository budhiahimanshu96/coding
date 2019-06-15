/*  */
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
	ll T;
	cin>>T;
	while(T--){
//		vector<ll> A;
		set<ll> first1;
		ll N,W;
		cin>>N>>W;
		N=N-1;
		while(N--){
			ll K;
			cin>>K;
			ll temp;
			for(ll i=0;i<K;++i){
				cin>>temp;
				//A.push_back(temp);
				first1.insert(temp);
			}
		}
		
		ll Q;
		cin>>Q;
		vector<ll> A(first1.begin(),first1.end());
		sort(A.begin(),A.end());
		while(Q--){
			ll l,r;
			ll ans=0;
			ll ans1=0;
			cin>>l>>r;
			if(l==0)
				l=1;
			
			vector<ll> answer1;
			for(ll i=0;i<A.size();++i){
				if(A.at(i)>=l && A.at(i)<=r)
					ans1++;
			}
			
			ans = r-l+1;	
				
			cout<<ans-ans1<<endl;
		}
	}
	return 0;
}
