/* https://www.codechef.com/SNCK1A19/problems/CARDMGK# */
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

	int T;
	cin>>T;
	while(T--){
		ll N;
		cin>>N;
		ll A[N];
		for (ll i=0;i<N;++i){
			cin>>A[i];
		}
		
		if(A[0]<A[1]){
				bool ini = true;
				
				ll i=0;
				for(;i<N;++i){
					if(A[i]>A[i+1]){
						//cout<<1<<endl;
						break;
					}
				}
				i++;
						//cout<<1<<" "<<i<<endl;
				for(;i<N-1;++i){
					if(A[i]>A[i+1]){
						//cout<<A[i]<<A[i+1]<<endl;
						//cout<<0<<endl;
						ini=false;
						break;
					}
				}
			if(ini){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else{
			cout<<"NO"<<endl;
		}
	}


	//cout << setprecision (5) << ans << endl;
	return 0;
}

