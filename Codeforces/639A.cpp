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
	//Code here
	ll n,k,q;
	cin>>n>>k>>q;
	ll temp,i;
//	vector<pair<ll,ll> > t;
	
	ll online[n+1]={0};
	ll relation[n+1];
	for(i=1;i<=n;++i){
		cin>>relation[i];
//		t.push_back(make_pair(relation[i],i+1));	
	}
	
	vector<pair<ll,ll> > A;
			
	while(q--){
		ll a,id,count=0;
		cin>>a>>id;
		if(a==1){
				A.push_back(make_pair(relation[id],id));
				online[id]=1;
				sort(A.begin(),A.end());
				while(A.size()>k){
					online[A.at(0).second]=0;
					A.erase(A.begin());
				}
/*			for(i=0;i<A.size();++i)
				cout<<A.at(i).first<<" "<<A.at(i).second<<endl;
*/			}
		
		else if(a==2){
			if(online[id]==0)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl;
		}
	}
	
	return 0;
}


