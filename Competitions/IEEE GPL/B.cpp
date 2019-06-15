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
	ifstream cin("testcase.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here
	ll N,K,C,T;
	cin>>N>>K>>C>>T;
	ll P[N],S[N];
	bool flag[N];
	for(ll i=0;i<N;++i){
		flag[i]=false;
	}
	
	for(ll i=0;i<N;++i){
		cin>>P[i];
		P[i]=C-P[i];
	}
	for(ll i=0;i<N;++i)
		cin>>S[i];

	
	float time[N];
	for(ll i=0;i<N;++i)
		time[i] = P[i]/S[i];
		
	ll count=0;
	for(ll i=0;i<N;++i){
		if(time[i]<=T){
		count++;
		flag[i]=true;
		}
			
	}
	
	if(count<K)
		cout<<"IMPOSSIBLE"<<endl;
	else{
		ll rem=0;
		ll ans=0;
		for(ll i=N-1;i>=0;--i){
			if(rem==K)
				break;
			else{
				if(flag[i]==false){			
					for(ll j=i-1;j>=0;--j){
						if(flag[j]){
							//cout<<"11"<<endl;
							bool tt;
							tt =flag[i];
							flag[i] = flag[j];
							flag[j]=tt; 
							ans = ans+(i-j);
							break;
						}
					}
				}
				rem=rem+1;	
			}
		}
	cout<<ans<<endl;	
	}
	//cout << setprecision (5) << ans << endl;
	return 0;
}
