#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
	
	//ifstream cin("testcase.txt");
	//Code Here
	long t;
	scanf("%ld",&t);
	while(t--){
		ll m;
		scanf("%ld",&m);
		vector<ll> a;
		ll ans=0;
		for(ll i=0;i<m;++i){
			ll temp;
			scanf("%ld",&temp);
			a.push_back(temp);
		}
		ll temp1,temp2;
		sort(a.begin(),a.end());

		while(a.size()>=2){
			temp1 = a[0];
			temp2 = a[1];
			ans = ans+(temp1+temp2-1);
			a.push_back(temp1+temp2);
			a.erase(a.begin());
			a.erase(a.begin());
			sort(a.begin(),a.end());		
		}
		cout<<ans<<endl;
	}
	return 0;
}

