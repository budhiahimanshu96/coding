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
		
		string A[4],B[4];
		for(int i=0;i<4;++i)
			cin>>A[i];
		for(int i=0;i<4;++i)
			cin>>B[i];
		
		int a=0;
		for(int i=0;i<4;++i){
			if(B[i]==A[0])
				a++;
			else if(B[i]==A[1])
				a++;
			else if(B[i]==A[2])
				a++;
			else if(B[i]==A[3])
				a++;
			
		}
		if(a>1)
		cout<<"similar"<<endl;
		else
		cout<<"dissimilar"<<endl;
		
	}



	//cout << setprecision (5) << ans << endl;
	return 0;
}
