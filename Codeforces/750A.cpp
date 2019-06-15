/*  */
#include<bits/stdc++.h>

using namespace std;

void check(long long a) { cout<<a<<endl; }
bool prime [1000001];
int sieve(int a){memset(prime,true,sizeof(prime));int p;int i;for(p=2;p*p<=a;p++){if(prime[p]==true){for(i=p*2;i<=a;i+=p)prime[i]=false;}}return 0;}
#define ll long long int
#define mod 1000000007
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	//Code Here
	
	ll n,k;
	cin>>n>>k;
	ll a = 240-k;

	ll ans=0,i=1;
	
	if(a<5){
		cout<<"0"<<endl;
	}
	else{
		while(a>=5*i){
			a = a - (5*i);
			i++;
			ans++;
		}
	if(ans>n)
		cout<<n<<endl;
	else	
	cout<<ans<<endl;		
	}
	
	
	return 0;
}


