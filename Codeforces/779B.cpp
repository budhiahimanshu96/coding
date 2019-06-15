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
	ll n,k,digits=0,temp=0,ans=0,t,zeros=0;
	cin>>n>>k;
	
	t=n;
	
	while(t>0){
		ll d;
		d=t%10;
		t=t/10;
		digits++;
		if(d==0)
		zeros++;
	}
	
	if(n==0)
		cout<<"0"<<endl;
	
	else if((k+1)>digits || zeros<k)
		cout<<digits-1;
	
	else{
		while(temp<k){
			if(n%10==0){
				n=n/10;
				temp++;
				
			}     
			else {
				n=n/10;
				ans++;
			}
		}
		cout<<ans<<endl;
	}
	
	return 0;
}

