/* https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/monk-and-inversions-arrays-strings/ */
#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define mod 1000000007
void check(ll a) { cout<<a<<endl; }
bool prime [1000001];
int m[20][20];
int n;
int sieve(int a){memset(prime,true,sizeof(prime));int p;int i;for(p=2;p*p<=a;p++){if(prime[p]==true){for(i=p*2;i<=a;i+=p)prime[i]=false;}}return 0;}
//vector<ll> a
//vector<pair<ll,ll> > a

int inversion(int val,int x,int y,int n){
	int c=0;
	for(int i=x;i<n;++i)
		for(int j=y;j<n;++j)
			if(m[i][j]<val)
				c++;
	return c;
}

int main(){
	//ifstream cin("testcase.txt");
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here
	int T;
	cin>>T;
	while(T--){
		cin>>n;
		int ans=0;
		for(int i=0;i<n;++i)
			for(int j=0;j<n;++j)
				cin>>m[i][j];
		
		for(int i=0;i<n;++i)
			for(int j=0;j<n;++j)
				ans+=inversion(m[i][j],i,j,n);
	
	cout<<ans<<endl;
		
	}


	//cout << setprecision (5) << ans << endl;
	return 0;
}

