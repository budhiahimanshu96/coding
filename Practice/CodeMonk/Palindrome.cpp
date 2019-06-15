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
	
	int T;
	cin>>T;
	while(T--){
		string s;
		cin>>s;
		int len;
		len=s.size();
		
		int flag=1;
		for(int i=0;i<len/2;++i)
			if(s[i]!=s[len-1-i])
				flag=0;
		
		if(flag==0)
		cout<<"NO"<<endl;
		
		else if(flag==1){
			if(len%2==0)
				cout<<"YES EVEN"<<endl;
			else 
				cout<<"YES ODD"<<endl;
		}
	}



	//cout << setprecision (5) << ans << endl;
	return 0;
}
