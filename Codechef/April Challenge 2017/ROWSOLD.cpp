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
	
	int T;
	cin>>T;
	while(T--){
		string S;
		cin>>S;
		ll cnt=0;
		ll ans=0;
		int flag=0;
		for(int i=S.size()-1;i>=0;--i){
			if(S[i]=='0'){
				cnt++;				
				flag=0;				
			}
			else if(S[i]=='1'){
				if(cnt!=0 && flag==0){
					cnt++;
					flag=1;					
				}
				ans=ans+cnt;
			}
		}
		cout<<ans<<endl;
	}
	//cout << setprecision (5) << ans << endl;
	return 0;
}
