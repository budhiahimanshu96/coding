#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll n,m;
	cin>>n>>m;
	ll d[n+1];
	for(ll i=1;i<=n;++i)	cin>>d[i];
	ll sum=m;
	ll a;
	for(ll i=0;i<m;++i){
			cin>>a;
			sum+=a;
		}
	for(ll i=sum;i<=n;++i)
		if(d[i]){
			cout<<i<<endl;
			return 0;
		}
	cout<<"-1"<<endl;
	return 0;
}

