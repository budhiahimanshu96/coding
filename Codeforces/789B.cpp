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
	ll b,q,l,m;
	cin>>b>>q>>l>>m;
	ll a[m],n=m;
	for(ll i=0;i<m;++i)
		cin>>a[i];
	
	sort(a,a+n);
		
	ll ans=0;
	if(fabs(b)>l)
		cout<<"0"<<endl;

	else if(b==0){
		if(binary_search(a,a+n,b))
		cout<<"0"<<endl;
		else
		cout<<"inf"<<endl;
	}
	else if(q==0){
		if(binary_search(a,a+n,b) && binary_search(a,a+n,0))
		cout<<"0"<<endl;
		else if(binary_search(a,a+n,b) && !binary_search(a,a+n,0))
		cout<<"inf"<<endl;
		else if(!binary_search(a,a+n,b) && binary_search(a,a+n,0))
		cout<<"1"<<endl;
		else if(!binary_search(a,a+n,b) && !binary_search(a,a+n,0))
		cout<<"inf"<<endl;					
	}
	
	else if(fabs(q)==1){
		if(q==1){
			if(binary_search(a,a+n,b))
				cout<<"0"<<endl;
			else
			cout<<"inf"<<endl;
		}
		else if(q==-1){
			if(binary_search(a,a+n,b) && binary_search(a,a+n,-b))
				cout<<"0"<<endl;
			else
			cout<<"inf"<<endl;
		}
	}
	
	else{
			if(!binary_search(a,a+n,b))
				ans++;
				b=b*q;
				while(fabs(b)<=l){
					if(!binary_search(a,a+n,b))
						ans++;
					b=b*q;					
				}
				cout<<ans<<endl;
	}
	

	return 0;
}
