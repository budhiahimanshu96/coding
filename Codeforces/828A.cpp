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

	ll n,a,b;
	cin>>n>>a>>b;
	ll arr[n];
	for(ll i=0;i<n;++i){
		cin>>arr[i];
	}
	
	ll ans=0;
	ll twoone=0;
	for(ll i=0;i<n;++i){
		if(arr[i]==1){
			if(a>0){
				a--;
			}
			else{
				if(b>0){
					b--;
					twoone++;
				}
				else if(twoone>0){
					twoone--;
				}
				else{
					ans++;
				}
			}
		}
		else if(arr[i]==2){
			if(b>0){
				b--;
			}
			else{
				ans+=2;
			}
		}
		//cout<<"a="<<a<<" b="<<b<<endl;
	}

	cout<<ans<<endl;
	//cout << setprecision (5) << ans << endl;
	return 0;
}
