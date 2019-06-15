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
	ll n,i;
	cin>>n;
	ll a[n],b[n],c1[6]={0},c2[6]={0},c[6],ans=0;
	for(i=0;i<n;++i){
		cin>>a[i];
		c1[a[i]]++;
	}
	for(i=0;i<n;++i){
		cin>>b[i];
		c2[b[i]]++;
	}
	for(i=1;i<6;++i)
		c[i]=c1[i]+c2[i];
	
	if((c[1]%2!=0) || (c[2]%2!=0) || (c[3]%2!=0) || (c[4]%2!=0) || (c[5]%2!=0))
		cout<<"-1"<<endl;
	
	else{
		for(i=1;i<6;++i){
			ans=ans+((fabs(c1[i]-c2[i]))/2);
		}
		ans=ans/2;
		cout<<ans<<endl;
	}
		
	
	return 0;
}

