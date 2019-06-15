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
	int cnt;
	cin>>T;
	while(T--){
		int N;
		cin>>N;
		int A[N][N];
		cnt=0;
		for(int i=0;i>N;++i)
			for(int j=0;j<N;++j)
				cin>>A[i][j];
				
		for(int i=0;i<N;++i)
			for(int j=0;j<N;++j)
				for(int p=0;p<N;++p)
					for(int q=0;q<N;++q)
					if((i<=p) && (j<=q))
						if(A[i][j]>A[p][q]){
							cnt++; cout<<A[i][j]<<" ";							
						}
							
	
		cout<<cnt<<endl;
	}


	//cout << setprecision (5) << ans << endl;
	return 0;
}
