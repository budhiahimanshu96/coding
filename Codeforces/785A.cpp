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
	
	ll n,ans=0;
	cin>>n;
	string s;
	for(ll i=0;i<n;++i){
		cin>>s;
		if(s[0]=='T')
		ans=ans+4;
		if(s[0]=='C')
		ans=ans+6;
		if(s[0]=='O')
		ans=ans+8;
		if(s[0]=='D')
		ans=ans+12;
		if(s[0]=='I')
		ans=ans+20;
		
	}
	
	cout<<ans<<endl;	
		
	return 0;
}


