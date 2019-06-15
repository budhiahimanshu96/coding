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

	ll n,m;
	cin>>n>>m;
	ll a[n][m];
	ll w=0,b=0;
	for(ll i=0;i<n;++i)
		for(ll j=0;j<m;++j){
			char temp;
			cin>>temp;
			if(temp=='W'){
				a[i][j]=0;
				w++;
			}
			else {
				a[i][j]=1;
				b++;
			}
		}
	
	
	ll colmax=-1,rowmax=-1,colmin=m,rowmin=n;
	
	for(ll i=0;i<n;++i)
		for(ll j=0;j<m;++j){
			if(a[i][j]==1){
				colmax=max(colmax,j);
				colmin=min(colmin,j);
				rowmax=max(rowmax,i);
				rowmin=min(rowmin,i);				
			}
		}	

	if(w==(n*m)){
		cout<<"1"<<endl;
		return 0;
	}

	ll side=max(colmax-colmin+1,rowmax-rowmin+1);
	
	if(side>n || side>m){
		cout<<"-1"<<endl;
		return 0;
	}
	
	cout<<side*side-b<<endl;

	return 0;
}
