/*  */
#include<bits/stdc++.h>

using namespace std;

void check(long long a){
cout<<a<<endl;
}
long long int gcd(long long int a, long long int b){
    if (b != 0)
       return gcd(b, a % b);
    else
       return a;
}
long long int lcm(long long int a, long long int b){
    return (a*b)/gcd(a, b);
}

#define ll long long int

int main()
{
	// Code here
	ll n,k;
	cin>>n>>k;
	ll a[n],b[n],i;
	for(i=0;i<n;++i){
		cin>>a[i];
	}
	for(i=0;i<n;++i){
		cin>>b[i];
	}
	
	
	vector<pair<ll,ll> > diff;
	vector<pair<ll,ll> > data;
	
	for(i=0;i<n;++i){
		data.push_back(make_pair(a[i],b[i]));
	}
	
	sort(data.begin(),data.end());
	
	
	for(i=0;i<n;++i){
		diff.push_back(make_pair(data.at(i).first-data.at(i).second,i));
	}
	
	sort(diff.begin(),diff.end());
	
	ll ans=0,x;
	for(i=0;i<n;++i){
			x=(diff.at(i).second);		
			if((diff.at(i).first<0)||i<k){				
				ans=ans+data.at(x).first;	
			}	
			else{
				ans=ans+data.at(x).second;
			}
	}
	
	cout<<ans<<endl;
	
	return 0;
}

