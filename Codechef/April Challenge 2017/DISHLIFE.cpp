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
		
		int N,K;
		cin>>N>>K;		
		int A[K+1]={0};
		int count=0,tt=0;
		int all=0,some=0;
		int flag=0;
		for(int i=0;i<N;++i){
			int P,temp;
			cin>>P;
			for(int j=0;j<P;++j){
				cin>>temp;
				if(A[temp]==0){
					A[temp]=1;
					count++;
				}					
				if(count==K){
					if(i==N-1 && some!=1)
						all=1;
					else 
						some=1;
					break;
				}
			}
		}
		if(some==1)
			cout<<"some"<<endl;
		else if(all==1)
			cout<<"all"<<endl;
		else
			cout<<"sad"<<endl;		
		
	}
	//cout << setprecision (5) << ans << endl;
	return 0;
}
