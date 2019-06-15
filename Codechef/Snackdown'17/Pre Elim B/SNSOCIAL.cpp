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
	
	int T;
	cin>>T;
	while(T--){
		ll n,m;
		cin>>n>>m;
		ll a[n][m];
		ll min,max;
		for(ll i=0;i<n;++i){
			for(ll j=0;j<m;++j){
				cin>>a[i][j];
			}
		}
		ll answer;
		vector<ll> ans;
		min=a[0][0];
		max=a[0][0];
		for(ll i=0;i<n;++i){
			for(ll j=0;j<m;++j){
				if(min>a[i][j])
					min=a[i][j];
				if(max<a[i][j])
					max=a[i][j];
			}
		}
				
		for(ll i=0;i<n;++i){
			for(ll j=0;j<m;++j){
				if(a[i][j]==min){
					answer= mod;
					for(ll x=0;x<n;++x){
						for(ll y=0;y<m;++y){
							if(a[x][y]==max){
								ll temp1,temp2,temp3;
								temp1 = fabs(x-i);
								temp2 = fabs(y-j);
								temp3 = (temp1>=temp2)?temp1:temp2;
								answer = (answer<=temp3)?answer:temp3;
							}
						}
					}
				}
				ans.push_back(answer);
			}
		}
		sort(ans.begin(),ans.end());
		if(min==max)
		cout<<"0"<<endl;
		else
		cout<<ans.at(ans.size()-1)<<endl;
		ans.clear();
			
	}

	return 0;
}
